// c1
// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         int mid = s + (e-s) / 2;
//         if (key==arr[mid]){
//             return mid;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n,key;
//     cin >> n>>key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans = binarysearch(arr, n,key);
//     cout << ans << endl;
//     return 0;
// }

