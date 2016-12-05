using namespace std;

#include <iostream>



int main()
{
	double arr[][3] = { {1,2,3}, {3,4,5} };
	
	for (int i = 0; i < 2; i++)
	{
		// iterating over every element (subarray) of the outter array
		// *(arr + i) evaluates to the address of the first element's memmory
		// allocated to store the subarray 
		for (int j = 0; j < 3; j++) 
		{
			// iterating over every element of the current subarray
			// (*(arr + i) + j) returns the address of the current subarray's element
			cout << *(*(arr + i) + j) << endl;
		}
	}

	// the equivelent of the loop above without using pointer arithmetics
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << endl;

	return 0;
}