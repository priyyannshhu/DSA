#include <iostream>
using namespace std;

void solve(int arr[], int n) {
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
}

int main() {
    int a[] = {1, 2, 3};
    int n = 3;

    cout << "Before: ";
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    solve(a, n);

    cout << "After: ";
    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    return 0;
}