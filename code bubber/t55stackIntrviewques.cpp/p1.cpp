// -----------------------------------------------------------------------------------------------------------------
// c1
// to reverse the string using stack is the property of stack
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "sakskahm";

    stack<char> revstr;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        revstr.push(ch);
    }

    string ans = "";
    while (!revstr.empty())
    {
        ans.push_back(revstr.top());
        revstr.pop();
    }

    cout<<ans<<endl;

    return 0;
}

