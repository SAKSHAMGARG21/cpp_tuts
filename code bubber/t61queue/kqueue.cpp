// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class kqueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *next;
    int *arr;
    int freespot;

public:
    kqueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        arr = new int[n];
        for (int i = 0; i < k; i++)
        {
            front[i] = rear[i] = -1;
        }

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freespot = 0;
    }

    int enqueue(int d, int qn)
    {
        // overflow condition
        if (freespot == -1)
        {
            cout << "kQueue is full can't push data" << endl;
            return -1;
        }

        // find first free index;
        int idx = freespot;

        // to find the next empty index;
        freespot = next[idx];

        // if first element is inserted in que
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = idx;
        }
        else
        {
            // use for track the next elements in the same que
            next[rear[qn - 1]] = idx;
        }

        // shows that index is not empty
        next[idx] = -1;

        // updata rear
        rear[qn - 1] = idx;

        // push element
        arr[idx] = d;
    }

    int dequeue(int qn)
    {
        // check the underflow condition
        if (front[qn - 1] == -1)
        {
            cout << "Queue is empty"<<endl;
            return -1;
        }

        // find index to pop
        int idx=front[qn-1];

        // front ko aga badhao
        front[qn-1]=next[idx];

        // freespot ko mange karo
        next[idx]=freespot;
        freespot=idx;
        return arr[idx];
    }
};

int main()
{
    kqueue q(10,3);

    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    return 0;
}