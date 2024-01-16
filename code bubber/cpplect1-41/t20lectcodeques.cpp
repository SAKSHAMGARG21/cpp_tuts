// reverse the array
// code stdio
// c1
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
//     for (int i=l-1;i>=0;i--){
//         narr.push_back(arr[i]);
//     }
//     for (int ie=0;ie<narr.size();ie++){
//         arr[ie]=narr[ie];
//         // t++;
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

// merge two sorted arrays
// c2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> mergetwosortedarrays(vector<int> &arr1, vector<int> &arr2){

//     // first method
//     vector<int> arr3;
//     int l1=arr1.size();
//     int l2=arr2.size();
//     int i=0,j=0;
//     while(i<l1 || j<l2){
//         if (arr1[i]<arr2[j]){
//             arr3.push_back(arr1[i++]);
//         }
//         else{
//             arr3.push_back(arr2[j++]);
//         }
//     }

//     // while(i<l1){
//     //     arr3.push_back(arr1[i++]);
//     // }
//     // while(j<l2){
//     //     arr3.push_back(arr2[j++]);
//     // }
//     return arr3;

//     // second method
//     // int l1=arr1.size();
//     // int l2=arr2.size();
//     // int t;
//     // vector<int> arr3;
//     // for (t=0;t<l1;t++){
//     //     arr3.push_back(arr1[t]);
//     // }
//     // for (int ie=0;ie<l2;ie++){
//     //     arr3.push_back(arr2[ie]);
//     // }
//     // // sort(arr3.begin(),arr3.end());
//     // int l3=arr3.size();
//     // for (int i=1;i<l3;i++){
//     //     int temp=arr3[i];
//     //     int j;
//     //     for (j=i-1;j>=0;j--){
//     //         if (arr3[j]>temp){
//     //             arr3[j+1]=arr3[j];
//     //         }
//     //         else{
//     //             break;
//     //         }
//     //     }
//     //     arr3[j+1]=temp;
//     // }
//     // return arr3;
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

// c3
// leetcode
// 283. Move Zeroes
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    // vector<int> tarr;
    // int ns = nums.size();
    // int t = 0;
    // for (int i = 0; i < ns; i++)
    // {
    //     if (nums[i] != 0)
    //     {
    //         nums[t] = nums[i];
    //         t++;
    //     }
    // }
    // for (int i = t; i < ns; i++)
    // {
    //     nums[i] = 0;
    // }

    int ns=nums.size();
    int j=0;
    for (int i=0;i<ns;i++){
        if (nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
            // int t=nums[i];
            // nums[i]=nums[j];
            // nums[j]=t;
            // j++;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr1(n);
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    moveZeroes(arr1);
    for (int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}




