Welcome to the Algorithms- wiki!
# 📚 Algorithms Repository

A comprehensive collection of classic and modern algorithms implemented in multiple programming languages. This repository is designed for learning, practicing, and improving algorithmic thinking, with clean, well-documented code suitable for interviews, competitive programming, and academic study.

## 🔍 What You'll Find

- **Sorting & Searching Algorithms**
- **Graph Algorithms** (DFS, BFS, Dijkstra's, Kruskal's, etc.)
- **Dynamic Programming**
- **Greedy Techniques**
- **Backtracking & Recursion**
- **Mathematical Algorithms**
- **Data Structures** (Stacks, Queues, Trees, Heaps, etc.)

## 💡 Ideal For

- Computer Science students  
- Competitive programmers  
- Interview preparation  
- Anyone looking to deepen their understanding of algorithms

## 🛠️ Languages Used

- Python  
- C++  
- JavaScript  
*(More coming soon)*

## 📂 Structure

Each algorithm is stored in a dedicated folder with:
- Source code
- Input/output examples (where applicable)
- Comments and explanations

## 📜 License

This project is licensed under the MIT License.

# Algorithms:
---

An algorithm is a sequence of steps that describes how a problem can be solved. Every computer program that ends with a result is a result of an Algorithm.

### Basics of Algorithms
**Categories of Algorithms**

    Search − search for an item in a data structure.
    Sort −   sort items in a certain order.
    Insert − insert item in a data structure.
    Update − update an existing item in a data structure.
    Delete − delete an existing item from a data structure.
    
    ---
## BIG O

BIG O describes the computational complexity of an algorithm. This has two parts:
1. Time Complexity. The amount of time an algorithm needs to run relative to the input. 
2. Space Complexity. Memory space is allocated by the algorithm relative to the input size.

Complexity is defined by a function that can change with the input.
Examples 
```css
O(n)
O(n^2)
O(2^n)
O(log⁡n)
O(n⋅m)
```    
**O(n)** - This time complexity represents linear time, which means the running time of an algorithm is directly proportional to the size of the input data. As the input size increases, the running time also increases at a linear rate.

Example: Linear search in an array where each element is compared with the target element one by one. In the worst-case scenario, where the target element is the last element or not present in the array, the algorithm will need to check all elements in the array. The time complexity of this algorithm is O(n).

**O(n^2)** - This time complexity represents quadratic time, which means the running time of an algorithm grows exponentially with the input size. It is commonly seen in algorithms that involve nested loops.

Example: Bubble Sort, where the algorithm iterates through the array multiple times, comparing and swapping adjacent elements until the array is sorted. The time complexity of this algorithm is O(n^2).

**O(2^n)** - This time complexity represents exponential time, which means the running time of an algorithm grows at a very fast rate as the input size increases. It is commonly seen in algorithms that generate all possible subsets or permutations.

Example: The Subset Sum problem, where the algorithm generates all possible subsets of the input set and checks if their sum is equal to the target sum. The time complexity of this algorithm is O(2^n).

**O(log⁡n)** - This time complexity represents logarithmic time, which means the running time of an algorithm grows at a slower rate than linear time. It is commonly seen in algorithms that divide the input data into halves at each step.

Example: Binary Search, where the algorithm searches for a target element in a sorted array by repeatedly dividing the array in half until the target element is found. The time complexity of this algorithm is O(log⁡n).

**O(n⋅m)** - This time complexity represents the time that grows proportionally to the product of two input sizes. It is commonly seen in algorithms that involve nested loops over different input sizes.

Example: Matrix Multiplication, where the algorithm multiplies two matrices by taking the dot product of each row in the first matrix with each column in the second matrix. The time complexity of this algorithm is O(n⋅m⋅p), where n, m, and p are the dimensions of the matrices being multiplied. In the case of two square matrices of size n, the time complexity would be O(n^3).

**NB**

# Understanding Big O Notation and Growth Rates

Big O notation is used to describe the efficiency of an algorithm in terms of how its runtime (or space usage) grows as the input size increases.

## Key Idea: Keeping the Fastest Growing Term  
When analyzing time complexity, we only keep the term that grows the fastest as the input size (**n**) increases and discard lower-order terms and constants.

### Example:  
If an algorithm has a time complexity expressed as:

\[
T(n) = 5n^2 + 3n + 7
\]

For small values of **n**, the terms **3n** and **7** may contribute to execution time, but as **n** becomes very large, the **n²** term dominates because it grows the fastest.

Thus, in Big O notation, we express this as:

\[
O(n^2)
\]

