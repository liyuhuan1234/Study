# coding=utf-8
# 代码文件：ch13/ch13_3.py

import wx


app=wx.App()


frm=wx.Frame(None,title='第一个wxPython程序！',size=(400,300),pos=(100,100))

frm.Show()


app.MainLoop()