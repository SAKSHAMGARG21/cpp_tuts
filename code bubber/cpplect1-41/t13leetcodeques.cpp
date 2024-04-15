// First and last position of an element in sorted array
// c1
// #include <iostream>
// using namespace std;
// int lastocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int firstocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
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
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int fstocc = firstocc(arr, n, 3);
//     int lstocc = lastocc(arr, n, 3);
//     cout << fstocc << endl;
//     cout << lstocc << endl;
//     return 0;
// }

// total no occ in an array by binary search
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int lastocc(int arr[], int n, int key)
// {

//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int firstocc(int arr[], int n, int key)
// {

//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
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
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int fstocc = firstocc(arr, n, 3);
//     int lstocc = lastocc(arr, n, 3);
//     int ans=(lstocc-fstocc)+1;
//     cout<<ans<<endl;
//     return 0;
// }

// _____________________________________________________________________________________________________________________________
// leet code
// 852. Peak index in mountain array
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int peekelement(vector<int> &arr){
//     int s=0;
//     int e=arr.size()-1;
//     while (s<e)
//     {
//         /* code */
//         int mid=(s+e)/2;
//         if (arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//     }
//     return s;
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
//     int pele = peekelement(arr);
//     cout << pele << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;
// int peekelement(vector<int> &arr){
//     int sarr=arr.size();
//     int max=INT_MIN;
//     for (int i=0;i<sarr;i++){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for (int i=0;i<sarr;i++){
//         if (arr[i]==max){
//             return i;
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
//     int lstocc = peekelement(arr);
//     cout << lstocc << endl;
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------
