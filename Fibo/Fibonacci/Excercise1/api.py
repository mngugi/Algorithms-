from flask import Flask
import fibbo_lib

app = Flask(__name__)

@app.route("/fibbo")
def fibbo_api():
    return fibbo_lib.fibbo_function()

app.run()
