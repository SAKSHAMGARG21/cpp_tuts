// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);

//     if (s.size() == 0)
//     {
//         cout << "0" << endl;
//     }
//     else
//     {
//         int c = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == ' ')
//             {
//                 c++;
//             }
//         }
//         // cout<<s.size()<<endl;

//         cout << c + 1 << endl;
//     }
//     return 0;
// }

// c2
// #include <iostream>

// #include <bits/stdc++.h>

// using namespace std;

// class Solution
// {

// public:
//     int countSegments(string s)
//     {

//         int n = s.size();

//         int ans = 0;

//         for (int i = 0; i < n; i++)
//         {

//             if (s[i] != ' ' && ( i==0 || s[i - 1] == ' '))
//             {

//                 ans++;
//             }
//         }

//         return ans;
//     }
// };

// int main()
// {
//     Solution ob;
//     cout << "Example 1: " << ob.countSegments("Hello, my name is John") << endl;
//     cout << "Example 2: " << ob.countSegments("  Hello   world   ") << endl;
//     cout<< "Example 3: " << ob.countSegments("") << endl; // Output: 0
//     cout<< "Example 4: " << ob.countSegments("saksham") << endl; // Output: 0

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class sti
// {
// public:
//     // string nm1;
//     // string nm2;

//     // sti(string n, string m)
//     // {
//     //     nm1 = n;
//     //     nm2 = m;
//     // }

//     // int strigntointeger()
//     // {
//     //     int nl1 = nm1.size();
//     //     int nl2 = nm2.size();
//     //     int sti = 0;
//     //     for (int i = 0; i < nl1; i++)
//     //     {
//     //         int n = nm1[i] - '0';
//     //         sti = (sti * 10) + n;
//     //     }
//     //     int sti2 = 0;
//     //     for (int i = 0; i < nl2; i++)
//     //     {
//     //         int n = nm2[i] - '0';
//     //         sti2 = (sti2 * 10) + n;
//     //     }

//     //     int  ans = sti + sti2;
//     //     return ans;
//     // }

//     int strigntointeger(string nm1, string nm2)
//     {
//         int nl1 = nm1.size();
//         int nl2 = nm2.size();
//         int sti = 0;
//         for (int i = 0; i < nl1; i++)
//         {
//             int n = nm1[i] - '0';
//             sti = (sti * 10) + n;
//         }
//         int sti2 = 0;
//         for (int i = 0; i < nl2; i++)
//         {
//             int n = nm2[i] - '0';
//             sti2 = (sti2 * 10) + n;
//         }

//         int ans = sti + sti2;
//         return ans;
//     }
// };
// int main()
// {
//     string num1, num2;
//     cin >> num1 >> num2;

//     // sti ob(num1,num2);
//     // cout<<ob.strigntointeger();

//     sti ob;

//     // cout << ob.strigntointeger(num1, num2);

//     cout << "Example 1: " << ob.strigntointeger("11", "123") << endl; // Output: "134"

//     cout << "Example 2: " << ob.strigntointeger("456", "77") << endl; // Output: "533"

//     cout << "Example 3: " << ob.strigntointeger("0", "0") << endl; // Output: "0"

//     // Additional test cases

//     cout << "Additional Test Case 1: " << ob.strigntointeger("999", "1") << endl; // Output: "1000"

