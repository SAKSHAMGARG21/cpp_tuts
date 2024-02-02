// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &nums)
{
    int c = 1;
    int s = nums.size();
    if (nums[0] == 0 || s == 1)
    {
        return 0;
    }
    else if (s == 2)
    {
        return 1;
    }
    else
    {
        int i = 1;
        int val;
        int jump;
        while (i < s)
        {
            val = nums[i];
            int idx=i+val;
            if (idx < s && )
            {
                jump = nums[idx];
                c++;
                i += jump;
            }
        }
    }
    return c;
    // return 2;
}
int main()
{
    vector<int> arr(3);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int ans = jump(arr);
    cout << ans << endl;

    return 0;
}