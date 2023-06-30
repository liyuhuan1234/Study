
# -*- coding: gbk -*

from flask import Flask,render_template
from random import randint

app=Flask(__name__)

hero=[
    '���','����','�����','����','����','������','�Ϸ���','槼�','С��','����','����','���',
    '������','�����','��','����','�ȿ�¶¶','���ļ�','�ĺ','����','Ԫ��','�ݼ�','����'
    ]

@app.route('/index')
def index():
    return render_template('index.html',hero=hero)

@app.route('/choujiang')
def choujiang():
    num=randint(0,len(hero)-1)
    return render_template('index.html',hero=hero,h=hero[num])

app.run(debug=True)
