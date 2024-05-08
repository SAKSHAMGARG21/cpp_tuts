// #include <bits/stdc++.h> 
// void heapify(vector<int> &arr, int n, int i)
// {

//     int small = i;
//     int left = 2 * i+1;
//     int right = 2 * i + 2;

//     if (left < n && arr[small] > arr[left])
//     {
//         small = left;
//     }
//     if (right < n && arr[small]> arr[right])
//     {
//         small = right;
//     }

//     if (small != i)
//     {
//         swap(arr[small],arr[i]);
//         heapify(arr,n,small);
//     }
// }
// vector<int> buildMinHeap(vector<int> &arr)
// {
//     // Write your code here
//     int n = arr.size();
//     for (int i = n / 2-1; i >= 0; i--)
//     {
//         heapify(arr, n, i);
//     }
//     return arr;
// }


#include <bits/stdc++.h>
using namespace std;

class MinHeap {
public:
    void heapify(vector<int> &arr, int n, int i) {
        int small = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[small] > arr[left]) {
            small = left;
        }
        if (right < n && arr[small] > arr[right]) {
            small = right;
        }

        if (small != i) {
            swap(arr[small], arr[i]);
            heapify(arr, n, small);
        }
    }

    vector<int> buildMinHeap(vector<int> &arr) {
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }
        return arr;
    }
};

int main() {
    vector<int> inputArray = {9, 4, 7, 1, 3, 6, 5};
    MinHeap minHeap;

    vector<int> minHeapArray = minHeap.buildMinHeap(inputArray);

    cout << "Min Heap: ";
    for (int num : minHeapArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
