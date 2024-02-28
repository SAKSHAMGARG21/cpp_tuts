#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

bool issame(int i, int j, string s)
{
    int cnt[26] = {0};

    for (int l = i; l <= j; l++)
    {
        int idx = s[l] - 'a';
        // cout<<idx<<endl;
        cnt[idx]++;
    }

    for (int l = 0; l < 26; l++)
    {
        // cout<<cnt[l]<<endl;
        if (cnt[l] > 1)
        {
            return false;
        }
    }
    return true;
}

int longestUniqueSubsttr(string S)
{
    // code

    int l = 0;
    int arr[100] = {0};
    int sa = S.size();
    int i = 0;
    int j = 0;
    // cout<<sa<<endl;
    while (i < sa)
    {
        int c = 1;
        for (j = i + 1; j < sa; j++)
        {
            if (issame(i, j, S))
            {
                c++;
                arr[l] = c;
            }
            else
            {
                l++;
                break;
            }
        }
        i = j;
    }
    // cout<<l<<endl;

    if (l==0){
        return sa;
    }
    int ans = -1;
    for (int k = 0; k < l; k++)
    {
        // cout<<arr[k]<<endl;
        ans = max(arr[k], ans);
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int ans=longestUniqueSubsttr(s);
    cout<<ans<<endl;
    return 0;
}