We ignore constants (like **5**) because Big O notation focuses on **asymptotic behavior**, meaning how the function behaves for large values of **n**.

---

## General Rule for Simplification  

### 1️⃣ Drop Constants  
**Example:**  
\[
O(5n) \Rightarrow O(n)
\]  
Multiplicative constants don’t affect growth rate.

### 2️⃣ Keep the Dominant Term  
**Example:**  
\[
O(n^2 + n) \Rightarrow O(n^2)
\]  
since **n²** grows faster than **n**.

### 3️⃣ Ignore Lower-Order Terms  
**Example:**  
\[
O(n^3 + 100n^2 + 50n + 10) \Rightarrow O(n^3)
\]  

**Why Do We Do This?**

- In algorithm analysis, we focus on how the execution time scales with input size.
- Lower-order terms and constants become negligible for large 𝑛
- This helps us compare algorithms effectively without unnecessary details.
---

This approach helps in quickly estimating the performance of an algorithm without unnecessary details. 🚀

# 📌 Understanding Big O Notation: More Examples

Big O notation describes how an algorithm’s runtime (or space usage) grows as the input size **n** increases. Below are examples of how we simplify and interpret Big O complexities.

---

## 1️⃣ Example: Ignoring Lower-Order Terms  
Suppose we analyze an algorithm and determine that its time complexity is:

\[
T(n) = 4n^3 + 3n^2 + 2n + 5
\]

- The dominant term is **n³** because it grows the fastest as **n** increases.  
- The terms **3n²**, **2n**, and **5** become insignificant compared to **n³** for large **n**.  
- The constant coefficient **4** is ignored.  

✅ **Final Big O notation:**  
\[
O(n^3)
\]

---

## 2️⃣ Example: Dropping Constants  
An algorithm runs in:

\[
T(n) = 500n + 1000
\]

- The **constant multiplier** (500) does not affect the growth rate.  
- The **constant term** (1000) is ignored because it does not grow with **n**.  

✅ **Final Big O notation:**  
\[
O(n)
\]

---

## 3️⃣ Example: Logarithmic Complexity  
If an algorithm has time complexity:

\[
T(n) = 3\log n + 2
\]

- The term **log n** dominates for logarithmic algorithms.  
- The **coefficient 3** and **constant 2** are ignored.  

✅ **Final Big O notation:**  
\[
O(\log n)
\]

---

## 4️⃣ Example: Nested Loops (Multiplication Rule)  
Consider a nested loop scenario:

```python
for i in range(n):      # Runs n times
    for j in range(n):  # Runs n times for each i
        print(i, j)

```
## 📌 Summary Table of Growth Rates

| **Big O Notation**  | **Name**               | **Example Algorithm**                        |
|---------------------|----------------------|---------------------------------------------|
| **O(1)**           | Constant Time        | Accessing an element in an array           |
| **O(log n)**       | Logarithmic Time     | Binary search                              |
| **O(n)**           | Linear Time          | Iterating through an array                 |
| **O(n log n)**     | Linearithmic Time    | Merge Sort, Quick Sort (best case)         |
| **O(n²)**          | Quadratic Time       | Nested loops (e.g., Bubble Sort)           |
| **O(2ⁿ)**          | Exponential Time     | Recursive Fibonacci                        |
| **O(n!)**          | Factorial Time       | Traveling Salesman Problem                 |


---
    
```python
factorial = 1
for i in range(1, 6):
    factorial = factorial * i

print(factorial)

```
**Example 5: Sequential Loops (Addition Rule)**
```python
for i in range(n):  # Runs n times
    print(i)

for j in range(n):  # Runs n times
    print(j)

```
## Sequential Loops: Addition Rule

The first loop runs **O(n)**.  
The second loop runs **O(n)**.  

Since they run sequentially, we **add** their complexities:  
\[
O(n) + O(n) = O(2n)
\]
Since Big O notation ignores constants, we drop **2**, simplifying to:  
\[
O(n)
\]

---

## Example 6: Exponential Complexity

Consider an algorithm with the following **recursive function**:

```python
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)
```
---
### Algorithm to Add 2 Numbers and Print Results

```HTML
Step 1 − Start a program. /** Write program title and purpose **/
Step 2 − declare three integers. a, b & c. /**int, float or double **/
Step 3 − define values of a & b. /** a,b,c are variables that define value types **/
Step 4 − add values of a & b. /**(a+b)**/
Step 5 − store output of step 4 to c. /**c=(a+b)**/
Step 6 − print c. /**println("Answer", +c )**/
Step 7 − STOP

```
---

### Recursive Algorithm

An algorithm that calls itself repeatedly.

