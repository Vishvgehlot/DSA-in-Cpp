# Types of Recursion

There are mainly **six types of recursion** in programming.  
Below is a simple explanation of each:

---

## 1. Head Recursion
In this type, the recursive function call happens at the **start** of the function.  
All other statements are executed **after** the recursive call, during the returning phase of recursion.

---

## 2. Tail Recursion
Here, the recursive function call is placed at the **end** of the function.  
All computations happen **before** the recursive call, so no work is done during the returning phase.

---

## 3. Linear Recursion
A recursion that makes **only one recursive call** and is **neither head nor tail**.  
There is code both **before and after** the recursive call.

---

## 4. Tree Recursion
A function calls itself **more than once** inside the same function.  
Each call branches into further calls, forming a tree-like structure.

---

## 5. Indirect Recursion
Two or more functions call one another in a cycle.  
For example, `funA()` calls `funB()`, and `funB()` calls `funA()`, until a base condition stops the chain.

---

## 6. Nested Recursion
A recursive function call is **passed as an argument** to another recursive call.  
Example: `fun(fun(n - 1))`

---
