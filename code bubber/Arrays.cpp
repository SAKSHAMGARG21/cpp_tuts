// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if (arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for (int j=0;j<n;j++){
//         cout<<arr[j]<<" ";
//     }
//     cout<<"\n";
//     cout<<arr[n-1];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if (arr[0]<arr[i]){
//             arr[0]=arr[i];
//         }
//     }
//     cout<<"\n";
//     cout<<arr[0];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if (arr[0]>arr[i]){
//             arr[0]=arr[i];
//         }
//     }
//     cout<<"\n";
//     cout<<arr[0];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             if (arr[0]>arr[j]){
//                 int temp=arr[0];
//                 arr[0]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     cout<<arr[0];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNO=INT_MIN;
//     int minNO=INT_MAX;
//     for(int i=0;i<n;i++){
//         if (arr[i]>maxNO){
//             maxNO=arr[i];
//         }
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]<minNO){
//             minNO=arr[i];
//         }
//     }
//     cout<<maxNO<<" "<<minNO;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxNO = INT_MIN;
//     int minNO = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         maxNO = max(maxNO, arr[i]);
//         minNO = min(minNO, arr[i]);
//     }
//     cout << maxNO << " " << minNO;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxNO = arr[0];
//     int minNO = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxNO)
//         {
//             maxNO = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < minNO)
//         {
//             minNO = arr[i];
//         }
//     }
//     int secmax = INT_MIN;
//     int secmin = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > secmax && arr[i] != maxNO)
//         {
//             secmax=arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < secmin && arr[i] != minNO)
//         {
//             secmin=arr[i];
//         }
//     }
//     cout << secmax << " " << secmin;
//     return 0;
// }

// // searching in arrays
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int i,j,n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (j = 0; j < n; j++)
//     {
//         if (key == arr[i])
//         {
//             cout << i;
//             break;
//         }
//     }
//     if (i== n){
//         cout <<-1;
//     }
//     return 0;
// }

// linear search
// #include <iostream>
// using namespace std;
// int linearsearch(int arr[],int n, int key){
//     for (int k=0;k<n;k++){
//         if (arr[k]==key){
//             return k;
//         }
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n, i, j, key;
//     cin>>n>>key;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int ans=linearsearch(arr,n,key);
//     cout<<ans<<endl;
//     return 0;
// }

// Binary search
// #include <iostream>
// using namespace std;
// int bs(int arr[] ,int n ,int key){
//     int s = 0;
//     int e = n;
//     while(s<= e)
//     {
//         int mid = (s + e)/ 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<bs(arr,n,key)<<endl;
//     return 0;
// }

// binary search
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int flag = 0;
//     int s = 0;
//     int e = n - 1;
//     int pos = 0;
//     while (s < e && flag == 0)
//     {
//         int mid = (s + e) / 2;
//         /* code */
//         if (arr[mid] == key)
//         {
//             flag = 1;
//             pos = mid + 1;
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
//     if (flag == 1)
//     {
//         cout << pos << endl;
//     }
//     else
//     {
//         cout << "not found" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//      int s = 0;
//     int e = n;
//     while(s<= e)
//     {
//         int mid = (s + e)/ 2;
//         if (key == arr[mid])
//         {
//             cout<< mid;
//             break;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (s>e){
//         cout<<-1;
//     }
//     return 0;
// }

// selection sort code
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i=0;i<n;i++){
//         for (int j=i;j<n;j++){
//             if (arr[i]>arr[j]){
//                 int s=arr[i];
//                 int e=arr[j];
//                 arr[j]=s;
//                 arr[i]=e;

//                 // int temp =arr[i];
//                 // arr[i]=arr[j];
//                 // arr[j]=temp;
//             }
//         }
//     }
//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// selection sort code
//  #include <iostream>
//  using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }

//         // Swap the minimum element with the current element
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main()
// {
//     int n;
//     // cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     // cout << "Enter the elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Call the selectionSort function
//     selectionSort(arr, n);

//     // cout << "Sorted array in ascending order:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Bubble sort algo
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int k = 0; k < n; k++)
//     {
//         for (int i = 0; i < n-k; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
//     return 0;
// }

