// #include <iostream>
// #include <vector>

// using namespace std;

// int minInsertions(string s) {
//     int n = s.size();

//     // Create a table to store minimum insertions for substrings
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     // Calculate minimum insertions for all substrings
//     for (int gap = 1; gap < n; gap++) {
//         for (int i = 0, j = gap; j < n; i++, j++) {
//             dp[i][j] = (s[i] == s[j]) ? dp[i + 1][j - 1] : min(dp[i][j - 1], dp[i + 1][j]) + 1;
//         }
//     }

//     // Minimum insertions for the entire string is stored at dp[0][n-1]
//     return dp[0][n - 1];
// }

// int main() {
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//     string s;
//     // cout << "Enter a string: ";
//     cin >> s;

//     int result = minInsertions(s);

//     cout << result << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int countBeautifulSubstrings(string &s) {
//     int count = 0;
//     int n = s.size();

//     // Create prefix sums for counts of 'a', 'b', and 'c'
//     vector<vector<int>> prefixSum(3, vector<int>(n + 1, 0));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 3; j++) {
//             prefixSum[j][i + 1] = prefixSum[j][i] + (s[i] == 'a' + j);
//         }
//     }

//     // Check beautiful substrings
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int countA = prefixSum[0][j + 1] - prefixSum[0][i];
//             int countB = prefixSum[1][j + 1] - prefixSum[1][i];
//             int countC = prefixSum[2][j + 1] - prefixSum[2][i];

//             if (countA == countB && countB == countC) {
//                 count++;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//     string s;
//     // cout << "Enter a string: ";
//     cin >> s;

//     int result = countBeautifulSubstrings(s);

//     cout << result << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool isplandrome(string s, int st, int end)
// {
//     if (st >= end)
//     {
//         return true;
//     }
//     if (s[st] != s[end])
//     {
//         return false;
//     }
//     st++;
//     end--;
//     isplandrome(s, st, end);
// }
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         string s;
//         cin >> s;

//         int st = 0;
//         int end = s.size() - 1;
//         // cout<<end<<endl;
//         if (isplandrome(s, st, end))
//         {
//             cout << "0" << endl;
//         }
//         else
//         {
//             int c = 0;

//             int cnt[26] = {0};
//             for (int j = 0; j < end; j++)
//             {
//                 int idx = s[j] - 'a';
//                 cnt[idx]++;
//             }

//             for (int j = 0; j < 26; j++)
//             {
//                 if (cnt[j] == 1)
//                 {
//                     c++;
//                 }
//             }

//             cout << c << endl;
//         }
//     }

//     return 0;
// }