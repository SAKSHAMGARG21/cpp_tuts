// __________________________________________code bubber tuts start here _______________________________________________________

// c1
// reverse
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for (int i=0;i<n/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// c1
#include <iostream>
#include<climits>
#include "bits/stdc++.h"
using namespace std;
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int var=reverse(arr,n);
    // cout<<var<<endl;

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}



