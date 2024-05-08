// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {

        size = size + 1;

        int idx = size;
        arr[idx] = val;

        while (idx > 1)
        {
            /* code */
            int par = idx / 2;
            if (arr[par] < arr[idx])
            {
                swap(arr[par], arr[idx]);
                idx = par;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromheap()
    {

        if (size == 0)
        {
            cout << "Nothing to print" << endl;
            return;
        }

        // step 1: put last element into the first index
        arr[1] = size;
        // step 2: remove the last element
        size--;

        // step 3 : take root node to its correct position 
        int i = 1;
        while (i < size)
        {

            int leftNode = 2 * i;
            int rightNode = 2 * i + 1;

            if (leftNode < size && arr[i] < arr[leftNode])
            {
                swap(arr[i],arr[leftNode]);
                i=leftNode;
            }
            else if (i<rightNode && arr[i]<arr[rightNode]){
                swap(arr[i],arr[rightNode]);
                i=rightNode;
            }
            else {
                return ;
            }
        }
    }
};
int main()
{
    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deletefromheap();
    h.print();

    // max heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Max Heap"<<endl;
    cout<<"Element top "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element top "<<pq.top()<<endl;

    cout<<"Size is "<<pq.size()<<endl;

    if (pq.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    // min heap
    priority_queue<int,vector<int> ,greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"Min Heap"<<endl;
    cout<<"Element top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Element top "<<minheap.top()<<endl;

    cout<<"Size is "<<minheap.size()<<endl;

    if (minheap.empty()){
        cout<<"min heap is empty"<<endl;
    }
    else{
        cout<<"min heap is not empty"<<endl;
    }
    return 0;
}