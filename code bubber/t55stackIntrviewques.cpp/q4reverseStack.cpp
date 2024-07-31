// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // basecase
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main()
{
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    
    reverseStack(myStack);

    // Print the modified stack
    cout << "Stack: ";
    while (!myStack.empty())
    {
        cout << myStack.top();
        myStack.pop();
        if (!myStack.empty())
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}