
import wx
 
class MyFrame(wx.Frame):
	def __init__(self):
		super().__init__(None,title = "�ļ�����ؼ�",size = (300,260))
		panel = wx.Panel(parent = self)
		tc1 = wx.TextCtrl(panel)
		tc2 = wx.TextCtrl(panel,style = wx.TE_PASSWORD)
		tc3 = wx.TextCtrl(panel,style = wx.TE_MULTILINE)
 
		userid = wx.StaticText(panel,label = "�û�ID��")
		pwd = wx.StaticText(panel,label = "���룺")
		content = wx.StaticText(panel,label = "�����ı���")
 
		#������ֱ����ĺ��Ӳ��ֹ���������
		vbox = wx.BoxSizer(wx.VERTICAL)
 
		#��ӿؼ���vbox���ֹ�����
		vbox.Add(userid,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc1,flag = wx.EXPAND|wx.ALL,border = 10)
		vbox.Add(pwd,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc2,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(content,flag = wx.EXPAND|wx.LEFT,border = 10)
		vbox.Add(tc3,flag = wx.EXPAND|wx.LEFT,border = 10)
 
		#�������(panel)����vbox���ֹ�����
		panel.SetSizer(vbox)
 
		#����tc1��ʼֵ
		tc1.SetValue("tony")
		#��ȡtc1ֵ
		print("��ȡ�û�ID:{0}".format(tc1.GetValue()))
 
app = wx.App() #����Ӧ�ó������
frm = MyFrame() #�������ڶ���
frm.Show() #��ʾ����
app.MainLoop() #�������¼�ѭ��