// insertion sort algo
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// insertion sort algo
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j;
//         for (j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]>arr[i+1]){
//             arr[i+1]=arr[i];
//         }
//     }
//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// same question as above
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, mx = -19999;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int k = 0; k < n; k++)
//     {
//         mx = max(mx, arr[k]);
//         cout << mx << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++){
//         int sum=0;
//         for (int j=i;j<n;j++){
//             sum+=arr[j];
//             cout<<sum<<endl;
//         }
//     }
//     return 0;
// }

// longest arthmatic subarray
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n],arr1[1000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++){
//         arr1[i]=arr[i+1]-arr[i];
//     }
//     for (int i=0;i<n-1;i++){
//         cout<<arr1[i];
//     }
//     return 0;
// }

// longest arthmatic subarray
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j = 2;
//     int curr = 2;

//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             curr++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// record braking day code by self
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n], arr1[1000];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int c = 0;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[0] > arr[1]){
//                 c++;
//             }
//             else if (arr[i] < arr[i - j])
//             {
//                 break;
//             }
//             else if (arr[i] > arr[i + 1] && arr[i] > arr[i - j])
//             {
//                 if (i ==j){
//                     // cout << arr[i];
//                     c++;
//                 }
//             }
//         }
//     }
//     cout<<c;
//     return 0;
// }

// record breaking day by apna college
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     // int arr[n+1];
//     // arr[n]=-1;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return 0;
//     }
//     int ans = 0;
//     int mx = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mx && arr[i] > arr[i + 1])
//         {
//             ans++;
//         }
//         mx = max(mx, arr[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }

// record breaking day code by self
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     // int arr[n+1];
//     // arr[n]=-1;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return 0;
//     }
//     int ans = 0;
//     ;
//     int mx = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mx && arr[i] > arr[i + 1])
//         {
//             ans++;
//         }
//         mx = max(mx, arr[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     const int N = 1e6 + 2;
//     int idx[N];
//     for (int j = 0; j < N; j++)
//     {
//         idx[j] = -1;
//     }
//     int minidx = INT_MAX;
//     for (int s = 0; s < n; s++)
//     {
//         if (idx[arr[s]] != -1)
//         {
//             minidx = min(minidx, idx[arr[s]]);
//         }
//         else
//         {
//             idx[arr[s]] = s;
//         }
//     }
//     if (minidx == INT_MAX)
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         cout << minidx + 1 << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <climits>

// int main() {
//     int n;
//     // std::cout << "Enter the size of the array: ";
//     std::cin >> n;

//     std::vector<int> arr(n);
//     // std::cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     const int N = 1e6 + 2;
//     std::vector<int> idx(N, -1);

//     int minidx = INT_MAX;
//     for (int s = 0; s < n; s++) {
//         if (idx[arr[s]] != -1) {
//             minidx = std::min(minidx, idx[arr[s]]);
//         }
//         else {
//             idx[arr[s]] = s;
//         }
//     }

//     if (minidx == INT_MAX) {
//         std::cout << "-1" << std::endl;
//     }
//     else {
//         std::cout << minidx + 1 << std::endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int j=0;j<n;j++){
//         int c=0;
//         for (int s=0;s<n;s++){
//             if (arr[j]==arr[s]){
//                 c++;
//             }
//         }
//         if (c>1){
//             cout<<j+1;
//             break;
//         }
//     }
//     return 0;
// }

// frequency of an array
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int narr[1000] = {0};
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int k, j;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != -1)
//         {
//             int c = 1;
//             for (j = i+1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     c++;
//                     arr[j] = -1;
//                 }
//             }
//             narr[i] = c;
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         if (arr[k] != -1)
//         {
//             cout << arr[k] <<" "<< narr[k] << endl;
//         }
//     }
//     return 0;
// }

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
//     int narr[1000] = {0}; // Initialize all elements to 0
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != -1)
//         {
//             int c = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     c++;
//                     arr[j] = -1;
//                 }
//             }
//             narr[arr[i]] = c;
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         if (arr[k] != -1)
//         {
//             cout << arr[k] << " " << narr[arr[k]] << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int denominations[] = {100, 50, 20, 10};
//     int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

