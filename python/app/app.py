
from flask import Flask


app=Flask(__name__)

hero=[
    '���','����','�����','����','����','������','�Ϸ���','槼�','С��','����','����','���',
    '������','�����','��','����','�ȿ�¶¶','���ļ�','�ĺ','����','Ԫ��','�ݼ�','����'
    ]

@app.route('/index')
def index():
    return 'wangyanrui!!!!!!!!!!'

app.run(debug=True)