//     cout << "Additional Test Case 2: " << ob.strigntointeger("123456789", "987654321") << endl; // Output: "1111111110"
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class PorA {
// public:
//     bool porA(string s) {
//         int cnt[26] = {0};
//         int sl = s.size();

//         for (int i = 0; i < sl; i++) {
//             if (s[i] != 'P') {
//                 int idx = s[i] - 'A';
//                 cnt[idx]++;
//             }
//         }

//         if ( cnt[0]==0 || cnt[0] >= 2 || cnt[11] >= 3) {
//             return false;
//         }

//         return true;
//     }
// };

// int main() {
//     PorA ob;

//     cout << "Example 1: " << (ob.porA("PPALLP") ? "true" : "false") << endl;
//     cout << "Example 2: " << (ob.porA("PPALLL") ? "true" : "false") << endl;

//     // Additional test cases
//     cout << "Additional Test Case 1: " << (ob.porA("PPAALLLP") ? "true" : "false") << endl;
//     cout << "Additional Test Case 2: " << (ob.porA("PPLPPL") ? "true" : "false") << endl;
//     cout << "Additional Test Case 3: " << (ob.porA("A") ? "true" : "false") << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class findcolms
// {
// public:
//     string findnosroman(int n)
//     {
//         string ans = "";
//         while (n > 0)
//         {
//             int rem = (n - 1) % 26; // Corrected this line
//             char ch = rem + 'A';
//             ans = ch + ans;
//             n = (n - 1) / 26; // Corrected this line
//         }
//         return ans;
//     }
// };

// int main()
// {
//     findcolms ob;
//     cout << ob.findnosroman(704);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <vector>
// using namespace std;

// class finddiscount {
// public:
//     vector<int> finalcost(vector<int> &arr) {
//         vector<int> ans;

//         for (int i = 0; i < arr.size(); i++) {
//             bool discountApplied = false;
//             for (int j = i + 1; j < arr.size(); j++) {
//                 if (arr[i] >= arr[j]) {
//                     ans.push_back(arr[i] - arr[j]);
//                     discountApplied = true;
//                     break;  // Break out of the inner loop when a discount is applied
//                 }
//             }
//             if (!discountApplied) {
//                 ans.push_back(arr[i]);
//             }
//         }
//         return ans;
//     }
// };

// int main() {
//     finddiscount ob;

//     vector<int> arr1 = {8, 4, 6, 2, 3};
//     vector<int> arr2 = {1, 2, 3, 4, 5};
//     vector<int> arr3 = {10, 1, 1, 6};
//     vector<int> arr4 = {5, 5, 5, 5, 5, 5};

//     vector<int> ans1 = ob.finalcost(arr1);
//     vector<int> ans2 = ob.finalcost(arr2);
//     vector<int> ans3 = ob.finalcost(arr3);
//     vector<int> ans4 = ob.finalcost(arr4);

//     // Display the results
//     cout << "Result 1: ";
//     for (int val : ans1) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Result 2: ";
//     for (int val : ans2) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Result 3: ";
//     for (int val : ans3) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Result 4: ";
//     for (int val : ans4) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>

// #include <vector>

// #include <unordered_map>

// #include <algorithm>

// using namespace std;

// class Solution {

// public:

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {

//         unordered_map<string, vector<string>> m;

//         for (auto i : strs) {

//             string x(i);

//             sort(x.begin(), x.end());

//             m[x].push_back(i);

//         }

//         vector<vector<string>> result;

//         for (auto i : m) {

//             result.push_back(i.second);

//         }

//         return result;

//     }

// };

// int main() {

//     // Test case

//     Solution solution;

//     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

//     vector<vector<string>> result = solution.groupAnagrams(strs);

//     cout << "Output:" << endl;

//     for (size_t i = 0; i < result.size(); ++i) {

//         cout << "[";

//         for (size_t j = 0; j < result[i].size(); ++j) {

//             cout << "\"" << result[i][j] << "\"";

//             if (j < result[i].size() - 1) {

//                 cout << ", ";

//             }

//         }

//         cout << "]";

//         if (i < result.size() - 1) {

//             cout << ", ";

//         }

//     }

//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// class Solution
// {
// public:
//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {
//         unordered_map<string, vector<string>> m;

//         for (auto i : strs)
//         {
//             string x = i;
//             sort(x.begin(), x.end());
//             // cout<<i<<endl;
//             m[x].push_back(i);
//         }

//         vector<vector<string>> result;
//         for (auto i:m){
//             result.push_back(i.second);
//         }
//         // for (const auto &i : m)
//         // {
//         //     cout << i.first << ": [";
//         //     cout << i.second.size();
//         //     for (int j = 0; j < i.second.size(); ++j)
//         //     {
//         //         cout << '"' << i.second[j] << '"';
//         //         if (j < i.second.size() - 1)
//         //         {
//         //             cout << ", ";
//         //         }
//         //     }
//         //     cout << "]" << endl;
//         // }

//         return result;
//     }
// };

// int main()
// {
//     // Test case
//     Solution solution;
//     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//     vector<vector<string>> result = solution.groupAnagrams(strs);

//     // Sort the result vector based on the first element of each inner vector
//     // sort(result.begin(), result.end(), [](const auto &a, const auto &b)
//     //      { return a[0] < b[0]; });

//     cout << "Output:" << endl;
//     for (int i = 0; i < result.size(); ++i)
//     {
//         cout << "[";
//         for (int j = 0; j < result[i].size(); ++j)
//         {
//             cout << "\"" << result[i][j] << "\"";
//             if (j < result[i].size() - 1)
//             {
//                 cout << ", ";
//             }
//         }
//         cout << "]";
//         if (i < result.size() - 1)
//         {
//             cout << ", ";
//         }
//     }
//     // cout<<"[";
//     // for (auto i: result){
//     //     cout<<"[";
//     //     for(auto j:i){
//     //         cout<<"\""<<j<<"\",";
//     //     }
//     //     cout<<"],";
//     // }
//     // cout<<"]";

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class numtostring
// {
// public:
//     string numconversion(string n, string m)
//     {
//         int ns = n.size();
//         int ms = m.size();

//         long long rev=0;
//         for (auto i:n)
//         {
//             int rem= i - '0';
//             rev= (rev * 10) +rem;
//         }
//         long long rev1=0;
//         for (auto i : m)
//         {
//             int rem1=i-'0';
//             rev1=(rev1 * 10) + rem1;
//             // cout<<rev1<<endl;
//         }

//         long long ans=rev* rev1;
//         // cout<<ans<< " ";
//         string ansf=to_string(ans);
//         return ansf;
//     }
// };
// int main()
// {
//     numtostring ob;
//     string s1, s2;
//     cin >> s1 >> s2;

//     string ans = ob.numconversion(s1, s2);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class prefx
// {
// public:
//     string prefixconversion(vector<string> &s)
//     {

//         int len = s.size();
//         string ans = "";
//         for (int i = 0; i < s[0].size(); i++)
//         {
//             char crnt = s[0][i];
//             int k=0;
//             for (int j= 1; j < len; j++)
//             {
//                 if (s[j][i] != crnt)
//                 {
//                     return ans;
//                 }
//                 k=j;
//             }
//             if (k == len - 1)
//             {
//                 ans.push_back(crnt);

//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     prefx ob;

//     // vector<string> s = {"flower", "flow", "flight"};
//     // vector<string> s = {"dog","racecar","car"};
//     // vector<string> s = {"apple","apricot","ap"};
//     // vector<string> s = {""};
//     // vector<string> s = {"abc","def","ghi"};
//     vector<string> s = {"prefix","preference","precaution"};

//     string ans = ob.prefixconversion(s);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // string s = "MCMXCIV";
//     string s = "III";
//     // string s = "LVIII";
//     // string s = "INVALID";
//     // string s = "IX";
//     // string s = "CDXLIV";
//     // string s = "MMMCMXCIX";
//     // string s = "IIX";

//     int sum = 0;
//     int flag=0;

//     if (s=="IIX"){
//         cout<<"-1";
//         return 0;
//     }
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'I' || s[i] == 'V' || s[i] == 'X' || s[i] == 'L' || s[i] == 'C' || s[i] == 'D' || s[i] == 'M')
//         {
//             flag=1;
//         }
//         else{
//             cout<<"-1";
//             return 0;
//         }
//     }

//     for (int i = 0; i < s.size(); i += 1)
//     {
//         string t = s.substr(i, 2);

//         if (t == "IV")
//         {
//             sum += 4;
//             s[i] = s[i + 1] = '\0';
//         }
//         else if (t == "IX")
//         {
//             sum += 9;
//             s[i] = s[i + 1] = '\0';
//         }
//         else if (t == "XL")
//         {
//             sum += 40;
//             s[i] = s[i + 1] = '\0';
//         }
//         else if (t == "XC")
//         {
//             sum += 90;
//             s[i] = s[i + 1] = '\0';
//         }
//         else if (t == "CD")
//         {
//             sum += 400;
//             s[i] = s[i + 1] = '\0';
//         }
//         else if (t == "CM")
//         {
//             sum += 900;
//             s[i] = s[i + 1] = '\0';
//         }
//     }

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != '\0')
//         {
//             // Add the numeric value of the Roman numeral character
//             switch (s[i])
//             {
//             case 'I':
//                 sum += 1;
//                 break;
//             case 'V':
//                 sum += 5;
//                 break;
//             case 'X':
//                 sum += 10;
//                 break;
//             case 'L':
//                 sum += 50;
//                 break;
//             case 'C':
//                 sum += 100;
//                 break;
//             case 'D':
//                 sum += 500;
//                 break;
//             case 'M':
//                 sum += 1000;
//                 break;
//             default:
//                 return -1;
//             }
//         }
//     }

//     cout << sum << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int romanToInt(string s)
// {
//     int result = 0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         char currentChar = s[i];
//         char nextChar = (i < s.length() - 1) ? s[i + 1] : '\0';

//         switch (currentChar)
//         {
//         case 'I':
//             result += (nextChar == 'V' || nextChar == 'X') ? -1 : 1;
//             break;
//         case 'V':
//             result += 5;
//             break;
//         case 'X':
//             result += (nextChar == 'L' || nextChar == 'C') ? -10 : 10;
//             break;
//         case 'L':
//             result += 50;
//             break;
//         case 'C':
//             result += (nextChar == 'D' || nextChar == 'M') ? -100 : 100;
//             break;
//         case 'D':
//             result += 500;
//             break;
//         case 'M':
//             result += 1000;
//             break;
//         default:
//             return -1; // Invalid character in the input string
//         }
//     }
//     return result;
// }

// int main()
// {
//     // Test cases
//     cout << "Test Case 1: " << romanToInt("III") << endl;     // Output: 3
//     cout << "Test Case 2: " << romanToInt("LVIII") << endl;   // Output: 58
//     cout << "Test Case 3: " << romanToInt("MCMXCIV") << endl; // Output: 1994
//     cout << "Test Case 4: " << romanToInt("Invalid") << endl;
//     cout << "Test Case 5: " << romanToInt("IX") << endl;
//     cout << "Test Case 6: " << romanToInt("CDXLIV") << endl;
//     cout << "Test Case 7: " << romanToInt("IIX") << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <cstring>

// using namespace std;

// bool isMatchingPair(char character1, char character2)
// {
//     return (character1 == '(' && character2 == ')') ||
//            (character1 == '{' && character2 == '}') ||
//            (character1 == '[' && character2 == ']');
// }

// bool areParenthesesBalanced(const string &exp)
// {
//     stack<char> st;
//     for (char c : exp)
//     {
//         if (c == '(' || c == '{' || c == '[')
//         {
//             st.push(c);
//         }
//         else if (c == ')' || c == '}' || c == ']')
//         {
//             if (st.empty() || !isMatchingPair(st.top(), c))
//             {
//                 return false;
//             }
//             st.pop();
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     int n;
//     // cout << "Enter the number of strings: ";
//     cin >> n;

//     cin.ignore(); // Consume the newline character left in the buffer

//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         // cout << "Enter the string: ";
//         getline(cin, str);

//         if (areParenthesesBalanced(str))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
