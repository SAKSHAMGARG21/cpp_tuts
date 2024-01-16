// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void bubblesort(vector<int>& arr,int n){
//     for (int i=1;i<=n;i++){
//         for (int j=0;j<n-i;j++){
//             if (arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bubblesort(arr,n);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i]<< " ";
//     }
//     return 0;
// }

// c37
// Bubble sort
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             if (arr[j] > arr[j+1]){
//                 int temp= arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }