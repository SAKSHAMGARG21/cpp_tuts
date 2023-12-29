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
//     string findnoscol(int n)
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
//     cout << ob.findnoscol(704);
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
//     // string s = "III";
//     // string s = "LVIII";
//     // string s = "INVALID";
//     // string s = "IX";
//     // string s = "CDXLIV";
//     // string s = "MMMCMXCIX";
//     string s = "IIX";

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>

// class Date
// {

//       private : int day;

//       int month;

//       int year;

//       public : 

//      // Constructor 

//     Date(int d, int m, int y) : day(d), 

//   month(m), 

//   year(y)
//     {
//     }

//        // Member function to set the date 

//   void setDate(int d, int m, int y)
//     {

//             day = d;

//             month = m;

//             year = y;

//           
//     }

//        // Member function to get the day 

//   int getDay() const
//     {

//             return day;

//           
//     }

//        // Member function to get the month 

//   int getMonth() const
//     {

//             return month;

//           
//     }

//        // Member function to get the year 

//   int getYear() const
//     {

//             return year;

//           
//     }

//        // Member function to validate if the date is valid 

//   bool isValidDate() const
//     {

//              // Check if the month is valid 

//     if (month < 1 || month > 12) 

//       return false;

//              // Check if the day is valid 

//     if (day < 1 || day > 31) 

//       return false;

//              // Check for specific month-day combinations that are invalid 

//     if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 

//       return false;

//             if (month == 2)
//         {

//                    // Check for leap year 

//       if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//             {

//                         if (day > 29) 

//           return false;

//                       
//             }
//             else
//             {

//                         if (day > 28) 

//           return false;

//                       
//             }

//                 
//         }

//              // Date is valid 

//     return true;

//           
//     }
// };

// int main()
// {

//        // Create a date object 

//   Date date(0, 0, 0);

//        // Set the date 

//   int day, month, year;

//       std::cin >> day;

//       std::cin >> month;

//       std::cin >> year;

//       date.setDate(day, month, year);

//        // Get and display the date 

//   std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;

//        // Validate the date 

//   if (date.isValidDate()) 

//     std::cout << "The date is valid." << std::endl;

//       else

//             std::cout
//         << "The date is invalid." << std::endl;

//       return 0;
// }



// -----------------------------------------------------------------------------------------------------------------
// c countsetBits
// #include <bits/stdc++.h>

// using namespace std;

// int CountSetBits(int n)

// {

//     if (n == 0)

//         return 0;

//     if((n & 1) == 1)

//         return 1 + CountSetBits(n >> 1);

//     else

//         return CountSetBits(n >> 1);

// }

// int main()

// {

//     int n;

//     cin>>n;

//     cout << CountSetBits(n);

//     return 0;

// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// operator overload
// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Time
// {
// public:
//     int hr;
//     int min;
//     int sec;

//     Time(int h, int mn, int sc)
//     {
//         hr = h;
//         min = mn;
//         sec = sc;
//     }

//     void display()
//     {
//         cout << hr << ":" << min << ":" << sec<<endl;
//     }

//     Time operator+(Time inp)
//     {
//         int rhr, rmin, rsec;

//         rsec = sec + inp.sec;
//         rmin = min + inp.min + (rsec / 60);
//         rhr = hr + inp.hr + (rmin / 60);

//         rsec %= 60;
//         rmin %= 60;
//         rhr %= 24;

//         return Time(rhr, rmin, rsec);
//     }
//     Time operator-(Time inp)
//     {
//         int rhr, rmin, rsec;

//         rsec = sec - inp.sec;
//         rmin = min - inp.min -(rsec / 60);
//         rhr = hr - inp.hr - (rmin / 60);

//         if (rsec<0){
//             rsec=-(rsec);
//         }
//         if (rmin <0 ){
//             rmin=-rmin;
//         }
//         if ( rhr<0){
//             rhr=-(rhr);
//         }
//         else {
//             rsec=rsec;
//             rmin=rmin;
//             rhr=rhr;
//         }

//         rsec %= 60;
//         rmin %= 60;
//         rhr %= 24;

//         return Time(rhr, rmin, rsec);
//     }
// };
// int main()
// {
//     int hr1, min1, sec1;
//     int hr2, min2, sec2;
//     cin >> hr1 >> min1 >> sec1;
//     cin >> hr2 >> min2 >> sec2;

//     Time t1(hr1, min1, sec1);
//     Time t2(hr2, min2, sec2);

//     Time t3 = t1 + t2;
//     t3.display();
//     Time t4 = t1 - t2;
//     t4.display();

//     return 0;
// }

// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Time
// {
// // private:
// public:
//     int hr;
//     int min;
//     int sec;

//     Time(int h, int mn, int sc)
//     {
//         this->hr = h;
//         this->min = mn;
//         this->sec = sc;
//     }

//     void display()
//     {
//         cout << hr << ":" << min << ":" << sec<<endl;
//     }

//     Time operator+(Time temp)
//     {
//         Time temp1(0,0,0);
//         temp1.sec = sec + temp.sec;
//         temp1.min = min + temp.min + (temp1.sec / 60);
//         temp1.hr = hr + temp.hr + (temp1.min / 60);

//         temp1.sec %= 60;
//         temp1.min %= 60;
//         temp1.hr %= 24;

//         return temp1;
//     }
//     Time operator-(Time &temp)
//     {
//         Time temp1(0,0,0);
//         temp1.sec = sec - temp.sec;
//         temp1.min = min - temp.min - (temp1.sec / 60);
//         temp1.hr = hr -temp.hr - (temp1.min / 60);

//         if (temp1.sec<0){
//             temp1.sec=-(temp1.sec);
//         }
//         if (temp1.min <0 ){
//             temp1.min=-temp1.min;
//         }
//         if ( temp1.hr<0){
//             temp1.hr=-(temp1.hr);
//         }

//         temp1.sec %= 60;
//         temp1.min %= 60;
//         temp1.hr %= 24;

//         return temp1;
//     }
// };
// int main()
// {
//     int hr1, min1, sec1;
//     int hr2, min2, sec2;
//     cin >> hr1 >> min1 >> sec1;
//     cin >> hr2 >> min2 >> sec2;

//     Time t1(hr1, min1, sec1);
//     Time t2(hr2, min2, sec2);

//     Time t3 = t1 + t2;
//     t3.display();
//     Time t4 = t1 - t2;
//     t4.display();

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// addition of matrix with operator overloading
// 1 2  5 1
// 3 4  2 6
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class matrix
// {
// private:
//     int **mat;
//     int ros;
//     int col;

// public:
//     matrix(int m, int n)
//     {
//         ros = m;
//         col = n;
//         mat = new int *[ros];
//         for (int i = 0; i < ros; i++)
//         {
//             mat[i] = new int[col];
//         }
//     }

//     void inputmatrix()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     matrix operator+(matrix other)
//     {

//         if (ros != other.ros || col != other.col)
//         {
//             cout << "addition of two matrix not possible" << endl;
//             return matrix(0, 0);
//         }

//         matrix result(ros,col);
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 result.mat[i][j] = mat[i][j] + other.mat[i][j];
//             }
//         }
//         return result;
//     }

//     void display()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << mat[i][j]<<" ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int rs, cs;
//     cin >> rs >> cs;
//     matrix mtx1(rs, cs);
//     mtx1.inputmatrix();
//     matrix mtx2(rs, cs);
//     mtx2.inputmatrix();

//     matrix result = mtx1 + mtx2;
//     result.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class addsmtrix
// {
// private:
//     int **arr;
//     int ros;
//     int col;

// public:
//     addsmtrix(int rs, int cs)
//     {
//         ros = rs;
//         col = cs;
//         arr = new int *[ros];
//         for (int i = 0; i < ros; i++)
//         {
//             arr[i] = new int[col];
//         }
//     }

//     void input()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//     }

