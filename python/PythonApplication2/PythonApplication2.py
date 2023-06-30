
import wx
 
class MyFrame(wx.Frame):
	def __init__(self):
		super().__init__(None,title = "文件输入控件",size = (300,260))
		panel = wx.Panel(parent = self)
		tc1 = wx.TextCtrl(panel)
		tc2 = wx.TextCtrl(panel,style = wx.TE_PASSWORD)
		tc3 = wx.TextCtrl(panel,style = wx.TE_MULTILINE)
 
		userid = wx.StaticText(panel,label = "用户ID：")
		pwd = wx.StaticText(panel,label = "密码：")
		content = wx.StaticText(panel,label = "多行文本：")
 
		#创建垂直方向的盒子布局管理器对象
		vbox = wx.BoxSizer(wx.VERTICAL)
 
		#添加控件到vbox布局管理器
		vbox.Add(userid,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc1,flag = wx.EXPAND|wx.ALL,border = 10)
		vbox.Add(pwd,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc2,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(content,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc3,flag = wx.EXPAND|wx.LEFT,border = 10)
 
		#设置面板(panel)采用vbox布局管理器
		panel.SetSizer(vbox)
 
		#设置tc1初始值
		tc1.SetValue("tony")
		#获取tc1值
		print("读取用户ID:{0}".format(tc1.GetValue()))
 
app = wx.App() #创建应用程序对象
frm = MyFrame() #创建窗口对象
frm.Show() #显示窗口
app.MainLoop() #进入主事件循环