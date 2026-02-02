from flask import Flask
import fibbo_lib

app = Flask(__name__)

@app.route("/fibbo")
def fibbo_api():
    result = fibbo_lib.fibbo_function()  # your array
    return jsonify(result)  # <-- convert array to JSON
    #return fibbo_lib.fibbo_function()

app.run()
