Welcome to the Algorithms- wiki!
# Algorithms:
---

Algorithm is a sequence of steps that describe how a problem can be solved.Every computer program that ends with a result is a result of an Algorithm.

### Basics of Algorithms
**Categories of Algorithms**

    Search − search an item in a data structure.
    Sort −   sort items in a certain order.
    Insert − insert item in a data structure.
    Update − update an existing item in a data structure.
    Delete − delete an existing item from a data structure.
    
    ---
    
### Algorithm to Add 2 numbers and Print Results

```HTML
Step 1 − Start a program. /** Write program title and purpose **/
Step 2 − declare three integers. a, b & c. /**int, float or double **/
Step 3 − define values of a & b. /** a,b,c are variables difine value types **/
Step 4 − add values of a & b . /**(a+b)**/
Step 5 − store output of step 4 to c. /**c=(a+b)**/
Step 6 − print c. /**println("Answer", +c )**/
Step 7 − STOP

```
---

### Recursive Algorithm

An algorithm that calls it self repeatedly.

**Algorithm to Find Factorial Number**

```
Step 1 - START
Step 2 - Initialize a variable to hold the factorial result, let's call it "factorial", and set it to n = 5  
Step 3 - Start a loop from 1 to 5 (inclusive). Let's call the loop variable "i".
Step 4 - iterate over a range of numbers from 1 to 6 . since the first index is 0 
Step 5 - Inside the loop, multiply "factorial" by "i".
Step 6 - After the loop is completed, the value of "factorial" will hold the value of 5!.
Step 7 - Output the value of "factorial" to the user. 

```

```python
factorial = 1
for i in range(1, 6):
    factorial = factorial * i

print(factorial)

```
---
### Divide and Conquer Algorithm
In this case, divide the algorithm into two parts.
The first part divides the problem into smaller subproblems of the same type.
The second part the smaller problems are solved and added together to produce the final solution 
**Examples are**
`Merge Sort and Quick Sort`

**Merge Sort**
uses the divide and conquer principle and repeatedly breaks down a list into several sublists until each sublist consists of a single element and then merges the sublists in a sorted manner. In simple terms, the first process is to break down a list of elements until it cannot be divided anymore e.g., take a list of 4 elements 9,4,5,3.

```
### Both Left and Right sides of the list
Divide:
1.0 [9,4,5,3] -> 
   > Divide the list into two parts Left-A [9,4] | Right-B [5,3]. this is the first step before 
     sorting it recursively. 
     > Logically We can now say we have two arrays with elements in them i.e, A[9,4] and B[5,3].

1.1 -> Now initialize arrays Left-A[] and Right-B[] with i and j that is `A[i] and B[j]`, logically see it as index/pointers positions for example (index: [element]) that are `0:[9],1:[4],2:[5],3:[3].`

   Divide further:
1.2 -> `[9] | [4] | [5] | [3]`. Now the elements are broken into single elements and ready for the next step. 

1.3 -> create an empty array, C[], that will acommodate the merged result. to explain further initialize two pointers, i and j, to the first elements of A and B, respectively, and create an empty array, C, for the merged result.

Comparison: 
2.0 -> Then, compare the elements pointed to by i and j, and allocate the smaller element into C. A[0] = 9 is actually larger than B[0] = 5, so allocate A[0] into C and advance j to the next element in B. In 2.1, A[1] = 4 is smaller than B[0] = 5, so allocate A[1] into C and advance i to the next element in A.

2.1 -> Next, you compare the elements pointed to by i and j again. Now A[1] = 4 is smaller than B[0] = 5, so you allocate A[1] into C and advance j to the next element in B.
    -> continue this process until all elements have been merged into C, and obtain the resulting sorted      array [3,4,5,9]

3.0 Pseudo Code:
function merge_sort(arr):
    if length(arr) <= 1:
        return arr
    
    middle = length(arr) / 2
    left = merge_sort(arr[0:middle])
    right = merge_sort(arr[middle:length(arr)])
    return merge(left, right)

function merge(left, right):
    result = []
    i = 0
    j = 0
    
    while i < length(left) and j < length(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i = i + 1
        else:
            result.append(right[j])
            j = j + 1
    
    while i < length(left):
        result.append(left[i])
        i = i + 1
    
    while j < length(right):
        result.append(right[j])
        j = j + 1
    
    return result


```
This implementation uses a recursive divide-and-conquer approach, where the original input array is repeatedly divided into smaller sub-arrays until each sub-array contains only one element. These sub-arrays are then merged back together in sorted order. The merge function is responsible for merging two sorted sub-arrays into a single sorted array.

Note that this implementation assumes that the input array contains comparable elements, such as integers or floating-point numbers. If the array contains objects or other data types that cannot be compared using the <= operator, you may need to modify the merge function accordingly.
 
Algorithm Animations and Visualizations Refer to [Algoanim](http://algoanim.ide.sk/index.php?page=categories&cat=6) 
## Implementation using Python
```Python
arr = [9, 4, 5, 3]

def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    
    middle = len(arr) // 2
    left = merge_sort(arr[0:middle])
    right = merge_sort(arr[middle:len(arr)])
    return merge(left, right)

def merge(left, right):
    result = []
    i = 0
    j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i = i + 1
        else:
            result.append(right[j])
            j = j + 1
    
    while i < len(left):
        result.append(left[i])
        i = i + 1
    
    while j < len(right):
        result.append(right[j])
        j = j + 1
    
    return result

sorted_arr = merge_sort(arr)
print(sorted_arr)


```

**Quick Sort**
