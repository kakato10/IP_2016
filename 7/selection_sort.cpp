using namespace std;

#include <iostream>

int main()
{
	const int ARR_SIZE = 5;

	int arr[ARR_SIZE] = { 19, 14, 9, 7, 2 };

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		int index_of_min_el = i;
		for (int j = i + 1; j < ARR_SIZE; j++)
		{
			//find the index of the smallest element ahead of "i"
			if (arr[i] > arr[j])
				index_of_min_el = j;
		}
		//swap "i" with the smallest element
		int temp = arr[index_of_min_el];
		arr[index_of_min_el] = arr[i];
		arr[i] = temp;
	}

	cout << "Sorted array is: ";
	for (int i = 0; i < ARR_SIZE; i++)
		cout << arr[i] << " ";

	cout << endl;
	system("pause");
	return 0;
}