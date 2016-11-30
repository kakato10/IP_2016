#include <iostream>

using namespace std;

int main()
{
	const int ROWS = 2, COLUMNS = 3;
	int matrix[ROWS][COLUMNS];
	int matrixB[ROWS][COLUMNS];
	int sum[ROWS][COLUMNS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << "Insert A [" << i << "][" << j << "]: ";
			cin >> matrix[i][j];

			cout << "Insert B [" << i << "][" << j << "]: ";
			cin >> matrixB[i][j];

			sum[i][j] = matrix[i][j] + matrixB[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}