//     for (int i = 0; i < numDenominations; i++)
//     {
//         int count = n / denominations[i];
//         cout << denominations[i] << ":" << count << endl;
//         n = n % denominations[i];
//     }
//     return 0;
// }

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

// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int swapalternate(int arr[],int n){
//     for(int i=0;i<n-1;i+=2){
//         int temp = arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int var=swapalternate(arr,n);
//     // cout<<var<<endl;

//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int swapalternate(int arr[],int n){
//     for(int i=0;i<n;i++){

//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int var=swapalternate(arr,n);
//     // cout<<var<<endl;

//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include "bits/stdc++.h"
// using namespace std;
// int uniqueelement(int arr[], int n)
// {
//     int c, i;
//     for (i = 0; i < n; i++)
//     {
//         c = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//             }
//         }
//         if (c == 1)
//         {
//             return arr[i];
//         }
//     }
// }
// int uniqueelement(int arr[], int n)
// {
//     int i, ans = 0;
//     for (i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int var = uniqueelement(arr, n);
//     cout << var << endl;

//     return 0;
// }

// leetcode question
// #include <iostream>
// #include <climits>
// #include "bits/stdc++.h"
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n], narr[1000] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int c = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 c++;
//                 arr[j] = -99999;
//             }
//         }
//         narr[i] = c;
//     }
//     int pa = 0;
//     int parr[pa];
//     for (int t = 0; t < n; t++)
//     {
//         if (arr[t] != -99999)
//         {
//             // cout << arr[t] << ":" << narr[t] << endl;
//             parr[pa] = narr[t];
//             pa++;
//         }
//     }
//     int flag = 0;
//     for (int f = 0; f < pa; f++)
//     {
//         for (int fa = f + 1; fa < pa; fa++)
//         {
//             if (parr[f] == parr[fa])
//             {
//                 flag = 1;
//             }
//         }
//     }
//     if (flag == 1)
//     {
//         printf("false");
//     }
//     else
//     {
//         printf("true");
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include<vector>
// #include "bits/stdc++.h"
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans ^ i;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;

// int findduplicate(vector<int>& nums) {
//     sort(nums.begin(), nums.end()); // Sorting the vector to make the duplicate adjacent
//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] == nums[i - 1]) {
//             return nums[i]; // Found the duplicate element
//         }
//     }
//     return -1; // If no duplicate is found
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     int var = findduplicate(nums);
//     cout << var << endl;
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;
// int findduplicate(vector<int> &nums)
// {
//     int c, i,flag=0;
//     for (i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] != -1)
//         {
//             c = 1;
//             for (int j = i+1; j < nums.size(); j++)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     c++;
//                     nums[j]=-1;
//                 }
//             }
//             if (c == 2)
//             {
//                 cout << nums[i] << endl;
//                 flag=1;
//             }
//         }
//     }
//     if (flag==0)
//     {
//         cout<<" "<<endl;
//     }
//     // cout<<"every thing is right"<<endl;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int var = findduplicate(nums);
//     // cout<<var<<endl;
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;
// vector<int> findduplicate(vector<int> &nums)
// {
//     vector<int> arr;
//     int temp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] > nums[j])
//             {
//                 temp = nums[i];
//                 nums[i] = nums[j];
//                 nums[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == nums[i + 1])
//         {
//             arr.push_back(nums[i]);
//             while(i<nums.size()-1 && nums[i]==nums[i+1]){
//                 i++;
//             }
//         }
//     }

//     return arr;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     vector<int> arr = findduplicate(nums);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> findduplicate(vector<int> &nums)
// {
//     vector<int> duplicates;
//     sort(nums.begin(), nums.end());

//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         if (nums[i] == nums[i + 1])
//         {
//             duplicates.push_back(nums[i]);
//             while (i <nums.size() && nums[i] == nums[i + 1])
//                 i++; // Skip other duplicates of the same element
//         }
//     }

//     return duplicates;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     vector<int> duplicates = findduplicate(nums);
//     if (duplicates.empty())
//     {
//         // cout << "No duplicate elements found." << endl;
//     }
//     else
//     {
//         // cout << "Duplicate elements: ";
//         for (int num : duplicates)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;

// bool decendingfunction(int a, int b){
//     return a>b;
// }

// bool ascendingfunction(int a, int b){
//     return a<b;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // sort(arr, arr + n);
//     // sort(arr.begin()+2,arr.begin()+6);
//     // sort(arr.begin(), arr.end(), ascendingfunction);
//     sort(arr.begin(), arr.end(), decendingfunction);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> nums = {5, 1, 9, 3, 7, 2, 8, 4, 6};
//     int start_index = 2; // Index of the first element in the range
//     int end_index = 6;   // Index of the last element in the range (exclusive)

//     sort(nums.begin() + start_index, nums.begin() + end_index);

//     cout << "Sorted Range: ";
//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // Custom comparison function for sorting in ascending order
// bool compareAscending(int a, int b) {
//     return a < b;
// }

// // Custom comparison function for sorting in descending order
// bool compareDescending(int a, int b) {
//     return a > b;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Sorting in ascending order
//     // sort(arr.begin(), arr.end(), compareAscending);

//     // Sorting in descending order
//     sort(arr.begin(), arr.end(), compareDescending);

//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;
// vector<int> intersection(vector<int> &arr, vector<int> &arr1)
// {
//     int sarr = arr.size();
//     int sarr1 = arr1.size();
//     vector<int> narr;
//     int flag = 0;
//     for (int i = 0; i < sarr; i++)
//     {
//         for (int j = 0; j < sarr1; j++)
//         {
//             if (arr[i] == arr1[j])
//             {
//                 narr.push_back(arr[i]);
//                 arr1[j] = INT_MIN;
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     return narr;
//     if (flag == 0)
//     {
//         return -1;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> arr(n);
//     vector<int> arr1(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr1[i];
//     }

//     vector<int> narr = intersection(arr, arr1);
//     for (int i = 0; i < narr.size(); i++)
//     {
//         cout << narr << endl;
//     }

//     return 0;
// }

// set code
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> st;

//     // Insert elements into the set
//     st.insert(10);  //Note IN case of set insert function will use not push_back
//     st.insert(5);
//     st.insert(15);
//     st.insert(8);

//     // The set will automatically sort and remove duplicates
//     // So, the set will contain {5, 8, 10, 15}

//     // Access elements in the set
//     cout << "Set Elements: ";
//     for (int num : st) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Check if an element exists in the set
//     int x = 5;
//     if (st.count(x)) {
//         cout << x << " exists in the set." << endl;
//     } else {
//         cout << x << " does not exist in the set." << endl;
//     }

//     // Erase elements from the set
//     st.erase(8);

