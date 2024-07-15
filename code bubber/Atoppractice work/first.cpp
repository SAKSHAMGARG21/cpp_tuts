// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solvedm(stack<int> &st, int cnt, int s)
{

    if (cnt == s / 2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();
    solvedm(st, cnt + 1, s);

    st.push(num);
}
void deletemiddle(stack<int> &st)
{
    int s = st.size();
    int cnt = 0;
    // solve(st,cnt,s);
    vector<int> arr;
    while (!st.empty())
    {
        if (cnt != s / 2)
        {
            arr.push_back(st.top());
        }
        cnt++;
        st.pop();
    }

    for (auto i : arr)
    {
        st.push(i);
    }
}

bool isredundent(string s)
{

    int ss = s.size();

    stack<char> st;

    for (int i = 0; i < ss; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            bool isred = true;
            char top = st.top();
            while (top != '(')
            {
                if (top == '*' || top == '+' || top == '/' || top == '-')
                {
                    isred = false;
                }
                st.pop();
            }
            if (isred == true)
            {
                return true;
            }
            st.pop();
        }
    }
    return false;
}
int main()
{
    // string s;
    // getline(cin, s);

    // stringstream str(s);

    // int a;
    // vector<int> arr;
    // stack<int> st;
    // while (str >> a)
    // {
    //     st.push(a);
    // }

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // deletemiddle(st);

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    string s;
    cin >> s;

    bool isred = isredundent(s);
    cout << (isred ? "true" : "false") << endl;

    return 0;
}