using namespace std;

#include <iostream>

int main()
{
	int sizes[4] = { 3,4,5,6 };

	// get a new 2D array with 4 inner arrays
	int **arr = new int*[4];

	for (int i = 0; i < 4; i++)
	{
		// dynamically create the inner arrays and specify their length
		arr[i] = new int[sizes[i]];
		for (int j = 0; j < sizes[i]; j++)
		{
			// initialize the elements of the arrays
			arr[i][j] = j;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		// display every element of the array
		for (int j = 0; j < sizes[i]; j++)
			cout << arr[i][j] << " ";

		// tell the heap to free the memmory for every inner array
		delete[] arr[i];

		cout << endl;
	}

	// tell the heap to free the memmory for the initial array
	delete[] arr;
	
	return 0;
}