# Types of Recursion 
There are mainly 6 types of recursion.

## 1. Head Recursion
In this type of recursion the recursive function call is done at the **START** of function and all the other code is done after the function calling, so all the other code is compiled during the returning time.

## 2. Tail Recursion
In this type of recursion the recursive function call is done at the **END** of the function so all the code is compiled at the running time i.e before the calling of the recursive function calling.

## 3. Linear Recursion
If a recursion function is neither Head nor Tail it is classified in this category i.e there is some code above and below the recursive function call.

## 4. Tree Recursion
In this type of function there are multiple recursive function calls in a single function.

## 5. Indirect Recursion
In this type of function there are actually **TWO or MORE** function which are called by each other again and again untill the if condition of a function gets failed. Basically its like a basic function recursion but there are two or more function that call each other.

## 6. Nested Recursion
In this type of recursion you call the recursive function by giving it the input as a recursive function.
E.g. - fun(fun(n-1))