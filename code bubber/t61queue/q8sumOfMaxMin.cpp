// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);
    for (int i = 0; i < k; i++)
    {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    for (int i = k; i < n; i++)
    {
        /* removal */
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // addition
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }

    return ans;
}

// bs
int solve1(int arr[], int n, int k)
{

    queue<int> q;
    int mx = INT_MIN, mn = INT_MAX;
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    while (!q.empty())
    {
        mx = max(mx, q.front());
        mn = min(mn, q.front());
        q.pop();
    }

    sum+=mx+mn;

    for (int i = 1; i < n-k; i++)
    {
        for (int j = i; j < k; j++)
        {
            q.push(arr[j]);
        }

        mx = INT_MIN, mn = INT_MAX;
        while (!q.empty())
        {
            mx = max(mx, q.front());
            mn = min(mn, q.front());
            q.pop();
        }
        sum+=mx+mn;
    }
    return sum;
}
int main()
{
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};

    cout << solve(arr, 7, 4) << endl;
    // cout << solve1(arr, 7, 4) << endl;

    return 0;
}
