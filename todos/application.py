from flask import Flask, render_template, request, redirect

app = Flask(__name__)

todos = ["Do Laundry", "Wash Dishes"]

@app.route("/")
def tasks():
    return render_template("tasks.html", title="My Tasks", todos=todos)

@app.route("/add", methods=["GET", "POST"])
def add():
    if request.method == "GET":
        return render_template("add.html")
    else:
        task = request.form.get("task")
        todos.append(task)
        return redirect("/")