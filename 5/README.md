Functions
=====================

Welcome to the world of functions! This is maybe the most important material for the whole semester so you'd better feel confident in your skills related to these. In order to help you achieve that, here are some tasks. Wherever you're asked to write only a function you should write only the function, no includes no namespaces no main functions, only the wanted function!

##Task1: Sum my divisors!
Implement a function that returns the sum of a given element. The function should have the following prototype:

```int sum_divisors(int n)```

Example calls:

```sum_divisors(5) //returns 6```

```sum_divisors(1) //returns 1```

```sum_divisors(8) //returns 15```

##Task2: Masked tables
Write a C++ function which has the following prototype:

```
void mask_table(int rows, int columns, int masked_chars_count, char masking_char)
```

The function should generate a table following the pattern shown in the examples:

Example 1:

This call ```mask_talbe(6, 6, 2, 'x')``` should generate the following table:

```
1 x x 3 2 1
2 1 x x 2 1
3 2 1 x x 1
4 3 2 1 x x
5 4 3 2 1 x
6 5 4 3 2 1
```

Example 2:
This call ```mask_talbe(6, 11, 3, '_')``` should generate the following table:

```
1 _ _ _ 7 6 5 4 3 2 1
2 1 _ _ _ 6 5 4 3 2 1
3 2 1 _ _ _ 5 4 3 2 1
4 3 2 1 _ _ _ 4 3 2 1
5 4 3 2 1 _ _ _ 3 2 1
6 5 4 3 2 1 _ _ _ 2 1
7 6 5 4 3 2 1 _ _ _ 1
```

###That's it now get to work!
