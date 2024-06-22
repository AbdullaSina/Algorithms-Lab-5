#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
    int key = 23;

    int result = linearSearch(arr, 10, key);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}

