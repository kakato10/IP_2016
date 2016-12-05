using namespace std;

#include <iostream>


void swapReferences(int &a, int &b)
{	
	// save the first number
	int temp = a;

	// overwrite first number
	a = b;

	// overwrite second number
	b = temp;
}

void swapPointers(int *p1, int *p2)
{
	// save the first number
	int temp = *(p1);

	// overwrite first number
	*(p1) = *(p2);

	// overwrite second number
	*(p2) = temp;
}

int main()
{
	int a = 21, b = 18;

	// swap the two numbers
	swapPointers(&a, &b);
	
	// swap the numbers back
	swapReferences(a, b);

	cout << a << " " << b << endl;
	
	return 0;
}