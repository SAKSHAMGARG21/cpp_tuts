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
                swap(arr[i], arr[leftNode]);
                i = leftNode;
            }
            else if (i < rightNode && arr[i] < arr[rightNode])
            {
                swap(arr[i], arr[rightNode]);
                i = rightNode;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{

    int large = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[large] < arr[left])
    {
        large = left;
    }
    if (right < n && arr[large] < arr[right])
    {
        large = right;
    }

    if (large != i)
    {
        swap(arr[large],arr[i]);
        heapify(arr,n,large);
    }
}
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

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Printing the heapify arr" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}