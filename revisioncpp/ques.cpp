// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool ispossible(vector<int> &arr, int n, int b, int mid)
// {
//     int e = arr.size();
//     int pagec = 0;
//     int stcount = 1;
//     for (int i = 0; i < e; i++)
//     {
//         if (pagec + arr[i] <= mid && b<n){
//             pagec+=arr[i];
//         }
//         else{
//             stcount++;
//             if ((stcount > b || arr[i]>mid) || b>n) {
//                 return false;
//             }
//             pagec=arr[i];
//         }
//     }
//     return true;
// }
// int binarysch(vector<int> &arr, int n, int b)
// {
//     int page = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         page += arr[i];
//     }
//     int s = 0;
//     int e = page;
//     int ans = -1;
//     while (s < e)
//     {
//         int mid = (s + e) / 2;
//         if (ispossible(arr, n, b, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }

//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = binarysch(arr,n,m);
//     cout << ans << endl;
//     return 0;
// }