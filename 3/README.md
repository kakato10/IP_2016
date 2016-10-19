Booleans, double/float, type convertion and libraries
=====================

##Task 1: USA congress elections

Write a C++ program that asks the user to enter information about 4 things, related to himself.
* his age;
* since when does he have a US citizenship;
* has he ever commited a crime;
* is he mentally stable;

After that your program should decide whether this person can participate as a candidate for a US Senator.
Here are the requirements that he should satisfy:
* he should be at least 30 years old;
* he should be a US citizen for at least 9 years;
* he must have not commited a crime until now;
* he should be mentally stable;

Example usage
 * Input:
	```
	Your age: 20

	US citizen since: 10

	Any commited crimes: 1 

	Mentally stable: 1
	```

	Output:
	```
	You can participate in the elections
	```
 * Input:
	```
	Your age: 37

	US citizen since: 15

	Any commited crimes: 0 

	Mentally stable: 1
	```

	Output:
	```
	You can participate in the elections
	```
 * Input:
	```
	Your age: 42

	US citizen since: 42

	Any commited crimes: 0 

	Mentally stable: 0
	```

	Output:
	```
	You can participate in the elections
	```


##Task 2 Awesome Point

Write a program which asks the user to enter the coordinates of a point (x,y). Using the user input the program should tell the user if this point is awesome or not. What makes a point awesome? The point should be contained by the figure showed below.

![figure](https://github.com/kakato10/IP_2016/blob/master/3/task_1.jpg)

Example usage

 * Input:
	```
	x=2, y=2
	```
	Output:
	```
	Point is not awesome!
	```
 *  Input:
	```
	x=-2, y=-1
	```
	Output:
	```
	Point is awesome!
	```
 * Input:
	```
	x=-2, y=-1.3
	```
	Output:
	```
	Point is not awesome!
	```
 * Input:
	```
	x=2, y=-1
	```
	Output:
	```
	Point is awesome!
	```
	
Unfortunately you're going to need some math for that task.

##Task 3: Explore the library!

Using fuctions from an appropriate libraries, write a C++ program, which:
 * computes and displays the square of 4;
 * computes and displays the square root of 4;
 * finds and displays the absolute value of -4;
 * rounds 4.23 and 4.67 and displays the results;
 * finds which number is bigger from 10 and 21;
 * displays the count of seconds from 1 Jan 1970 (Epoch time);
 * displays a random int number between 0 and 42;


##Task 4: Viva Las Vegas!
Write a C++ program that asks the user to enter a number between 2 and 12 including. After that the program should throw two dices(get two random numbers between 1 and 6). If the sum of the numbers from the dices is the same as the number that the user has entered, he wins the Jackpot - 2000$, otherwise if the number of the user is divisible to the sum on the dices without remainder, he wins only 200$ and if none of the above is true, well Viva Las Vegas!

###Example usage
Input:
```
Enter a number between 2 and 12: 6
```

Output:
```
Dice 1: 5
Dice 2: 7
Sum: 12
Better luck next time!
```
___


Input:
```
Enter a number between 2 and 12: 12
```

Output:
```
Dice 1: 6
Dice 2: 6
Sum: 12
CONGRATULATIONS!!!!! You've just won our JACKPOT! Here are your 2000$.
```
___


Input:
```
Enter a number between 2 and 12: 8
```

Output:
```
Dice 1: 1
Dice 2: 3
Sum: 4
Good job, you've just won 200$!!!
```
___


##Task 5: Simple Calculator

Write a C++, which asks the user to enter three values for a, operator and b, where a and b are numbers and operator is char. Operator should be one of the following: '+', '-', '/', '*'
So basically you should display the value of  "a operator b" using switch. If the operator is not one of these four it should display the message "Unknown operator!". The examples are going to make it a bit more understandable.

###Example usage
Input:
```
a = 4, operator = '+',  b = 3.2
```

Output:
```
7.2
```	

___

Input:
```
a = 4, operator = '/', b = 2 
```
Output:
```
2
```

___

Input:
```
a = 3, operator = '*', b = 2
```

Output:
```
6
```

___

Input: 
```
a = 3, operator = '%', b = 2
```

Output:
```
Unknown operator!!
```


###Good luck!
