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
uses the divide and conquer principle and repeatedly breaks down a list into several sublists until each sublist 
consists of a single element and then merges the sublists in a sorted manner. In simple terms the first process to break down a list
of elements until it cannot be divided anymore e.g., take a list of 4 elements 9,4,5,3
```
Divide:
1.0 [9,4,5,3] -> [9,4] | [5,3]. Give it index positions (index: [element]) that are 0:[9],1:[4],2:[5],3:[3]
   Divide:
   1.1 -> [9] | [4] | [5] | [3]. Now the elements are broken into single elements and ready for the next step. 
 
2.0 In this step perform a comparison between the elements:
    if ([9] <= [4]):
        Index 0 = 9
        Index +=1
    else
        index 0 = 4 
        Index +=1 
Merge: In the merge, step compare 9 and 4 and allocate the smaller element into index 0. i.e if ...

```

 
Algorithm Animations and Visualizations Refer to [Algoanim](http://algoanim.ide.sk/index.php?page=categories&cat=6) 

**Quick Sort**
