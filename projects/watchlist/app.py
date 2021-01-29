from flask import Flask
app = Flask(__name__)

# 有不懂的别着急，继续敲就好了
@app.route('/1')
def hello():
    return '<h1>Hello Totoro!</h1><img src="http://helloflask.com/totoro.gif">'

@app.route('/2')
def byebye():
    return '再见！李姝瑶！'

