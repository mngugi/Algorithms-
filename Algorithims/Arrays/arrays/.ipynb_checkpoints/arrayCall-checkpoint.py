def find_min(arr):
    smallest_element = arr[0]
    for i in arr:
        if i < smallest_element:
            smallest_element = i
            
    return smallest_element 