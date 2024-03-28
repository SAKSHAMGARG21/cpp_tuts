// ___________________________________________leet code question on arrays__________________________________________

// c1
// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int swapalternate(int arr[],int n){
//     for(int i=0;i<n-1;i+=2){
//         // int temp = arr[i];
//         // arr[i]=arr[i+1];
//         // arr[i+1]=temp;
//         swap(arr[i],arr[i+1]);
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

// code stdio
// find unique
// c2
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
// // int uniqueelement(int arr[], int n)
// // {
// //     int i, ans = 0;
// //     for (i = 0; i < n; i++)
// //     {
// //         ans = ans ^ arr[i];
// //     }
// //     return ans;
// // }

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

// leetcode
// Unique Number of occurrences
// c3
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

// code stdio
// duplicate in array
// C4
// #include <iostream>
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
//     for (int i = 0; i < n; i++)
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

// _______________________________________________________________________________________________________________________
// leet code
// 442. Find the all duplicate in array
// c5
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
//             while (i < nums.size() && nums[i] == nums[i + 1])
//             {
//                 i++; // Skip other duplicates of the same element
//             }
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

// c
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
// #include <bits/stdc++.h>
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

// ------------------------------------------------------------------------------------------------------------------------------------
// code stdio
// Intersection of two array
// c6
// #include <iostream>
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
//         cout << narr[i] << endl;
//     }

//     return 0;
// }

// code stdio
// c6
// #include <iostream>
// #include "bits/stdc++.h"
// using namespace std;
// // leetcode solution this method is known as 2 pointer approach which very important
// // vector<int> intersection(vector<int> &arr, vector<int> &arr1)
// // {
// //     sort(nums1.begin(), nums1.end());
// //     sort(nums2.begin(), nums2.end());
// //     set<int> st;
// //     vector<int> ans;
// //     int i = 0, j = 0;
// //     while (i < nums1.size() && j < nums2.size())
// //     {
// //         if (nums1[i] == nums2[j])
// //         {
// //             st.insert(nums1[i]);
// //             i++;
// //             j++;
// //         }
// //         else if (nums1[i] < nums2[j])
// //         {
// //             i++;
// //         }
// //         else
// //         {
// //             j++;
// //         }
// //     }
// //     for (auto it : st)
// //     {
// //         ans.push_back(it);
// //     }
// //     return ans;
// // }
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

// code stdio 
// pairsum
// c7
// #include <iostream>
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

// c7
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

// code stdio
// triplete with given sum
// c8
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

// _____________________________________________________________________________________________________________________
// code stdio
// sort 0 1;
// c9
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

// c9
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

// c9
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

// -----------------------------------------------------------------------------------------------------------------------
