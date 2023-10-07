// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// bool checkplandrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while(s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// void reverse(char name[], int n)
// {
//     // int s=0;
//     // int e=n-1;

//     // while(s<e){
//     //     swap(name[s++],name[e--]);
//     // }

//     for (int i = 0; i < n / 2; i++)
//     {
//         int t = name[i];
//         name[i] = name[n - i - 1];
//         name[n - i - 1] = t;
//     }
// }
// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main(int argc, char const *argv[])
// {
//     char name[20];
//     cout << "Enter your name:" << endl;
//     cin >> name;

//     cout << "your name is :" << name << endl;

//     int len = getlength(name);
//     cout << "Length of string is:" << len << endl;

//     reverse(name, len);
//     cout << "your name after reverse is :";
//     cout << name<<endl;

//     cout << "Palindrom or not:" << checkplandrome(name, len);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// vector<char> reverse(const vector<char>& name) {
//     int n = name.size();
//     vector<char> reversedName(n);
//     for (int i = 0; i < n; i++) {
//         reversedName[i] = name[n - i - 1];
//     }
//     return reversedName;
// }

// int main() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;

//     cout << "Your name is: " << name << endl;

//     int len = name.size();
//     cout << "Length of string is: " << len << endl;

//     vector<char> reversedName = reverse(vector<char>(name.begin(), name.end()));
//     cout << "Your name after reverse is: ";
//     for (int i = 0; i < len; i++) {
//         cout << reversedName[i];
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name;
//     cin>> name;
//     string reversedName = "";

//     // Iterate through the characters in reverse order and construct the reversed string
//     for (int i = name.length() - 1; i >= 0; i--) {
//         reversedName += name[i];
//     }

//     cout << "Original string: " << name << endl;
//     cout << "Reversed string: " << reversedName << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     cout << "Enter a string: ";
//     string name;
//     getline(cin,name);

//     string reversedName = "";

//     // Iterate through the characters in reverse order and construct the reversed string
//     for (int i = name.length() - 1; i >= 0; i--) {
//         reversedName += name[i];
//     }

//     cout << "Original string: " << name << endl;
//     cout << "Reversed string: " << reversedName << endl;

//     return 0;
// }

// #include <iostream>
// #include <cctype> // Include the cctype header for toupper
// using namespace std;

// int main() {
//     char lowercaseChar = 'a';
//     char uppercaseChar = 'A';

//     // Use the toupper function to convert to uppercase
//     char uppercaseChar1 = toupper(lowercaseChar);
//     char lowercaseChar1 = tolower(uppercaseChar);

//     cout << "Original character: " << lowercaseChar << endl;
//     cout << "Uppercase character: " << uppercaseChar1 << endl;
//     cout << "Original character: " << uppercaseChar << endl;
//     cout << "Uppercase character: " << lowercaseChar1 << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string input = "N2 i&nJA?a& jnI2n";
//     string formattedString = "";

//     for (char c : input) {
//         if (isalnum(c)) {
//             formattedString += toupper(c);
//         }
//     }

//     cout << "Formatted string: " << formattedString << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void fun(string &s)
// { // Pass the string by reference to modify it in-place
//     int ss = s.size();
//     for (int i = 0; i < ss; i++)
//     {
//         if (islower(s[i]))
//         {                         // Use islower to check if a character is lowercase
//             s[i] = toupper(s[i]); // Use toupper to convert to uppercase
//         }
//         else if (!isalnum(s[i]) || s[i] == ' ')
//         { // Ignore non-alphabetical characters and spaces
//             s[i] = -1;
//         }
//     }
// }
// bool checkPalindrome(string s)
// {
//     // Write your code here.
//     fun(s);
//     int l = 0;
//     string ans="";
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != -1)
//         {
//             ans+=s[i];
//         }
//     }
//     int ar = 0;
//     int e = ans.size() - 1;
//     while (ar <= e)
//     {
//         if (ans[ar] != ans[e])
//         {
//             return 0;
//         }
//         else
//         {
//             ar++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     string name;
//     // cout << "Enter a string: ";
//     getline(cin, name);

//     int ans = checkPalindrome(name);
//     if (ans == 0)
//     {
//         printf("false");
//     }
//     else
//     {
//         printf("true");
//     }

