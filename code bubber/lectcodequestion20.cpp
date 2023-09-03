// reverse of an array
// test case:
// 6 2
// 1 2 3 4 5 6
// ans:
// 1 2 3 6 5 4

// #include<iostream>
// #include<vector>
// using namespace std;
// void reversearray(vector<int> &arr, int m){

//     // first method
//     // int s=m+1,e=arr.size()-1;
//     // while (s<=e)
//     // {
//     //     /* code */
//     //     swap(arr[s],arr[e]);
//     //     s++;
//     //     e--;
//     // }

//     // second method
//     int l=arr.size();
//     int t;
//     vector<int> narr;
//     for (t=0;t<=m;t++){
//         arr[t]=arr[t];
//     }
//     for (int i=l-1;i>m;i--){
//         narr.push_back(arr[i]);
//     }
//     for (int ie=0;ie<narr.size();ie++){
//         arr[t]=narr[ie];
//         t++;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int> arr(n);
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reversearray(arr,m);
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// reverse of an array
// test case:
// 6 2
// 1 2 3 4 5 6
// ans:
// 1 2 3 6 5 4
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> mergetwosortedarrays(vector<int> &arr1, vector<int> &arr2){

//     // first method
//     // int s=m+1,e=arr.size()-1;
//     // while (s<=e)
//     // {
//     //     /* code */
//     //     swap(arr[s],arr[e]);
//     //     s++;
//     //     e--;
//     // }

//     // second method
//     int l1=arr1.size();
//     int l2=arr2.size();
//     int t;
//     vector<int> arr3;
//     for (t=0;t<l1;t++){
//         arr3.push_back(arr1[t]);
//     }
//     for (int ie=0;ie<l2;ie++){
//         arr3.push_back(arr2[ie]);
//     }
//     // sort(arr3.begin(),arr3.end());
//     int l3=arr3.size();
//     for (int i=1;i<l3;i++){
//         int temp=arr3[i];
//         int j;
//         for (j=i-1;j>=0;j--){
//             if (arr3[j]>temp){
//                 arr3[j+1]=arr3[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr3[j+1]=temp;
//     }
//     return arr3;
// }
// int main(int argc, char const *argv[])
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int> arr1(n);
//     vector<int> arr2(m);
//     for (int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     for (int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     vector<int> arr3=mergetwosortedarrays(arr1,arr2);
//     for (int i=0;i<arr3.size();i++){
//         cout<<arr3[i]<<" ";
//     }

//     return 0;
// }


// moveZeroes
// test case:
// 0 1 0 3 12 0
// ans:
// 1 3 12 0 0 0
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void moveZeroes(vector<int> &nums)
// {
//     vector<int> tarr;
//     int ns = nums.size();
//     int t = 0;
//     for (int i = 0; i < ns; i++)
//     {
//         if (nums[i] != 0)
//         {
//             nums[t] = nums[i];
//             t++;
//         }
//     }
//     for (int i = t; i < ns; i++)
//     {
//         nums[i] = 0;
//     }

//     // int ns=nums.size();
//     // int j=0;
//     // for (int i=0;i<ns;i++){
//     //     if (nums[i]!=0){
//     //         swap(nums[i],nums[j]);
//     //         j++;
//     //         // int t=nums[i];
//     //         // nums[i]=nums[j];
//     //         // nums[j]=t;
//     //         // j++;
//     //     }
//     // }
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     vector<int> arr1(n);
//     for (int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     moveZeroes(arr1);
//     for (int i=0;i<arr1.size();i++){
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }

