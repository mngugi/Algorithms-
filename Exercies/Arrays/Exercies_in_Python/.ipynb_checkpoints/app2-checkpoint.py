from flask import Flask, jsonify
import arrayCall

app = Flask(__name__)

@app.route("/min/<numbers>")
def min_api(numbers):
    arr = [float(x) for x in numbers.split(",")]
    return jsonify({"min": arrayCall.find_min(arr)})

@app.route("/max/<numbers>")
def max_api(numbers):
    arr = [float(x) for x in numbers.split(",")]
    return jsonify({"max": arrayCall.find_max(arr)})

app.run()