**Algorithm to Find Factorial Number**

```
Step 1 - START
Step 2 - Initialize a variable to hold the factorial result, let's call it "factorial", and set it to n = 5  
Step 3 - Start a loop from 1 to 5 (inclusive). Let's call the loop variable "i".
Step 4 - iterate over a range of numbers from 1 to 6 . Since the first index is 0 
Step 5 - Inside the loop, multiply "factorial" by "i".
Step 6 - After the loop is completed, the value of "factorial" will hold the value of 5!.
Step 7 - Output the value of "factorial" to the user. 

```


---
### Divide and Conquer Algorithm
In this case, divide the algorithm into two parts.
The first part divides the problem into smaller subproblems of the same type.
In the second part, the smaller problems are solved and added together to produce the final solution 
**Examples are**
`Merge Sort and Quick Sort`

**Merge Sort**
uses the divide and conquer principle and repeatedly breaks down a list into several sublists until each sublist consists of a single element, and then merges the sublists in a sorted manner. In simple terms, the first process is to break down a list of elements until it cannot be divided anymore, e.g., take a list of 4 elements 9,4,5,3.

```
Both the Left and Right sides of the list
Divide:
1.0 [9,4,5,3] -> 
   > Divide the list into two parts: Left-A [9,4] | Right-B [5,3]. This is the first step before 
     sorting it recursively. 
     > Logically, we can now say we have two arrays with elements in them, i.e., A[9,4] and B[5,3].

1.1 -> Now initialize arrays Left-A[] and Right-B[] with i and j that is `A[i] and B[j]`, logically see it as index/pointers positions for example (index: [element]) that are `0:[9],1:[4],2:[5],3:[3].`

   Divide further:
1.2 -> `[9] | [4] | [5] | [3]`. Now the elements are broken into single elements and are ready for the next step. 

1.3 -> create an empty array, C[], that will acommodate the merged result. To explain further, initialize two pointers, i and j, to the first elements of A and B, respectively, and create an empty array, C, for the merged result.

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
```python
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


---

### Binary Search

Binary Search is an algorithm 

<Continue ...>

---

### Bubble Sort Example

Sort the following Array [ 31,41,59,26,41, 58]

One can use various sorting algorithms to sort the given array. One of the simplest and commonly used algorithms is the Bubble Sort algorithm. Here's how you can implement it:

``` python

`1. Start with the first element of the array.`
`2. Compare the current element with the next element.`
`3. If the current element is greater than the next element, swap them.`
`4. Repeat this process for each pair of adjacent elements until the end of the array.`
`5. After the first pass, the largest element will be at the end of the array.`
`6. Repeat steps 1-5 for the remaining elements (excluding the already sorted ones) until the entire array is sorted.`

```
---

``` html
Let's break down the concept of n−1 in the context of Bubble Sort in simpler terms:
Starting Point:

Imagine you have n elements in your array.
When you begin sorting, you start comparing adjacent elements from the beginning of the array.

**Passes through the Array**:

In each pass, the algorithm compares adjacent elements and swaps them if they are in the wrong order.
After the first pass, the largest (or smallest) element is guaranteed to be at the end of the array.
Similarly, after the second pass, the second largest (or smallest) element is guaranteed to be in the second-to-last position, and so on.

**Number of Passes:**

Since each pass ensures that at least one element is in its correct position, you need to make n−1 passes to ensure that all elements are sorted.

This is because after n−1 passes, the last remaining element will automatically be in its correct position without needing to be explicitly sorted.

In simple terms, n−1 represents the number of passes required to sort an array of n elements using Bubble Sort. Each pass ensures that at least one element is placed in its correct position, and after n−1 passes, the entire array will be sorted.

Code Bubble Sort

def bubble_sort(arr):
    n = len(arr)
    # Traverse through all array elements
    for i in range(n):
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            # Traverse the array from 0 to n - i - 1
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Test the bubble_sort function
arr = [31, 41, 59, 26, 41, 58]
bubble_sort(arr)
print("Sorted array:", arr)



The time complexity of the Bubble Sort algorithm is O(n ^2) where n is the number of elements in the array.

Here's the breakdown of the time complexity:

- In the worst-case scenario, where the array is in reverse order, the algorithm will need to perform n−1 passes (iterations) to sort the 
  array.
- During each pass, the algorithm compares adjacent elements and swaps them if they are in the wrong order.
- For each pass, the number of comparisons decreases by 1, because the largest (or smallest) element "bubbles up" to its correct position
  at the end of the array.
- In total, the number of comparisons made by the algorithm is approximately  n×(n−1) which simplifies to  O(n ) in terms of time 
  complexity.
- Although Bubble Sort is easy to understand and implement, it is not efficient for large arrays because of its quadratic time complexity. 

However, for small arrays or nearly sorted arrays, it can perform reasonably well.


```

