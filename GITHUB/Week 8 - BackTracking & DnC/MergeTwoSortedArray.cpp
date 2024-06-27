#include <iostream>
#include <vector>
using namespace std;
void mergeSortedarray(int arr[], int sizearr, int brr[], int sizebrr, vector<int> &ans)
{
    int i = 0;
    int j = 0;

    while (i < sizearr && j < sizebrr)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }
    while (i < sizearr)
    {
        ans.push_back(arr[i++]);
    }
    while (j < sizebrr)
    {
        ans.push_back(brr[j++]);
    }
}
    int main()
    {
        int arr[] = {10, 30, 50, 70};
        int sizeArr = 4;
        int brr[] = {20, 40, 60, 80, 90, 100};
        int sizeBrr = 6;

        vector<int> ans;
        mergeSortedarray(arr, sizeArr, brr, sizeBrr, ans);

        for (int num : ans)
        {

            cout << num << " ";
        }
        cout << endl;

        return 0;
    }
