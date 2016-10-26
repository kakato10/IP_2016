Looping time!
=====================
Okay. You already know how to tell your program to go in a specific direction. Now you'll see how to use another powerful weapon: LOOPS. They help us in reducing the code size and make our programs more responsive to user input and many other things. Unfortunately with every great weapon there are some dangers. The biggest one is that, if we construct our loop badly it may never end. So be careful while using loops. Now take a look at the exercise. This time it's only one, but it's more complicated.

##Task 1 Ulam spiral
Implement a C++ program which describes the drawing process of an Ulam spiral. The program should ask the user to enter three variables: startX, startY and step. Then the program should start displaying what actually happens in the drawing process. First of all drawing happens in the following direction order: top, right, down, left. The coordinate system you should use is an rectangle. The upper-left corner of the rectangle has coordinates (0,0). The biggest value for x is 300 and for y is 250. If the next line that should be drawn is leaving the rectangle show a message that this was the last line if the Ulam spiral. There's a simple example.

 * Input:
	```
	startX = 150, startY = 150, step = 50
	```
 * Output:
	```
	Line number 1 (up): (150, 150) ---> (150, 100)
	```
	
	```
	Line number 2 (right): (150, 100) ---> (200, 100)
	```
	
	```
	Line number 3 (down): (200, 100) ---> (200, 200)
	```
	
	```
	Line number 4 (left): (200, 200) ---> (100, 200)
	```
	
	```
	Line number 5 (up): (100, 200) ---> (100, 50)
	```
	
	```
	Line number 6 (right): (100, 50) --> (250, 50)
	```
	
	```
	Line number 7 (down): (250, 50) --> (250, 250)
	```
	
	```
	Line number 8 (left): (250, 250) --> (50, 250)
	```
	
	```
	Line number 9 (up): (50, 250) --> (50, 0)
	```
	
	```
	Line number 10 (right): (50, 0) --> (300, 0)
	```

	```
	LAST LINE DRAWN!!!!
	```
