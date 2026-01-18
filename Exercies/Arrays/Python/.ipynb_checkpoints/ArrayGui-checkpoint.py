import tkinter as tk
import arrayCall
import os
import sys


root = tk.Tk()
root.title("Find Minimum and Maximum Element")
root.geometry("450x550")

#arr = []

# ----------------------------------------------------------------------------------
def get_array_from_entry():
    text = array_entry.get().strip()

    if not text:
        result_label.config(text="Enter numbers")
        return None

    try:
        arr = [float(x.strip()) for x in text.split(",")]
        return arr
    except ValueError:
        result_label.config(text="Invalid input! Use numbers separated by commas")
        return None


# ------------------------------------------------------------------------------------
def find_min_element():
    arr = get_array_from_entry()
    if arr is None:
        return
        
    min_val = arrayCall.find_min(arr)
    result_label.config(text=f"The minimal element is: {min_val}")

#------------------------------------------------------------------------------------
def find_max_element():
    arr = get_array_from_entry()
    if arr is None:
        return
        
    max_val = arrayCall.find_max(arr)
    result_label.config(text=f"The maximum element is: {max_val}")


#----------------------------------------------------------------------------------

def resource_path(filename):
    """ Get absolute path to resource, works for dev and PyInstaller """
    if hasattr(sys, "_MEIPASS"):
        return os.path.join(sys._MEIPASS, filename)
    return os.path.join(os.path.abspath("."), filename)

btn_icon = tk.PhotoImage(file=resource_path("check.png"))
btn_icon_max = tk.PhotoImage(file=resource_path("spider.png"))

#---------------------------------------------------------------------------------

instruction_label = tk.Label(
    root,
    text="Enter numbers separated by commas:",
    font=("Mono", 9)
)

instruction_label.pack(pady=5)

array_entry = tk.Entry(root, width=35)
array_entry.pack(pady=10)
values = [0.1, 0.99, 1.1995, 0.1999, 0.0999, 0.999, 1.001, 1]
array_entry.insert(0, ",".join(map(str, values)))



# Title label
title_label = tk.Label(root, text="Minimum and Maximum Values", font=("Mono", 12))
title_label.pack(pady=10)

'''
# Array display
array_label = tk.Label(root, text=f"Array: {arr}")
array_label.pack(pady=5)
'''
# Load icon
btn_icon = tk.PhotoImage(file="check.png")
btn_icon_max = tk.PhotoImage(file="spider.png")

# Button
min_button = tk.Button(
    root,
    image=btn_icon,
    text=" Find Minimum",
    compound=tk.LEFT,
    command=find_min_element
)

min_button.image = btn_icon   # 🔑 critical line
min_button.pack(pady=10)

max_button = tk.Button( root, image=btn_icon_max, text="Find Maximum",
                      compound=tk.LEFT,command=find_max_element)

max_button.image =btn_icon_max
max_button.pack(pady=5)

# Result label
result_label = tk.Label(root, text="", font=("Mono", 10))
result_label.pack(pady=10)

root.mainloop()