//     void print()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     addsmtrix operator*(addsmtrix &other)
//     {
//         if (col != other.ros)
//         {
//             cout << "multiplication not possible" << endl;
//             return addsmtrix(0, 0);
//         }
//         addsmtrix reslt(ros, other.col);

//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < other.col; j++)
//             {
//                 reslt.arr[i][j]=0;
//                 for (int l = 0; l < col; l++)
//                 {
//                     reslt.arr[i][j] += arr[i][l] * other.arr[l][j];
//                 }
//             }
//         }
//         return reslt;
//     }
// };

// int main()
// {
//     int rs, cs;
//     cin >> rs >> cs;
//     addsmtrix obj1(rs, cs);
//     obj1.input();
//     addsmtrix obj2(rs, cs);
//     obj2.input();
//     addsmtrix reslt1 = obj1 * obj2;
//     reslt1.print();
//     return 0;
// }

// // -----------------------------------------------------------------------------------------------------------------
// // c3,4,5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class dis
// {
// private:
//     double feet, inch;

// public:
//     void readdiatande()
//     {
//         cin >> feet >> inch;
//     }

//     void display()
//     {
//         cout << feet << " " << inch <<endl;
//     }

//     dis operator+(dis temp)
//     {
//         dis temp1;
//         temp1.feet = feet + temp.feet;
//         temp1.inch = inch + temp.inch;
//         if (temp1.inch >= 12)
//         {
//             temp1.feet++;
//             temp1.inch = temp1.inch - 12;
//         }
//         return temp1;
//     }
//     dis operator-(dis temp)
//     {
//         dis temp1;
//         temp1.feet = feet - temp.feet;
//         temp1.inch = inch - temp.inch;

//         if (temp1.inch < 0)
//         {
//             temp1.feet = temp1.feet - 1;
//             temp1.inch = temp1.inch + 12;
//         }
//         return temp1;
//     }
// };
// int main()
// {
//     dis obj1, obj2;
//     obj1.readdiatande();
//     obj2.readdiatande();

//     dis obj3=obj1+obj2;
//     obj3.display();
//     obj3=obj1-obj2;
//     obj3.display();

//     return 0;
// }

// // c6,7
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class complx
// {
// public:
//     int real;
//     int image;

// public:
//     void input()
//     {
//         cin >> real >> image;
//     }
//     void output()
//     {
//         if (image < 0)
//         {
//             cout << real << "-i" << -image;
//         }
//         else
//         {
//             cout << real << "+i" << image;
//         }
//     }
//     complx operator >>(complx temp)
//     {
//         complx temp1;
//         temp1.real = real + temp.real;
//         temp1.image = image - temp.image;
//         return temp1;
//     }
// };

// int main()
// {
//     complx ob1, ob2, ob3;
//     ob1.input();
//     ob2.input();
//     ob3 = ob1 >> ob2;
//     ob3.output();
//     return 0;
// }

// c8
//  #include <iostream>
//  #include <string>
//  using namespace std;
//  class StringManipulator
//  {
//  private:
//      string str;

// public:
//     StringManipulator(string s)
//     {
//         str = s;
//     }
//     bool operator>(StringManipulator other)
//     {
//         return str > other.str;
//     }
//     bool operator<(StringManipulator other)
//     {
//         return str < other.str;
//     }
//     bool operator==(StringManipulator other)
//     {
//         return str == other.str;
//     }
// };
// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     StringManipulator sm1(str1);
//     StringManipulator sm2(str2);
//     string g, s, e;
//     (sm1 > sm2) ? g = "true" : g = "false";
//     (sm1 < sm2) ? s = "true" : s = "false";
//     (sm1 == sm2) ? e = "true" : e = "false";
//     cout << "String1 > String2: " << g << endl;
//     cout << "String1 < String2: " << s << endl;
//     cout << "String1 == String2: " << e << endl;
//     return 0;
// }

// c9
// #include <iostream>
// using namespace std;
// class Shape
// {
// public:
//     virtual double getArea()=0;
// };
// class Square : public Shape
// {
// private:
//     double side;

