// -----------------------------------------------------------------------------------------------------------------
// c1
// 17.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// correct code
// vector<string> letterCombinations(string digits) {
//     if (digits.empty()) {
//         return {};
//     }

//     vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     vector<string> result;

//     function<void(int, string)> generateCombinations = [&](int index, string current) {
//         if (index == digits.size()) {
//             result.push_back(current);
//             return;
//         }

//         int digit = digits[index] - '0';
//         if (digit >= 2 && digit <= 9) {
//             const string& letters = mapping[digit];
//             for (char letter : letters) {
//                 generateCombinations(index + 1, current + letter);
//             }
//         }
//     };

//     generateCombinations(0, "");
//     return result;
// }

// correct code
// bing ai code
// vector<string> letterCombinations(string digits) {
//     if(digits.empty()) return {};
//     vector<string> res{""};
//     vector<string> mapping{"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     for(char digit : digits) {
//         vector<string> temp;
//         string chars = mapping[digit - '0'];
//         for(char c : chars) {
//             for(string str : res) {
//                 temp.push_back(str + c);
//             }
//         }
//         res.swap(temp);
//     }
//     return res;
// }

// vector<string> letterCombinations(string digits)
// {
//     int idx = 0;
//     string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     int dl = digits.size();
//     vector<string> ans;
//     string output;

//     if (dl == 0)
//     {
//         return ans; // Return an empty vector for empty input
//     }

//     if (dl == 1)
//     {
//         int val = digits[0] - '0';
//         if (val >= 2 && val <= 9)
//         {
//             string letters = mapping[val];
//             for (char letter : letters)
//             {
//                 output = letter;
//                 ans.push_back(output);
//             }
//         }
//         return ans;
//     }

//     vector<string> arr;
//     for (int i = 0; i < dl; i++)
//     {
//         int val = digits[i] - '0';
//         if (val >= 2 && val <= 9)
//         {
//             arr.push_back(mapping[val]);
//         }
//     }

//     int t=0;
//     for (int j = 0; j < arr[t].size(); j++)
//     {
//         for (int l = 0; l < arr[t + 1].size(); l++)
//         {
//             output.push_back(arr[t][j]);
//             output.push_back(arr[t + 1][l]);
//             ans.push_back(output);
//             output = ""; // Clear the output string for the next iteration
//         }
//     }

//     return ans;
// }

// vector<string> letterCombinations(string digits)
// {
//     vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     vector<string> result;

//     if (digits.empty())
//     {
//         return result;
//     }

//     int n = digits.size();
//     result.push_back(""); // Initialize with an empty string

//     for (int i = 0; i < n; i++)
//     {
//         int digit = digits[i] - '0';
//         if (digit < 2 || digit > 9)
//         {
//             return result; // Invalid input
//         }

//         const string &letters = mapping[digit];
//         int m = letters.size();
//         int currentSize = result.size();

//         // Expand the result with the new letters
//         for (int j = 0; j < currentSize; j++) {
//             string current = result[j];
//             // cout<<current;
//             for (int k = 1; k < m; k++) {
//                 result.push_back(current + letters[k]);
//                 // cout<<currentSize<<" ";
//             }
//             result[j] += letters[0]; // Append the first letter to the current strings
//         }
//     }

//     // return result;
// }

// code bubber using recursion
// void solve(string digits, string oput, int idx, vector<string> &ans, string map[])
// {

//     if (idx >= digits.length())
//     {
//         ans.push_back(oput);
//         return;
//     }

//     int d = digits[idx] - '0';
//     string str = map[d];

//     for (int i = 0; i < str.length(); i++)
//     {
//         oput.push_back(str[i]);
//         solve(digits, oput, idx + 1, ans, map);
//         oput.pop_back();
//     }
// }

// vector<string> letterCombinations(string digits)
// {
//     vector<string> ans;
//     string oput;
//     if (digits.length() == 0)
//     {
//         return ans;
//     }
//     int idx = 0;
//     string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

//     solve(digits, oput, idx, ans, map);
//     return ans;
// }
// int main()
// {
//     string s;
//     cin >> s;
//     vector<string> ans = letterCombinations(s);

//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }


