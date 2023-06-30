# coding=utf-8
# 代码文件：ch14/ch14_5.py

import urllib.request

url='https://www.jj20.com/bz/hhzw/yjhx/293942_8.html'

req=urllib.request.Request(url)
with urllib.request.urlopen(url) as response:
    data=response.read()
    f_name='download.jpg'
    with open(f_name,'wb') as f:
        f.write(data)
        print('下载文件成功')