---

**Checking fewer elements each time**

``` html
Maybe you’re wondering: as you go through the operations, the number
of elements you have to check keeps decreasing. Eventually, you’re down
to having to check just one element. So how can the run time still be
O(n2)? That’s a good question, and the answer has to do with constants
in Big O notation. I’ll get into this more in chapter 4, but here’s the gist.
You’re right that you don’t have to check a list of n elements each time.

You check n elements, then n – 1, n - 2 ... 2, 1. On average, you check a
list that has 1/ 2 × n elements. The runtime is O(n × 1 /2 × n). But constants
like 1 /2 are ignored in Big O notation (again, see chapter 4 for the full
discussion), so you just write O(n × n) or O(n 2).

```
**Big O of 1**
```python 
import tkinter as tk

root = tk.Tk()
root.geometry('400x400')
root.resizable(True, True)

label = tk.Label(root, text="", justify="left", background='yellow', font=("calibri", 10))
label.pack(pady=10)

num_one = 30
num_two = 60

def total_sum():
    total = num_one + num_two
    label.config(text=total)

def sum_difference():
    difference = num_one - num_two
    label.config(text=difference)

    if difference < 0:
        label.config(text=f"Warning: Difference is negative: {difference}", background='yellow')
    else:
        label.config(text="Difference is positive or zero", background='white')

def product():
    result = num_one * num_two
    label.config(text=result)

def quotient():
    if num_two == 0:
        label.config(text="Error: Division by zero", background='red')
    else:
        result = num_one / num_two
        label.config(text=result)

# Dictionary to map button labels to their functions
operations = {
    "Total Sum": total_sum,
    "Sum Difference": sum_difference,
    "Product": product,   # Fixed case
    "Quotient": quotient  # Fixed case
}

# Creating buttons dynamically
for text, func in operations.items():
    tk.Button(root, text=text, command=func).pack(pady=5)

root.mainloop()


```
**Big O Complexity Analysis of Your Tkinter Code**

Let's break down the complexity of each function and determine the overall Big O notation.

1️⃣ Analyzing Each Function
(a) `total_sum()`
```python

def total_sum():
    total = num_one + num_two  # O(1)
    label.config(text=total)   # O(1)
```

✅ Big O Complexity: O(1)

Addition of two numbers is constant time.
Updating the label is also O(1), since it's a simple operation.

(b) `sum_difference()`
```python

def sum_difference():
    difference = num_one - num_two  # O(1)
    label.config(text=difference)   # O(1)

    if difference < 0:
        label.config(text=f"Warning: Difference is negative: {difference}", background='yellow')  # O(1)
    else:
        label.config(text="Difference is positive or zero", background='white')  # O(1)
```
✅ Big O Complexity: O(1)

The subtraction operation is constant time.
The if condition check is O(1).
Updating the label is O(1), whether the difference is negative or not.
(c) `product()`
```python

def product():
    result = num_one * num_two  # O(1)
    label.config(text=result)   # O(1)
```

✅ Big O Complexity: O(1)

Multiplication of two numbers is O(1).
Updating the label is O(1).
(d) `quotient()`
```python

def quotient():
    if num_two == 0:  # O(1)
        label.config(text="Error: Division by zero", background='red')  # O(1)
    else:
        result = num_one / num_two  # O(1)
        label.config(text=result)   # O(1)
```
✅ Big O Complexity: O(1)

Division operation is constant time.
if condition is O(1).
Updating the label is O(1).

2️⃣ Button Creation Loop
```python

for text, func in operations.items():
    tk.Button(root, text=text, command=func).pack(pady=5)  # O(1) per iteration
```
✅ Big O Complexity: O(n), where n is the number of operations (4 buttons).


Since the number of buttons is fixed (n = 4), this technically remains O(1) in practical terms.
If more buttons were dynamically added, it would scale as O(n).

3️⃣ Overall Complexity
The entire program consists of constant-time operations (arithmetic operations, condition checks, UI updates), with the exception of button creation, which is O(n).

Since n is small and fixed in this case, the overall Big O complexity of the program remains:


- 🔹 O(1) (Constant Time) in practical terms.
- 🔹 If buttons were dynamically added based on user input, it could become O(n).

✅ Final Verdict:

The code runs in constant time O(1), as every function executes in constant time, and the loop creating buttons is limited to a small fixed number.
