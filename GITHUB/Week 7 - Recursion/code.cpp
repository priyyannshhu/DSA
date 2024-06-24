// #include <iostream>
// #include <vector>
// using namespace std;

// int BinarySearch(int a[], int size, int low, int high, int key)
// {
// if ( low > high)
// {
//     return -1;
// }

//  int mid = (low + high) / 2;

//         if (a[mid] == key)
//         {
//             return mid;
//         }

//         if (key < a[mid])
//            return BinarySearch(a, size, low, mid - 1, key);
//         else
//              return BinarySearch(a, size, mid + 1, high, key);

// }

// int max(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// int min(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// void maxinArray(int arr[], int index, int size, int &max1)
// {
//     // max1 had to be passed by reference
//     if (index == size)
//         return;
//     // processing
//     max1 = max(max1, arr[index]);
//     // recursive call
//     maxinArray(arr, index + 1, size, max1);
// }
// void mininArray(int arr[], int index, int size, int &min1)
// {
//     // min1 had to be passed by reference
//     if (index == size)
//         return;
//     // processing
//     min1 = min(min1, arr[index]);
//     // recursive call
//     mininArray(arr, index + 1, size, min1);
// }
// bool SearchElementinArray(int a[], int size, int index, int key)
// {
//     // 2 base case -> found / not found
//     // base case 1
//     if (index >= size)
//         return false;

//     // base case 2
//     if (a[index] == key)
//     {
//         return true;
//     }
//     return SearchElementinArray(a, size, index + 1, key);
// }

// void printArray(int a[], int size, int index)
// {
//     // base case
//     if (index == size)
//         return;
//     // processing part
//     cout << a[index] << " ";

//     // recursive relation
//     printArray(a, size, index + 1);
// }
// void oddArray(int arr[], int size, int index)
// {
//     if (index == size)
//         return;

//     if (arr[index] % 2 != 0)
//     {
//         cout << arr[index] << " ";
//         cout.flush(); // Force the buffer to flush
//     }

//     oddArray(arr, size, index + 1);
// }
// void evenArray(int arr[], int size, int index, vector<int> &ans)
// {
//     if (index == size)
//         return;
//     if (arr[index] % 2 == 0)
//     {
//         ans.push_back(arr[index]);
//     }
//     evenArray(arr, size, index + 1, ans);
// }

// int main()
// {

//     vector<int> ans;
//     int max1 = INT32_MIN;
//     int min1 = INT32_MAX;
//     int arr[] = {10, 20, 30, 40, 50, 51, 60};
//      sort(arr, arr + size);
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int index = 0;
//     int key = 30;
//      int low = 0;
//     int high = size - 1;
//     /*printArray(arr, size, index);
//     cout << endl;
//     cout << "Element " << key << " found: " << SearchElementinArray(arr, size, index, key) << endl;
//     maxinArray(arr, index, size, max1);
//     mininArray(arr, index, size, min1);
//     cout << "Max element: " << max1 << endl;
//     cout << "Min element: " << min1 << endl;
//     cout << "Odd numbers in the array: ";
//     oddArray(arr, size, index);
//     cout << endl;
//     cout << "Even numbers in the array: ";
//     evenArray(arr, size, index, ans);

//     for (auto num : ans)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
// */
// int ans = BinarySearch(arr, size, low, high, key);

//    cout << "index: " << ans << endl;
//      return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(int a[], int size, int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (a[mid] == key)
    {
        return mid;
    }

    if (key < a[mid])
        return BinarySearch(a, size, low, mid - 1, key);
    else
        return BinarySearch(a, size, mid + 1, high, key);
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void maxinArray(int arr[], int index, int size, int &max1)
{
    if (index == size)
        return;
    max1 = max(max1, arr[index]);
    maxinArray(arr, index + 1, size, max1);
}

void mininArray(int arr[], int index, int size, int &min1)
{
    if (index == size)
        return;
    min1 = min(min1, arr[index]);
    mininArray(arr, index + 1, size, min1);
}

bool SearchElementinArray(int a[], int size, int index, int key)
{
    if (index >= size)
        return false;

    if (a[index] == key)
    {
        return true;
    }
    return SearchElementinArray(a, size, index + 1, key);
}

void printArray(int a[], int size, int index)
{
    if (index == size)
        return;
    cout << a[index] << " ";
    printArray(a, size, index + 1);
}

void oddArray(int arr[], int size, int index)
{
    if (index == size)
        return;

    if (arr[index] % 2 != 0)
    {
        cout << arr[index] << " ";
        cout.flush();
    }

    oddArray(arr, size, index + 1);
}

void evenArray(int arr[], int size, int index, vector<int> &ans)
{
    if (index == size)
        return;
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }
    evenArray(arr, size, index + 1, ans);
}

void printDigit(int n)
{
    // base case
    if (n == 0)
        return;
    // recursive case
    int digit = n % 10;
    cout << digit << " ";

    printDigit(n / 10);
}
int main()
{
    vector<int> ans;
    int max1 = INT32_MIN;
    int min1 = INT32_MAX;
    int arr[] = {10, 20, 30, 40, 50, 51, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int key = 30;
    int low = 0;
    int high = size - 1;
    int n = 35678;
    // Sort the array for binary search
    sort(arr, arr + size);

    printArray(arr, size, index);
    cout << endl;
    cout << "Element " << key << " found: " << SearchElementinArray(arr, size, index, key) << endl;
    maxinArray(arr, index, size, max1);
    mininArray(arr, index, size, min1);
    cout << "Max element: " << max1 << endl;
    cout << "Min element: " << min1 << endl;
    cout << "Odd numbers in the array: ";
    oddArray(arr, size, index);
    cout << endl;
    cout << "Even numbers in the array: ";
    evenArray(arr, size, index, ans);

    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    int ansIndex = BinarySearch(arr, size, low, high, key);
    if (ansIndex != -1)
    {
        cout << "Index: " << ansIndex << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    * /

        printDigit(n);

    return 0;
}