@echo off

<<<<<<< HEAD
start cmd /k ..\Server\bin\Debug\net6.0\Server.exe --ip 0.0.0.0 --port 8888 --teamCount 2 --playerNum 2 --gameTimeInSecond 60 --fileName test 
=======
start cmd /k ..\Server\bin\Debug\net6.0\Server.exe --port 8888 --studentCount 2 --trickerCount 0 --gameTimeInSecond 600 --fileName test 
>>>>>>> 9f14fecb6a4d2b8da8bd9c0db2dfdd4c4608a288

ping -n 2 127.0.0.1 > NUL

::start cmd /k ..\Client\bin\Debug\net6.0-windows\Client.exe --cl --port=8888 --characterID=4 --type=2 --occupation=1

ping -n 2 127.0.0.1 > NUL

start cmd /k ..\Client\bin\Debug\net6.0-windows\Client.exe --cl --port=8888 --characterID=1 --type=1 --occupation=1
