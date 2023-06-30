# coding=utf-8
# 代码文件：ch13/ch13_8_1.py

import wx

class MyFrame(wx.Frame):
    def __init__(self):
        super().__init__(None,title="文本输入控件",size=(300,260))
        panel=wx.Panel(parent=self)
        tc1=wx.TextCtrl(panel)
        tc2=wx.TextCtrl(panel,style=wx.TE_PASSWORD)
        tc3=wx.TextCtrl(panel,style=wx.TE_MULTILINE)
        
        userid=wx.StaticText(panel,label="用户ID：")
        pwd=wx.StaticText(panel,label="密码：")
        content=wx.StaticText(panel,label="多行文本：")
        
        
        vbox=wx.BoxSizer(wx.VERTICAL)
        
        
        vbox.Add(userid,flag=wx.EXPAND|wx.LEFT,border=10)
        vbox.Add(tc1,flag=wx.EXPAND|wx.ALL,border=10)
        vbox.Add(pwd,flag=wx.EXPAND|wx.LEFT,border=10)
        vbox.Add(tc2,flag=wx.EXPAND|wx.ALL,border=10)
        vbox.Add(content,flag=wx.EXPAND|wx.LEFT,border=10)
        vbox.Add(tc3,flag=wx.EXPAND|wx.ALL,border=10)
        
        
        panel.SetSizer(vbox)
        
        
        tc1.SetValue("Tony")
        
        print("读取用户ID；{0}".format(tc1.GetValue()))
 
app=wx.App()
frm=MyFrame()
frm.Show()
app.MainLoop()