from typing import List, Union
from concurrent.futures import Future
from abc import abstractmethod, ABCMeta
import PyAPI.structures as THUAI6


class ILogic(metaclass=ABCMeta):

    # IAPI统一可用的接口

    @abstractmethod
    def GetTrickers(self) -> List[THUAI6.Tricker]:
        pass

    @abstractmethod
    def GetStudents(self) -> List[THUAI6.Student]:
        pass

    @abstractmethod
    def GetProps(self) -> List[THUAI6.Prop]:
        pass

    @abstractmethod
    def GetSelfInfo(self) -> Union[THUAI6.Student, THUAI6.Tricker]:
        pass

    @abstractmethod
    def GetFullMap(self) -> List[List[THUAI6.PlaceType]]:
        pass

    @abstractmethod
    def GetPlaceType(self, x: int, y: int) -> THUAI6.PlaceType:
        pass

    @abstractmethod
    def Move(self, time: int, angle: float) -> bool:
        pass

    @abstractmethod
    def PickProp(self, propType: THUAI6.PropType) -> bool:
        pass

    @abstractmethod
    def UseProp(self) -> bool:
        pass

    @abstractmethod
    def UseSkill(self) -> bool:
        pass

    @abstractmethod
    def SendMessage(self, toID: int, message: str) -> bool:
        pass

    @abstractmethod
    def HaveMessage(self) -> bool:
        pass

    @abstractmethod
    def GetMessage(self) -> tuple[int, str]:
        pass

    @abstractmethod
    def WaitThread(self) -> bool:
        pass

    @abstractmethod
    def GetCounter(self) -> int:
        pass

    @abstractmethod
    def GetPlayerGUIDs(self) -> List[int]:
        pass

    # IStudentAPI使用的接口

    @abstractmethod
    def Graduate(self) -> bool:
        pass

    @abstractmethod
    def StartLearning(self) -> bool:
        pass

    @abstractmethod
    def EndLearning(self) -> bool:
        pass

    @abstractmethod
    def StartHelpMate(self) -> bool:
        pass

    @abstractmethod
    def EndHelpMate(self) -> bool:
        pass

    # Tricker使用的接口

    @abstractmethod
    def Trick(self, angle: float) -> bool:
        pass

    @abstractmethod
    def StartExam(self) -> bool:
        pass

    @abstractmethod
    def EndExam(self) -> bool:
        pass

    @abstractmethod
    def MakeFail(self) -> bool:
        pass


class IAPI(metaclass=ABCMeta):

    # 选手可执行的操作
    # 指挥本角色进行移动，`timeInMilliseconds` 为移动时间，单位为毫秒；`angleInRadian` 表示移动的方向，单位是弧度，使用极坐标——竖直向下方向为 x 轴，水平向右方向为 y 轴

    @abstractmethod
    def Move(self, timeInMilliseconds: int, angle: float) -> Future[bool]:
        pass

    # 向特定方向移动

    @abstractmethod
    def MoveRight(self, timeInMilliseconds: int) -> Future[bool]:
        pass

    @abstractmethod
    def MoveLeft(self, timeInMilliseconds: int) -> Future[bool]:
        pass

    @abstractmethod
    def MoveUp(self, timeInMilliseconds: int) -> Future[bool]:
        pass

    @abstractmethod
    def MoveDown(self, timeInMilliseconds: int) -> Future[bool]:
        pass

    # 道具和技能相关

    @abstractmethod
    def PickProp(self, propType: THUAI6.PropType) -> Future[bool]:
        pass

    @abstractmethod
    def UseProp(self) -> Future[bool]:
        pass

    @abstractmethod
    def UseSkill(self) -> Future[bool]:
        pass

    # 消息相关，接收消息时无消息则返回(-1, '')

    @abstractmethod
    def SendMessage(self, toID: int, message: str) -> Future[bool]:
        pass

    @abstractmethod
    def HaveMessage(self) -> Future[bool]:
        pass

    @abstractmethod
    def GetMessage(self) -> Future[tuple[int, str]]:
        pass

    # 等待下一帧

    @abstractmethod
    def Wait(self) -> Future[bool]:
        pass

    # 获取各类游戏中的消息

    @abstractmethod
    def GetFrameCount(self) -> int:
        pass

    @abstractmethod
    def GetPlayerGUIDs(self) -> List[int]:
        pass

    @abstractmethod
    def GetTrickers(self) -> List[THUAI6.Tricker]:
        pass

    @abstractmethod
    def GetStudents(self) -> List[THUAI6.Student]:
        pass

    @abstractmethod
    def GetProps(self) -> List[THUAI6.Prop]:
        pass

    @abstractmethod
    def GetSelfInfo(self) -> Union[THUAI6.Student, THUAI6.Tricker]:
        pass

    @abstractmethod
    def GetFullMap(self) -> List[List[THUAI6.PlaceType]]:
        pass

    @abstractmethod
    def GetPlaceType(self, cellX: int, cellY: int) -> THUAI6.PlaceType:
        pass

    # 用于DEBUG的输出函数，仅在DEBUG模式下有效

    @abstractmethod
    def PrintStudent(self) -> None:
        pass

    @abstractmethod
    def PrintTricker(self) -> None:
        pass

    @abstractmethod
    def PrintProp(self) -> None:
        pass

    @abstractmethod
    def PrintSelfInfo(self) -> None:
        pass


class IStudentAPI(IAPI, metaclass=ABCMeta):

    # 人类阵营的特殊函数

    @abstractmethod
    def Graduate(self) -> Future[bool]:
        pass

    @abstractmethod
    def StartLearning(self) -> Future[bool]:
        pass

    @abstractmethod
    def EndLearning(self) -> Future[bool]:
        pass

    @abstractmethod
    def StartHelpMate(self) -> Future[bool]:
        pass

    @abstractmethod
    def EndHelpMate(self) -> Future[bool]:
        pass


class ITrickerAPI(IAPI, metaclass=ABCMeta):

    # 屠夫阵营的特殊函数

    @abstractmethod
    def Trick(self, angle: float) -> Future[bool]:
        pass

    @abstractmethod
    def StartExam(self) -> Future[bool]:
        pass

    @abstractmethod
    def EndExam(self) -> Future[bool]:
        pass

    @abstractmethod
    def MakeFail(self) -> Future[bool]:
        pass


class IAI(metaclass=ABCMeta):
    @abstractmethod
    def play(self, api: Union[IStudentAPI, ITrickerAPI]) -> None:
        pass


class IGameTimer(metaclass=ABCMeta):

    # 用于计时的接口

    @abstractmethod
    def StartTimer(self) -> None:
        pass

    @abstractmethod
    def EndTimer(self) -> None:
        pass

    @abstractmethod
    def Play(self, ai: IAI) -> None:
        pass


class IErrorHandler(metaclass=ABCMeta):
    @staticmethod
    @abstractmethod
    def result():
        pass
