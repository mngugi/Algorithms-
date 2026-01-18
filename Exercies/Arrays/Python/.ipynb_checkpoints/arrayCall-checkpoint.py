def find_min(arr):
    smallest_element = arr[0]
    for i in arr:
        if i < smallest_element:
            smallest_element = i
            
    return smallest_element

def find_max(arr):
    max_element = arr[0]
    for j in arr[1:]:
        if j > max_element:
            max_element = j

    return max_element        