﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using Protobuf;

namespace Client
{
    /// <summary>
    /// StatusBarOfHunter.xaml 的交互逻辑
    /// </summary>
    public partial class StatusBarOfHunter : UserControl
    {
        public StatusBarOfHunter(Grid parent, int Row, int Column)
        {
            InitializeComponent();
            parent.Children.Add(this);
            Grid.SetColumn(this, Column);
            Grid.SetColumnSpan(this, 2);
            Grid.SetRow(this, Row);
            initialized = false;
        }
        public void SetFontSize(double fontsize)
        {
            serial.FontSize = scores.FontSize = star.FontSize = status.FontSize = prop.FontSize = fontsize;
        }

        private void SetStaticValue(MessageOfTricker obj)
        {
            switch (obj.TrickerType)  // 参数未设定
            {
                case TrickerType._1:
                    coolTime = 10000;
                    serial.Text = "👥" + Convert.ToString(1) + "👻" + Convert.ToString(obj.PlayerId) + "\nSkill:TrickerType1";
                    break;
                case TrickerType._2:
                    coolTime = 20000;
                    serial.Text = "👥" + Convert.ToString(1) + "👻" + Convert.ToString(obj.PlayerId) + "\nSkill:TrickerType2";
                    break;
                case TrickerType._3:
                    coolTime = 30000;
                    serial.Text = "👥" + Convert.ToString(1) + "👻" + Convert.ToString(obj.PlayerId) + "\nSkill:TrickerType3";
                    break;
                case TrickerType._4:
                    coolTime = 40000;
                    serial.Text = "👥" + Convert.ToString(1) + "👻" + Convert.ToString(obj.PlayerId) + "\nSkill:TrickerType4";
                    break;
                case TrickerType.NullTrickerType:
                    coolTime = 10000;
                    serial.Text = "👥" + Convert.ToString(1) + "👻" + Convert.ToString(obj.PlayerId) + "\nSkill:NullTrickerType";
                    break;
            }
            initialized = true;
        }
        private void SetDynamicValue(MessageOfTricker obj)
        {
            skillprogress.Value = 100 - obj.TimeUntilSkillAvailable / coolTime * 100;
            if (!obj.Movable)  // 认为movable为真时可动
            {
                skillprogress.Value = 0;
                skillprogress.Background = Brushes.Gray;
            }
            else
                skillprogress.Background = Brushes.White;
            // star.Text = "⭐：";不知道要放什么
            status.Text = "🏹：" + Convert.ToString(1) + "\n🏃：" + Convert.ToString(obj.Speed) + "\n🤺：" + Convert.ToString(2) + "\n🗡：" + Convert.ToString(obj.Damage);
            scores.Text = "Scores:" + Convert.ToString(0);
            foreach(var icon in obj.Prop)
            {
                switch (icon)
                {
                    case PropType.Ptype1:
                        prop.Text = "🔧";
                        break;
                    case PropType.Ptype2:
                        prop.Text = "🛡";
                        break;
                    case PropType.Ptype3:
                        prop.Text = "♥";
                        break;
                    case PropType.Ptype4:
                        prop.Text = "⛸";
                        break;
                    default:
                        prop.Text = "  ";
                        break;
                }
            }
        }
        public void SetValue(MessageOfTricker obj)
        {
            if (!initialized)
                SetStaticValue(obj);
            SetDynamicValue(obj);
        }
        private int coolTime;
        private bool initialized;
    }
}
