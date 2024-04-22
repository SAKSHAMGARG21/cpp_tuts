// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkequal(int arr[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkprem(string s1, string s2)
{

    int cnt[26] = {0};

    for (int i = 0; i < s1.size(); i++)
    {
        int idx = s1[i] - 'a';
        cnt[idx]++;
    }

    int cnt2[26] = {0};
    int windSize = s1.length();
    int i = 0;
    while (i < windSize && i < s2.length())
    {
        int idx = s2[i] - 'a';
        cnt2[idx]++;
        i++;
    }

    if (checkequal(cnt, cnt2))
        return true;

    while (i < s2.length())
    {
        int nwidx = s2[i] - 'a';
        cnt2[nwidx]++;

        int oldidx = s2[i - windSize] - 'a';
        cnt2[oldidx]--;
        i++;

        if (checkequal(cnt, cnt2))
            return true;
    }
    return false;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << checkprem(s1, s2);

    return 0;
}