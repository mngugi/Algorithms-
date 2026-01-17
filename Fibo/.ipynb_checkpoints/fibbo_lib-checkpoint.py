def fibbo_function():
    first_num =  0
    second_num = 1

    print(first_num)
    print(second_num)

    for i in range(10):
        new_fibonacci = first_num + second_num
        print(new_fibonacci)
        first_num = second_num
        second_num = new_fibonacci