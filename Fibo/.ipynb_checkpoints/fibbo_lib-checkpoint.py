def fibbo_function():
    first_num = 0
    second_num = 1

    result = "0\n1\n"

    for i in range(10):
        new_fibonacci = first_num + second_num
        result += str(new_fibonacci) + "\n"
        first_num = second_num
        second_num = new_fibonacci

    return result   # <-- THIS LINE IS REQUIRED
