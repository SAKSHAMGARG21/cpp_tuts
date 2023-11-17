// -----------------------------------------------------------------------------------------------------------------
// c1
// permutation of string
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<string> generatePermutation(string &str)
// {
//     int ss = str.length();
//     vector<string> ans;

//     string oput = "";

//     for (int i = 0; i < ss; i++)
//     {
//         for (int j = i; j < ss; j++)
//         {
//             oput.push_back(str[j]);
//         }
//         for (int j = 0; j < i; j++)
//         {
//             oput.push_back(str[j]);
//         }
//         ans.push_back(oput);
//         oput="";
//     }

//     for (int i = 0; i < ss; i++)
//     {
//         for (int j = i; j >= 0; j--)
//         {
//             oput.push_back(str[j]);
//         }
//         for (int j = ss-1; j>i; j--)
//         {
//             oput.push_back(str[j]);
//         }
//         ans.push_back(oput);
//         oput="";
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     cin >> s;

//     vector<string> ans = generatePermutation(s);
//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void solve(vector<int> nums, int idx, vector<vector<int>> &ans)
// {
//     if (idx >= nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }

//     for (int i = idx; i < nums.size(); i++)
//     {
//         swap(nums[i], nums[idx]);
//         solve(nums, idx + 1, ans);
//         swap(nums[i], nums[idx]);
//     }
// }

// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     int idx = 0;
//     solve(nums, idx, ans);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     vector<vector<int>> ans = permute(arr);
//     for (const vector<int>& a:ans){
//         for (auto i : a)
//         {
//             cout << i << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }