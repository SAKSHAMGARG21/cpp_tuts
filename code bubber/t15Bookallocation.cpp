// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> arr, int n, int m, int mid)
{
    int stcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((pagesum + arr[i] <= mid) && m <= n)
        {
            pagesum += arr[i];
        }
        else
        {
            stcount++;
            if ((stcount > m || arr[i] > mid) || m > n)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> &pages, int n, int b)
{
    // Write your code here.
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pages[i];
    }

    int end = sum;
    int ans = -1;
    int mid = s + (end - s) / 2;
    while (s <= end)
    {
        if (ispossible(pages, n, b, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (end - s) / 2;
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = allocateBooks(arr, n, m);
    cout<<ans<<endl;
    return 0;
}