//     // for (int i = 0; i < name.size(); i++) {
//     //     if (name[i] != -1) { // Only print characters that are not -1
//     //         cout << name[i];
//     //     }
//     // }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// char tolowercase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         int temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkplandrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (tolowercase(a[s]) != tolowercase(a[e]))
//         {
//             return 0;
//         }
//         else
//         {
//             // if (!((a[s] >= 'a' && a[s] <= 'z') && (a[s] >= 0 && a[s] <= 9)) || a[s] == ' ')
//             // {
//             //     s++;
//             // }
//             // else if (!((a[s] >= 'a' && a[s] <= 'z') && (a[s] >= 0 && a[s] <= 9)) || a[s] == ' ')
//             // {
//             //     e--;
//             // }
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main(int argc, char const *argv[])
// {
//     char name[50];
//     cin >> name;

//     int len = getlength(name);

//     cout << "Palindrom or not:" << checkplandrome(name, len);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// char tolowercase(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9))
//     {
//         return ch;
//     }
//     else
//     {
//         int temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool valid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// bool checkplandrome(string a)
// {
//     int s = 0;
//     int e = a.size() - 1;
//     while (s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// bool ispalindrome(string a)
// {
//     int ss = a.size();
//     string temp = "";
//     for (int i = 0; i < ss; i++)
//     {
//         if (valid(a[i]))
//         {
//             temp.push_back(a[i]);
//         }
//     }
//     for (int j = 0; j < ss; j++)
//     {
//         temp[j] = tolowercase(temp[j]);
//     }
//     return checkplandrome(temp);
// }
// int main(int argc, char const *argv[])
// {
//     char name[50];
//     cin >> name;

//     cout << ispalindrome(name);

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// bool valid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//     {
//         return 1;
//     }
//     return 0;
// }
// bool isPalindrome(string a)
// {
//     int ss = a.size();
//     string temp = "";
//     for (int i = 0; i < ss; i++)
//     {
//         if (valid(a[i]))
//         {
//             temp.push_back(tolower(a[i]));
//         }
//     }

//     int s = 0;
//     int e = temp.size() - 1;
//     while (s <= e)
//     {
//         if (temp[s] != temp[e])
//         {
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }
// int main(int argc, char const *argv[])
// {
//     char name[50];
//     cin >> name;

//     cout << ispalindrome(name);

//     return 0;
// }

// leet code premium que
// #include <iostream>
// #include <string>
// using namespace std;

// void reversethestring2(string& s)
// {
//     int ss = s.size();
//     int ts = 0;
//     int k = 0;
//     string temp = "";

//     for (int i = ss - 1; i >= 0; i--)
//     {
//         temp.push_back(s[i]);
//     }

//     for (int i = 0; i <= ss; i++)
//     {
//         if (temp[i] == ' ' || i == ss)
//         {
//             for (int j = i - 1; j >= ts; j--)
//             {
//                 s[k++] = temp[j];
//             }
//             if (i != ss) // Add this condition to avoid adding extra space at the end
//             {
//                 s[k++] = ' '; // Add space after each word
//             }
//             ts = i + 1;
//         }
//     }

//     // Resize the string to remove any extra characters at the end
//     // s.resize(k);
// }

// int main()
// {
//     string s;
//     getline(cin, s);

//     reversethestring2(s);

//     cout << s << endl;

//     return 0;
// }

// chat gpt
// #include <iostream>
// #include <string>
// using namespace std;

// void reversethestring2(string& s)
// {
//     int ss = s.size();
//     int start = 0;

//     for (int i = 0; i <= ss; i++)
//     {
//         if (s[i] == ' ' || i == ss)
//         {
//             int end = i - 1;
//             while (start < end)
//             {
//                 swap(s[start], s[end]);
//                 start++;
//                 end--;
//             }
//             start = i + 1;
//         }
//     }

//     // Reverse the entire string
//     int i = 0, j = ss - 1;
//     while (i < j)
//     {
//         swap(s[i], s[j]);
//         i++;
//         j--;
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);

//     reversethestring2(s);

//     cout << s << endl;

//     return 0;
// }

// geaks of geaks
// code by love bubber
// #include <iostream>
// #include <string>
// using namespace std;

// // char findmaxoccchar(string s)
// // {
// //     int arr[26] = {0};
// //     for (int i = 0; i < s.size(); i++)
// //     {
// //         char ch = s[i];
// //         int num = 0;
// //         if (ch >= 'a' && ch <= 'z')
// //         {
// //             num = ch - 'a';
// //         }
// //         arr[num]++;
// //     }
// //     int maxi = -1, ans = 0;
// //     for (int i = 0; i < 26; i++)
// //     {
// //         if (maxi < arr[i])
// //         {
// //             ans = i;
// //             maxi = arr[i];
// //         }
// //     }
// //     char final = 'a' + ans;
// //     return final;
// // }

// char findmaxoccchar(string s)
// {

//     return final;
// }

// int main()
// {
//     string s;
//     getline(cin, s);

//     cout << findmaxoccchar(s) << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// // string replaceSpaces(string &str)
// // {
// //     int ss = str.size();
// //     string temp = "@40";

