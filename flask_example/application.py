from flask import Flask, render_template, request, redirect
from random import randint

app = Flask(__name__)

@app.route("/")
def index():
    name = request.args.get("name")
    return render_template("index.html",
        num=randint(1, 100),name=name)

@app.route("/hello")
def hello():
    return redirect("/")