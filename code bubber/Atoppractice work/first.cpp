// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue()
    {
        size = 1000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    void enqueue(int d)
    {
        if (front == size)
        {
            cout << "queue is full";
            // return;
        }
        else
        {
            arr[rear] = d;
            rear++;
        }
    }
    void dequeue()
    {
        if (front == rear)
        {
            // return -1;
            cout<<"ed";
        }
        else
        {

            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            // return ans;
        }
    }

    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        return arr[front];
    }
};
int main()
{
    Queue q;
    q.enqueue(43);
    q.enqueue(24);
    q.enqueue(64);
    q.enqueue(74);

    while (!q.isEmpty())
    {
        cout << q.qfront() << " ";
        q.dequeue();
    }
    return 0;
}