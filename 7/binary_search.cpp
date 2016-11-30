#include <iostream>

using namespace std;

int temp = 41;

int main()
{
	const int INITIAL_INDEX = 0,
		ARR_SIZE = 10;
	int arr[ARR_SIZE] = { 0, 5, 12, 39, 52, 64, 76, 83, 92, 105 };

	int searched;
	cout << "Insert an element to search: ";
	cin >> searched;

	int start = INITIAL_INDEX,
		end = ARR_SIZE;

	int index = NULL;

	do {
		int middle = (start + end) / 2;
		//check bounds
		cout << start << " " << end << endl;
		if (arr[middle] == searched)
		{
			//element found
			index = middle;
		}
		else if (arr[middle] < searched)
		{
			//we don't need to check the elements to the left
			start = middle + 1;
		}
		else
		{
			//we don't need to check the elements to the right
			end = middle - 1;
		}
	} while (!index && start <= end);

	if (index)
		cout << "Element " << searched << " was found at index " << index << "." << endl;
	else
		cout << "Element was not found." << endl;

	return 0;
}

