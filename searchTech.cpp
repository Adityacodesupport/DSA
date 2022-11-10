#include <bits/stdc++.h>

using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int low = 1;
    int high = n;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter a key:" << endl;
    cin >> key;
    // int res=linearSearch(arr,n,key);
    int res = binarySearch(arr, n, key);
    if (res == -1)
    {
        cout << "key is not found!!" << endl;
    }
    else
    {
        cout << "Key is found at index:" << res << endl;
    }
    return 0;
}