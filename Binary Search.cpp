#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    cout << "Input Array Size: " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Input Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    sort(arr, arr + n);

    cout << binarySearch(arr, n, key) + 1 << endl;
}