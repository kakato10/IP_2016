using namespace std;

#include <iostream>

int main()
{
	const int ARR_SIZE = 5;

	int arr[ARR_SIZE] = {19, 2, 14, 7, 9};
	int steps = 0;
	
	for (int i = ARR_SIZE - 1; i > 0; i--)
	{
		//last (ARR_SIZE - 1 - i) elements of the array are already at there place
		for (int j = 0; j < i; j++)
		{
			//find the next element that should be placed at the current index of i
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			steps++;
		}
	}

	cout << "Sorted array is: ";
	for (int i = 0; i < ARR_SIZE; i++)
		cout << arr[i] << " ";

	cout << endl << "Steps needed: " << steps << endl;

	system("pause");
	return 0;
}