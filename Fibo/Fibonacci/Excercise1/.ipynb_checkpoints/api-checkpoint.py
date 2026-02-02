from flask import Flask, jsonify
import fibbo_lib

app = Flask(__name__)

@app.route("/fibbo")
def fibbo_api():
    # Get the string from your function
    result_str = fibbo_lib.fibbo_function()  # "0\n1\n1\n2\n..."
    
    # Split the string by newlines and remove any empty strings
    result_list = [int(x) for x in result_str.split("\n") if x]
    
    return jsonify(result_list)  # <-- returns JSON array
