using namespace std;

#include <iostream>

int main()
{
	const int ARR_SIZE = 5;

	int arr[ARR_SIZE] = {19, 14, 9, 7, 2};
	int steps = 0;
	
	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		for (int j = i + 1; j < ARR_SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
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