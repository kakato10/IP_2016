#include <iostream>

using namespace std;

// a function that returns the original array but sorted (using the same memmory)
int* sort(int *arr, const int SIZE)
{
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = i + 1; j < SIZE; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

// an equivalent to upper function, just using another syntax
// for the "arr" parameter
int* sort2(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = i + 1; j < SIZE; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {27, 9, 5, 8, 2};

    int *arr2 = sort(numbers, SIZE);

    // the sorted array is available in arr2 and numbers
    // they're actually 2 pointers to the same memmory

    for (int i = 0; i < SIZE; ++i) {
        cout << arr2[i] << " ";
    }

    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}