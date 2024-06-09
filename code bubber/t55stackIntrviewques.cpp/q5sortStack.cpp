
// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &stack, int num)
{
    // base case
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // recusrive call
    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);

    sortedInsert(stack, num);
}
int main()
{
    stack<int> myStack;
    int N; // Number of elements in the stack

    cout << "Enter the number of elements in the stack: ";
    cin >> N;

    cout << "Enter the elements of the stack:\n";
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        myStack.push(num);
    }

    // Delete the middle element(s)
    sortStack(myStack);

    cout << "Stack after Sorting element(s):\n";
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    return 0;
}