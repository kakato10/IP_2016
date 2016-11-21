using namespace std;

#include <iostream>

int main()
{
	const int ARR_SIZE = 5;
	
	//a sorted array
	int arr[ARR_SIZE] = { 4, 8, 10, 15, 17 };

	int start = 0,
		end = ARR_SIZE,
		searched = 15,
		index = (end + start) / 2,
		counter = 1;

	while (arr[index] != searched)
	{
		if (start == end)
		{
			//element was nout found end the program
			cout << "Element not found" << endl;
			system("pause");
			return 1;
		}
		else if (arr[index] < searched) 
		{
			//remove left part of the array
			start = index + 1;
		}
		else if (arr[index] > searched)
		{
			//remove right part of the array
			end = index - 1;
		}

		//get the index of the next middle element
		index = (end + start) / 2;

		counter++;
	}
	
	cout << "Searched element " << searched << " was found at index " << index << endl;
	cout << "Steps needed to find the element: " << counter << endl;
	
	system("pause");
	return 0;
}