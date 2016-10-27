using namespace std;

#include <iostream>

int main() 
{
	const int ROWS = 7, COLUMNS = 11,
		EMPTY_ELEMENTS = 3, COUNTER_INITIAL_VALUE = 1;
	int first_empty_element = 2;

	// iterate over rows
	for (int i = 1; i <= ROWS; i++, first_empty_element++) 
	{
		int counter = COUNTER_INITIAL_VALUE;

		// iterate over columns
		for (int j = counter; j <= COLUMNS; j++)
		{
			// if needed place a x instead of the counter and then restart it
			// otherwise display the counter and increase it's value
			if (j >= first_empty_element && j < first_empty_element + EMPTY_ELEMENTS)
			{
				cout << "x";
				counter = COUNTER_INITIAL_VALUE;
			}
			else
			{
				cout << counter;
				counter++;	
			}
			// set a space between the columns for readability
			cout << " ";
		}
		// go to new row
		cout << endl;
	}

	system("pause");
	return 0;
}