// public:
//     Square(double s)
//     {
//         side = s;
//     }
//     double getArea()
//     {
//         return side * side;
//     }
// };
// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     double getArea()
//     {
//         return 3.14159 * radius * radius; // Using Pi as approximately 3.14159
//     }
// };
// int main()
// {
//     // Creating instances of Square and Circle
//     Square square(5.0); // Square with side 5 units
//     Circle circle(3.0); // Circle with radius 3 units
//     // Calculating and displaying areas
//     cout << "Area of Square: " << square.getArea() << endl;
//     cout << "Area of Circle: " << circle.getArea() << endl;
//     return 0;
// }

// c9
// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
// public:
//     int real;
//     int img;
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     Complex(int r)
//     {
//         real = r;
//         img = 0;
//     }
//     Complex operator-()
//     {
//         return Complex(-real, -img);
//     }
//     Complex operator++()
//     { // preincrement
//         return Complex(++real, ++img);
//     }
//     // Complex operator++(int)
//     // { // postincrement
//     //     return Complex(++real, ++img);
//     // }
//     Complex operator--()
//     {
//         return Complex(--real, --img);
//     }
//     Complex operator--(int)
//     {
//         return Complex(--real, --img);
//     }
//     void display()
//     {
//         cout << real << " + i" << img << endl;
//     }
// };
// int main()
// {
//     Complex c1(1, 1);
//     Complex c2(2, 2);
//     c1.display();
//     Complex negC1 = -c1;
//     negC1.display();
//     Complex plusC1 = ++c1;
//     plusC1.display();
//     Complex minusC1 = --c1;
//     minusC1.display();
//     return 0;
// }

// #include <iostream>
// // Base class Fruit
// class Fruit
// {
// protected:
//     int numFruits;

// public:
//     Fruit()
//     {
//         numFruits = 0;
//     }
//     void addToBasket(int count)
//     {
//         numFruits += count;
//     }
//     int getNumFruits() const
//     {
//         return numFruits;
//     }
// };
// // Derived class Apples
// class Apples : public Fruit
// {
// public:
//     void addApples(int count)
//     {
//         addToBasket(count);
//     }
//     int getApples() const
//     {
//         return getNumFruits();
//     }
// };
// // Derived class Mangoes
// class Mangoes : public Fruit
// {
// public:
//     void addMangoes(int count)
//     {
//         addToBasket(count);
//     }
//     int getMangoes() const
//     {
//         return getNumFruits();
//     }
// };
// int main()
// {
//     using namespace std;
//     Apples appleBasket;
//     Mangoes mangoBasket;
//     appleBasket.addApples(5);  // Adding 5 apples to the basket
//     mangoBasket.addMangoes(8); // Adding 8 mangoes to the basket
//     // Display the count of each type of fruit and the total number of fruits
//     cout << "Number of Apples: " << appleBasket.getApples() << endl;
//     cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
//     cout << "Total number of Fruits: " << appleBasket.getNumFruits() + mangoBasket.getNumFruits() << endl;
//     return 0;
// }

// c11
// #include <iostream>
// using namespace std;
// // Base class Mammals
// class Mammals
// {
// public:
//     void displayMammal()
//     {
//         cout << "I am a mammal." << endl;
//     }
// };
// // Base class MarineAnimals
// class MarineAnimals
// {
// public:
//     void displayMarineAnimal()
//     {
//         cout << "I am a marine animal." << endl;
//     }
// };
// // Derived class BlueWhale inheriting from Mammals and MarineAnimals
// class BlueWhale : public Mammals, public MarineAnimals
// {
// public:
//     void displayBlueWhale()
//     {
//         cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
//     }
// };
// int main()
// {
//     Mammals mammal;
//     MarineAnimals marineAnimal;
//     BlueWhale blueWhale;
//     cout << "Calling functions using objects of respective classes:" << endl;
//     cout << "\nFunction of Mammals using object of Mammals:" << endl;
//     mammal.displayMammal();
//     cout << "\nFunction of MarineAnimals using object of MarineAnimals:" << endl;
//     marineAnimal.displayMarineAnimal();
//     cout << "\nFunction of BlueWhale using object of BlueWhale:" << endl;
//     blueWhale.displayBlueWhale();
//     cout << "\nFunctions of each parent class using object of BlueWhale:" << endl;
//     blueWhale.displayMammal();       // Function of Mammals through BlueWhale object
//     blueWhale.displayMarineAnimal(); // Function of MarineAnimals through BlueWhale object
//     return 0;
// }

// code stdio
// c9,10
// comples number class
// #include <bits/stdc++.h>
// #include<iostream>

// using namespace std;

// class ComplexNumbers {
//     // Complete this class

//     public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl,int img){
//         this->real=rl;
//         this->imag=img;
//     }

//     ComplexNumbers operator+(ComplexNumbers &obj){

//         int treal,timag;
//         treal=real + obj.real;
//         timag=imag + obj.imag;

//         return ComplexNumbers(treal,timag);

//     }

//     ComplexNumbers operator*(ComplexNumbers &obj){
//         int t1,t2,t3,t4;
//         t1=real * obj.real;
//         t2=real * obj.imag;
//         t3=imag * obj.real;
//         t4=imag * obj.imag;

//         int val=t1 - t4;
//         int val1=t2 + t3;
//         return ComplexNumbers(val,val1);
//     }

//     void print(){
//         cout<<real<<" + i"<<imag<<endl;
//     }

// };

// int main() {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     int choice;
//     cin >> choice;

//     if (choice == 1) {
//         ComplexNumbers ans=c1+c2;
//         ans.print();
//     }
//     else if (choice == 2) {
//         ComplexNumbers ans1=c1*c2;
//         ans1.print();
//     }
//     else {
//         return 0;
//     }
// }

// c11
// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// class ComplexNumbers
// {
//     // Complete this class

// public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl, int img)
//     {
//         this->real = rl;
//         this->imag = img;
//     }

//     ComplexNumbers plus(ComplexNumbers &obj)
//     {
//         int temp1,temp2;
//         temp1=real + obj.real;
//         temp2=imag + obj.imag;
//         return ComplexNumbers(temp1,temp2);
//     }

//     void print(){
//         cout<<real<<" + i"<<imag<<endl;
//     }
// };

// int main()
// {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     ComplexNumbers ans=c1.plus(c2);
//     ans.print();
//     return 0;
// }

// c12
// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// class ComplexNumbers
// {
//     // Complete this class

// public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl, int img)
//     {
//         this->real = rl;
//         this->imag = img;
//     }

//     void plus(ComplexNumbers &obj)
//     {
//         this->real += obj.real;
//         this->imag += obj.imag;
//     }

//     void print()
//     {
//         cout << real << " + i" << imag << endl;
//     }
// };

// int main()
// {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     // Perform addition and store the result in c1
//     c1.plus(c2);

//     // Print the modified c1
//     c1.print();

//     // Print the unchanged c2
//     c2.print();

//     return 0;
// }

// c13
// #include <iostream>
// using namespace std;

// class Complex
// {
// public:
//     int a, b;
//     void input(string s)
//     {
//         int v1 = 0;
//         int i = 0;
//         while (s[i] != '+')
//         {
//             v1 = v1 * 10 + s[i] - '0';
//             i++;
//         }
//         while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
//         {
//             i++;
//         }
//         int v2 = 0;
//         while (i < s.length())
//         {
//             v2 = v2 * 10 + s[i] - '0';
//             i++;
//         }
//         a = v1;
//         b = v2;
//     }

//     Complex operator+(const Complex& other) const {
//         Complex temp;
//         temp.a = a + other.a;
//         temp.b = b + other.b;
//         return temp;
//     }

//     friend ostream& operator<<(ostream& os, const Complex& c);
// };

// ostream &operator<<(ostream &os, const Complex &c)
// {
//     os << c.a << "+i" << c.b;
//     return os;
// }

// int main()
// {
//     Complex x, y;
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     x.input(s1);
//     y.input(s2);
//     Complex z = x + y;
//     cout << z << endl;

//     return 0;
// }