//     cout << "Set after erasing 8: ";
//     for (int num : st) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// leetcode
// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// #include "bits/stdc++.h"
// using namespace std;
// // leetcode solution this method is known as 2 point approach which very important
// vector<int> intersection(vector<int> &arr, vector<int> &arr1)
// {
//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());
//     set<int> st;
//     vector<int> ans;
//     int i = 0, j = 0;
//     while (i < nums1.size() && j < nums2.size())
//     {
//         if (nums1[i] == nums2[j])
//         {
//             st.insert(nums1[i]);
//             i++;
//             j++;
//         }
//         else if (nums1[i] < nums2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     for (auto it : st)
//     {
//         ans.push_back(it);
//     }
//     return ans;
// }
// vector<int> intersection(vector<int> &arr, vector<int> &arr1)
// {
//     int sarr = arr.size();
//     int sarr1 = arr1.size();
//     vector<int> narr;
//     int flag = 0;
//     for (int i=0;i<sarr;i++){
//         for (int j=i+1;j<sarr;j++){
//             if (arr[i]==arr[j]){
//                 arr[j]=-999999;
//             }
//         }
//     }
//     for (int i = 0; i < sarr; i++)
//     {
//         for (int j = 0; j < sarr1; j++)
//         {
//             if (arr[i] == arr1[j])
//             {
//                 narr.push_back(arr[i]);
//                 arr1[j] = -999998;
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     // if (flag == 0)
//     // {
//     //     narr.push_back(-1); // Add -1 to narr if no intersection found
//     // }
//     return narr;
// }

// int main(int argc, char const *argv[])
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> arr(n);
//     vector<int> arr1(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr1[i];
//     }

//     vector<int> narr = intersection(arr, arr1);
//     for (int i = 0; i < narr.size(); i++)
//     {
//         cout << narr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// leetcode pairsum
// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> pairsum(vector<int> &arr, int s)
// {
//     int sarr = arr.size();
//     vector<vector<int>> ans;
//     for (int i = 0; i < sarr; i++)
//     {
//         for (int j = i; j < sarr; j++)
//         {
//             if (arr[i] + arr[j] == s)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//         // cout<<endl;
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     int n, s;
//     cin >> n >> s;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<vector<int>> narr = pairsum(arr, s);
//     for (int i=0;i<narr.size();i++) {
//         cout << narr[i][0] << " " << narr[i][1] << endl;
//     }

//     return 0;
// }

// same
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> pairsum(vector<int> &arr, int s) {
//     int sarr = arr.size();
//     vector<vector<int>> ans;
//     for (int i = 0; i < sarr - 1; i++) {
//         for (int j = i + 1; j < sarr; j++) {
//             if (arr[i] + arr[j] == s) {
//                 vector<int> temp = {arr[i], arr[j]};
//                 ans.push_back(temp);
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     int n, s;
//     cin >> n >> s;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<vector<int>> narr = pairsum(arr, s);
//     for (const auto& pair : narr) {
//         cout << pair[0] << " " << pair[1] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> tripletsum(vector<int> &arr, int s) {
//     int sarr = arr.size();
//     vector<vector<int>> ans;
//     for (int i = 0; i < sarr; i++) {
//         for (int j = i + 1; j < sarr; j++) {
//             for (int l = j + 1; l < sarr; l++) {
//                 if (arr[i] + arr[j] + arr[l] == s) {
//                     vector<int> temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[l]);
//                     ans.push_back(temp);
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     int n, s;
//     cin >> n >> s;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<vector<int>> narr = tripletsum(arr, s);
//     for (int i = 0; i < narr.size(); i++) {
//         cout << narr[i][0] << " " << narr[i][1] << " " << narr[i][2] << endl;
//     }

//     return 0;
// }

// sort 0 1;
// #include <iostream>
// #include <vector>
// #include <algorithm>
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
//     int j=0;
//     int arr1[j];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             arr1[j] = arr[i];
//             j++;
//         }
//     }
//     int t = j;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             arr1[t] = arr[i];
//             t++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr1[i]<<" ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sort01(int arr[],int n) {
//     int c=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0){
//             c++;
//         }
//     }
//     for (int i=0;i<c;i++){
//         arr[i]=0;
//     }

//     for (int i = c; i < n; i++)
//     {
//         arr[i]=1;
//     }
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
//     sort01(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void sort01(int arr[],int n){
//     sort(arr,arr+n);
//     // return arr;
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
//     sort01(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
