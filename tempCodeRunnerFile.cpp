#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNO = INT_MIN;
    int minNO = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNO = max(maxNO, arr[i]);
        minNO = min(minNO, arr[i]);
    }
    cout << maxNO << " " << minNO;
    return 0;
}