from flask import Flask
import arrayCall

app = Flask(__name__)

@app.route("/arraycall")
def array_api():
    arr = [5, 2, 9, 1, 7]   # simple test data
    return str(arrayCall.find_min(arr))

app.run()
