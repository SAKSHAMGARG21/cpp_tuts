// -----------------------------------------------------------------------------------------------------------------
// c1
// quick sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int s, int e)
{
    int tmx = arr[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= tmx)
        {
            c++;
        }
    }
    int pivt = s + c;
    int t = arr[s];
    arr[s] = arr[pivt];
    arr[pivt] = t;

    int i = s, j = e;

    while (i < pivt && j > pivt)
    {
        while (arr[i] <= tmx)
        {
            i++;
        }
        while (arr[j] > tmx)
        {
            j--;
        }
        if (i < pivt && j > pivt)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivt;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = pivot(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
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

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}