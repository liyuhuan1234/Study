
# -*- coding: gbk -*

from flask import Flask,render_template
from random import randint

app=Flask(__name__)

hero=[
    '李白','韩信','孙悟空','关羽','李信','孙尚香','老夫子','妲己','小乔','刘禅','刘备','孙策',
    '夏洛特','诸葛亮','瑶','貂蝉','娜可露露','蔡文姬','夏侯惇','孙膑','元歌','虞姬','艾琳'
    ]

@app.route('/index')
def index():
    return render_template('index.html',hero=hero)

@app.route('/choujiang')
def choujiang():
    num=randint(0,len(hero)-1)
    return render_template('index.html',hero=hero,h=hero[num])

app.run(debug=True)
