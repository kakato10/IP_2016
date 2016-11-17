Arrays
=====================
It's time to talk a bit about arrays. 

##Arrays

Now, let's say something about arrays. We use them to store many values of the same type in one particular variable. For example if we want to store 3 real numbers in one variable (let's say test_results), we do one of the following;
```C++
double test_results [3] = {5.65, 3.20, 4.50};
```
```C++
double test_results [] = {5.65, 3.20, 4.50};
```
When we don't specify how many elements of the array are there going to be (a.k.a: [] is empty in the declaration of the array) we can add as many elements as we want in it.
Every element of the array has it's own index. The index of the first element in an array 0, the index of the second is 1 and so on until we reach the index of the last one which is the length of the array minus 1.

We can't do things like these:
```C++
int a[5], b[7];
cin >> a >> b;
```
```C++
int a[];
```
```C++
int a[];
a = {1, 2, 5, 10};
```
```C++
int a[5];
a = {1, 3, 4, 5, 6};
```
```C++
int a[5], b[7];
a=b;
```

We can access directly an element of an array using it's index. Let's assume that we have an array of real numbers called test_results with 5 elements. We can display the third elements of the array with this: 
```C++
cout << test_results[2] << end;
```  

You can take a look at the link below for some additional info (it will be useful):
* http://www.cplusplus.com/doc/tutorial/arrays/

