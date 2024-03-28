// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
class Queue
{
    int *arr;
    int size;
    int qfront;
    int back;

public:
    Queue()
    {
        // Implement the Constructor
        size = 10000;
        arr = new int[size];
        qfront = 0;
        back = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (qfront == back)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        if (back == size)
        {
            cout << "stack is full";
        }
        else
        {
            arr[back] = data;
            back++;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (qfront == back)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if (qfront == back)
            {
                qfront = 0;
                back = 0;
            }
            return ans;
        }
    }

    int front()
    {
        // Implement the qfront() function
        if (qfront == back)
        {
            return -1;
        }
        return arr[qfront];
    }
};

int main()
{
    return 0;
}