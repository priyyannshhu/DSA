#include<iostream>
using namespace std;

void oddArray(int arr[], int size, int index)
{
    if (index == size)
        return;

    if (arr[index] % 2 != 0)
    {
        cout << arr[index] << " ";
        cout.flush(); // Force the buffer to flush
    }

    oddArray(arr, size, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 71, 81, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    cout << "Odd numbers in the array: ";
    oddArray(arr, size, index);
    cout << endl;

    return 0;
}