// rotate array
// test case:
// 0 1 0 3 12 0
// ans:
// 1 3 12 0 0 0
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotate(vector<int> &nums, int k)
// {
//     // not correct code for this ques
//     // int ns=nums.size();
//     // // int l=0;
//     // vector<int> tarr;
//     // for (int i=k;i<ns;i++){
//     //     tarr.push_back(nums[i]);
//     // }
//     // for (int j=0;j<k+1;j++){
//     //     tarr.push_back(nums[j]);
//     // }
//     // for (int i=0;i<ns;i++){
//     //     nums[i]=tarr[i];
//     // }

//     // this is correct code
//     int ns = nums.size();
//     vector<int> tarr(ns);
//     for (int i = 0; i < ns; i++)
//     {
//         tarr[(i + k) % ns] = nums[i];
//     }
//     nums = tarr;
// }
// int main(int argc, char const *argv[])
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int> arr1(n);
//     for (int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     rotate(arr1,k);
//     for (int i=0;i<arr1.size();i++){
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }

// rotate array
// test case:
// 5
// 3 4 5 1 2
// ans : ture;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool check(vector<int> &nums)
// {
//     int c = 0;
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i - 1] > nums[i])
//         {
//             c++;
//         }
//     }
//     if (nums[nums.size() - 1] > nums[0])
//     {
//         c++;
//     }
//     return c <= 1;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> arr1(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     bool b = check(arr1);
//     cout << (b ? "true" : "false") << endl; // Use cout to print the boolean value
//     return 0;
// }

// rotate array
// test case:
// 4 5 1
// 3 4 5
// ans : 7 9 6;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// // 	// Write your code here.
// // 	int r1=0;
// // 	vector<int> tans;
// // 		vector<int> ans;
// // 	for (int i=0;i<n;i++){
// // 		r1=(r1*10)+a[i];
// // 	}
// // 	int r2=0;
// // 	for (int i=0;i<m;i++){
// // 		r2=(r2*10)+b[i];
// // 	}
// // 	int sum=r1+r2;
// // 	int rem;
// // 	while(sum!=0){
// // 		rem=sum%10;
// // 		tans.push_back(rem);
// // 		sum/=10;
// // 	}

// // 	for (int i=tans.size()-1;i>=0;i--){
// // 		ans.push_back(tans[i]);
// // 	}
// // 	return ans;
// // }
// vector<int> rev(vector<int> &arr){
//     vector<int> ans;
//     for (int i=arr.size()-1;i>=0;i--){
//         ans.push_back(arr[i]);
//     }
//     return ans;
// }
// vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
// {
//     // Write your code here.
//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;
//     int carry = 0;
//     int sum = 0;
//     while (i >= 0 && j >= 0)
//     {
//         int var1 = a[i];
//         int var2 = b[j];

//         sum = a[i] + b[j] + carry;

//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     while (i >= 0)
//     {
//         sum = a[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }
//     while (j >= 0)
//     {
//         sum = b[j] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         j--;
//     }
//     while (carry != 0)
//     {
//         sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }

//     vector<int> fans=rev(ans);
//     return fans;
// }
// int main(int argc, char const *argv[])
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> arr1(n);
//     vector<int> arr2(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     vector<int> b = findArraySum(arr1, n, arr2, m);
//     for (int i = 0; i < b.size(); i++)
//     {
//         cout << b[i] << " ";
//     }
//     return 0;
// }
