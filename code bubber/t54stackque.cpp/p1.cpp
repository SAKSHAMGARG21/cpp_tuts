// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stack1
{
    // properties
public:
    int top;
    int *arr;
    int size;

    // bheaviour
    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void pushele(int d)
    {
        if (top >= size - 1)
        {
            cout << "stack overflow" << endl;
        }
        top++;
        arr[top] = d;
    }

    int popele()
    {
        if (top < 0)
        {
            cout << "stack is empty can't pop" << endl;
            return -1;
        }
        int val = arr[top];
        top--;
        return val;
    }

    int checkmt()
    {
        if (top < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int topele()
    {
        if (top < 0)
        {
            cout << "stack is empty can't see the top element" << endl;
            return -1;
        }
        int val = arr[top];
        return val;
    }
};
int main()
{
    stack1 st(3);

    // push the element into stack
    st.pushele(2);
    st.pushele(8);
    st.pushele(4);
    // st.pushele(9);

    // top element
    // cout << st.topele() << endl;

    // // pop the element
    // cout << st.popele() << endl;

    // // top element
    // cout << st.topele() << endl;

    // cout<<endl;

    // // check empty
    // cout << st.checkmt() << endl;

    // cout << st.popele() << endl;
    // cout << st.popele() << endl;
    // cout << st.popele() << endl;

    // // check empty
    // cout << st.checkmt() << endl;

    // // top element
    // cout << st.topele() << endl;

    /* // creating of stack by in built lib
    stack<int> s;
    s.push(2);
    s.push(5);

    // use to empty the stack
    s.pop();

    // to print the top of stack
    cout<<s.top()<<endl;

    // to check the stack is empty or not
    cout<<s.empty(); */

    return 0;
}
