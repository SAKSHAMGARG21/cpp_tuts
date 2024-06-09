#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class TwoStack
{
public:
    // Initialize TwoStack.
    int *arr;
    int top1;
    int top2;
    int s;
    TwoStack(int s)
    {
        // Write your code here.
        this->s = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    // Push in stack 1.
    void push1(int num)
    {
        // Write your code here.
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        // Write your code here.
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }else {
            cout<<"Stack is Full can't add value"<<endl;

        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        // Write your code here.
        if (top1 < 0)
        {
            return -1;
        }
        int var = arr[top1];
        top1--;
        return var;
    }
    
    // Pop from stack 2 and return popped element.
    int pop2()
    {
        // Write your code here.
        if (top2 == s)
        {
            return -1;
        }
        int val = arr[top2];
        top2++;
        return val;
    }
};

int main()
{
    // Example usage
    TwoStack ts(5);
    ts.push1(10);
    ts.push2(50);
    ts.push1(30);
    ts.push2(40);
    ts.push2(80);
    // ts.push2(20);

    cout << "Popped from stack 1: " << ts.pop1() << endl;
    cout << "Popped from stack 2: " << ts.pop2() << endl;

    return 0;
}