"Strings"
=====================

##Task1: lexicographic comparison
Write a C++ program which asks the user to enter two strings with length no more than 6 characters. After they're entered the program should compare them and tell the user which string is "bigger".
Let's asume that str1 is the first string and str2 is the second one. The rules that your custom comparison should follow are:.
* if the code of str1[i] is bigger than str2[i] then str1 is bigger than str2;
* if str2 has ended before str1 and they were equivalent until that moment str1 is bigger;
* if str1 and str2 are ending and the same time and the were equivalent until now they are equivalent.

###Example1
Input:
```
str1 = "Cool"
str2 = "cool"
```
Output:
```
str1 < str2
```
###Example2
Input:
```
str1 = "cool"
str2 = "cool"
```
Output:
```
str1 = str2
```
###Example3
Input:
```
str1 = "cooling"
str2 = "cool"
```
Output:
```
str1 > str2
``` 

###Ready! Steady! GO!!!!!!

