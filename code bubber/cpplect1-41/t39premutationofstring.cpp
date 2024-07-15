// // -----------------------------------------------------------------------------------------------------------------
// // c1
// // permutation of string
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string generatePermutation(string &str,int k)
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
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     return ans[k];
// }
// int main()
// {
//     string s;
//     cin >> s;

//     string ans = generatePermutation(s,2);
//     // for (auto i : ans)
//     // {
//     //     cout << i << " ";
//     // }
//     cout<<ans<<endl;

//     return 0;
// }

// // c1
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

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<string> premut(string s)
// {

//     int n = s.size();
//     vector<string> narr;
//     // vector<int> temp;
//     string t=s;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             s=t;
//             swap(s[n - i - 1], s[n - j - 1]);
//             narr.push_back(s);
//         }
//     }

//     sort(narr.begin(),narr.end());
//     return narr;
// }
// int main()
// {
//     string s;
//     cin >> s;

//     vector<string> ans = premut(s);
//     for (auto i : ans)
//     {
//         // for(auto j:i){
//         //     cout<<j<<" ";
//         // }
//         // cout<<endl;

//         cout << i <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// #include<bits/stdc++.h>
// using namespace std;
// vector<string> printPermutations(string s) {
//     vector<int> c(s.length(), 0);
//     vector<string> ans;
//     ans.push_back(s);
//     int i = 0;
//     while (i < s.length()) {
//         if (c[i] < i) {
//             if (i % 2 == 0) {
//                 swap(s[0], s[i]);
//             } else {
//                 swap(s[c[i]], s[i]);
//             }
//             ans.push_back(s);
//             c[i]++;
//             i = 0;
//         } else {
//             c[i] = 0;
//             i++;
//         }
//     }

//     sort(ans.begin(),ans.end());

//     return ans;
// }

// int main() {
//     string s = "1234";
//     vector<string> ans=printPermutations(s);
//     for(auto i:ans){
//         cout<<i<<endl;;
//     }
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// string kthPermutation(int n, int k) {
//   // Write your code here.
//   string s = "";
//   for (int i = 0; i < n; i++) {
//     s += (i + 1 + '0');
//   }
//   sort(s.begin(), s.end());
//   vector<string> ans;
//   do {
//     ans.push_back(s);
//   } while (next_permutation(s.begin(), s.end()));
//   return ans[k-1];
// }

// int main()
// {
//     // string s = "1234"; // Replace with your string
//     // sort(s.begin(), s.end());
//     // do
//     // {
//     //     cout << s << endl;
//     // } while (next_permutation(s.begin(), s.end()));
//     int n,k;
//     cin>>n,k;
//     string ans=kthPermutation(n,k);
//     cout<<ans<<endl;
//     return 0;
// }