// //     // Create a new string to store the result
// //     string result;

// //     // Iterate through each character in the input string
// //     for (int i = 0; i < ss; i++)
// //     {
// //         if (str[i] == ' ')
// //         {
// //             // Append the string "@40" to the result string
// //             result += temp;
// //         }
// //         else
// //         {
// //             // Append the current character to the result string
// //             result += str[i];
// //         }
// //     }
// //     return result;
// // }
// string replaceSpaces(string& str)
// {
//     int ss = str.size();
//     string temp = "";

//     for (int i = 0; i < ss; i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }
// // string replaceSpaces(string &str)
// // {
// //     int ss = str.size();
// //     int ts = 0;
// //     string temp = "@40";

// //     // Iterate through each character in the input string
// //     for (int i = 0; i < ss; i++)
// //     {
// //         if (str[i] == ' ')
// //         {
// //             // Replace the space character with the string "@40"
// //             str.replace(i, 1, temp);
// //         }
// //     }
// //     return str;
// // }
// int main()
// {
//     string s;
//     getline(cin, s);

//     string news = replaceSpaces(s);

//     cout << news << endl;

//     return 0;
// }

// leet code
// permutation check
// #include <iostream>
// #include <climits>
// #include <string>
// #include "bits/stdc++.h"
// using namespace std;
// bool chackequal(int a[26], int b[26])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (a[i] != b[i])
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }
//     // cout << "a" << endl;
//     // for (int i = 0; i < 26; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     // cout << endl;
//     // cout << "b" << endl;
//     // for (int i = 0; i < 26; i++)
//     // {
//     //     cout << b[i] << " ";
//     // }
//     return 1;
// }
// bool checkInclusion(string s1, string s2)
// {
//     int count1[26] = {0};
//     for (int i = 0; i < s1.length(); i++)
//     {
//         int index = s1[i] - 'a';
//         count1[index]++;
//     }

//     int i = 0;
//     int windosize = s1.length();
//     int count2[26] = {0};
//     while (i < windosize && i < s2.length())
//     {
//         int index = s2[i] - 'a';
//         count2[index]++;
//         i++;
//     }
//     // // chackequal(count1, count2);
//     if (checkequal(count1, count2))
//     {
//         return 1;
//     }

//     while (i < s2.length())
//     {
//         char newchar = s2[i];
//         int index = newchar - 'a';
//         count2[index]++;

//         int oldchar = s2[i - windosize];
//         index = oldchar - 'a';
//         count2[index]--;
//         i++;
//         // chackequal(count1, count2);
//         if (checkequal(count1, count2))
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     string s1;
//     string s2;
//     cin >> s1 >> s2;

//     bool ans = checkInclusion(s1, s2);
//     cout << (ans ? "true" : "false") << endl;

//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include "bits/stdc++.h"
// using namespace std;
// string removeDuplicates(string s)
// {
//     // int ss = s.length();
//     // string temp = "";
//     // int count[26] = {0};
//     // string ans = "";
//     // for (int i = 0; i < ss; i++)
//     // {
//     //     int index = s[i] - 'a';
//     //     count[index]++;
//     // }
//     // int c = 0;
//     // for (int i = 0; i < 26; i++)
//     // {
//     //     if (count[i] % 2 != 0)
//     //     {
//     //         char ch = 'a' + i;
//     //         temp.push_back(ch);
//     //         c++;
//     //     }
//     // }
//     // return s;

//     int ss = s.length();
//     string temp = "";
//     int c = 0;
//     for (int i = 0; i < ss - 1; i++)
//     {
//         if (s[i] == s[i + 1])
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 s[c++] = s[j];
//             }
//             s[c++] = s[i + 2];
//         }
//     }
//     return s;
// }
// correct code
// string removeDuplicates(string s) {
//     int n = s.length();
//     int j = -1; // Initialize the write pointer to -1

//     for (int i = 0; i < n; i++) {
//         if (j >= 0 && s[i] == s[j]) {
//             // If the current character is an adjacent duplicate, remove it
//             j--;
//         } else {
//             // Otherwise, add the current character to the result
//             j++;
//             s[j] = s[i];
//         }
//     }

//     // Build the result string
//     string result = s.substr(0, j + 1);

//     return result;
//     // return s;
// }
// int main(int argc, char const *argv[])
// {
//     string s1;
//     cin >> s1;

//     string ans = removeDuplicates(s1);
//     cout << ans << endl;

//     return 0;
// }

// c
// test case:
// 5
// 3 4 5 1
// ans:
// 2
#include <iostream>
#include <climits>
#include <limits>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    return 0;
}