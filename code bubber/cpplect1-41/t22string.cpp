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

// int main()
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

// ---------------------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>  // Include the algorithm header for the reverse function
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

//     // Convert the string to a vector of characters
//     vector<char> nameVector(name.begin(), name.end());

//     // Reverse the vector
//     vector<char> reversedName = reverse(nameVector);

//     cout << "Your name after reverse is: ";
//     for (int i = 0; i < len; i++) {
//         cout << reversedName[i];
//     }
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string name;
//     cout << "Enter your name: ";
//     // cin >> name;
//     getline(cin,name);
//     cout << "Your name is: " << name << endl;
//     cout << "Your name after reverse is: ";
//     reverse(name.begin(),name.end());
//     cout<<name<<endl;
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

// code stdio
// check if  the string is a plaindrome
// c1
// #include <iostream>
// #include <string>
// using namespace std;

// void fun(string &s)
// { // Pass the string by reference to modify it in-place
//     int ss = s.size();
//     for (int i = 0; i < ss; i++)
//     {
//         if (islower(s[i]))
//         {                               // Use islower to check if a character is lowercase
//             s[i] = toupper(s[i]);    // Use toupper to convert to uppercase
//             s[i] = 'A' + s[i] -'a';     // Use toupper to convert to uppercase
//         }
//         else if (!isalnum(s[i]) || s[i] == ' ')
//         {
//             // Ignore non-alphabetical characters and spaces
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

//     // int ans = checkPalindrome(name);
//     // if (ans == 0)
//     // {
//     //     printf("false");
//     // }
//     // else
//     // {
//     //     printf("true");
//     // }

//     bool ans = checkPalindrome(name);
//     cout<<(ans ? "true" : "false")<<endl;
//     // for (int i = 0; i < name.size(); i++) {
//     //     if (name[i] != -1) { // Only print characters that are not -1
//     //         cout << name[i];
//     //     }
//     // }

//     return 0;
// }

// c1
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

// c2
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

// c1
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
//     string temp=s;

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
//     s.resize(k);
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
//     // int i = 0, j = ss - 1;
//     // while (i < j)
//     // {
//     //     swap(s[i], s[j]);
//     //     i++;
//     //     j--;
//     // }
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
// c3
// code by love bubber
// #include <iostream>
// #include <string>
// using namespace std;

// char findmaxoccchar(string s)
// {
//     int arr[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         char ch = s[i];
//         int num = 0;
//         // if (ch >= 'a' && ch <= 'z')
//         // {
//         //     num = ch - 'a';
//         // }
//         num=ch-'a';
//         arr[num]++;
//     }
//     int maxi = -1, ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char final = 'a' + ans;
//     return final;
// }

// // char findmaxoccchar(string s)
// // {
// //     return final;
// // }

// int main()
// {
//     string s;
//     getline(cin, s);

//     cout << findmaxoccchar(s) << endl;

//     return 0;
// }

// code stdio
// replace spaces
// c4
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
// // string replaceSpaces(string& str)
// // {
// //     int ss = str.size();
// //     string temp = "";

// //     for (int i = 0; i < ss; i++)
// //     {
// //         if (str[i] == ' ')
// //         {
// //             temp.push_back('@');
// //             temp.push_back('4');
// //             temp.push_back('0');
// //         }
// //         else{
// //             temp.push_back(str[i]);
// //         }
// //     }
// //     return temp;
// // }
// string replaceSpaces(string &str)
// {
//     int ss = str.size();
//     int ts = 0;
//     string temp = "@40";

//     // Iterate through each character in the input string
//     for (int i = 0; i < ss; i++)
//     {
//         if (str[i] == ' ')
//         {
//             // Replace the space character with the string "@40"
//             str.replace(i, 1, temp);
//         }
//     }
//     return str;
// }
// int main()
// {
//     string s;
//     getline(cin, s);

//     string news = replaceSpaces(s);

//     cout << news << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// leet code
// 1910. Remove all occurence of a string
// c5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string removeOccurences(string s,string part){
//     while(s.length()!=0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main()
// {
//     string s,part;
//     cin>>s>>part;
//     string ans=removeOccurences(s,part);
//     cout<<ans<<endl;
//     return 0;
// }

// leet code
// 567. permutation in string
// c6
// #include <iostream>
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
//     if (chackequal(count1, count2))
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
//         if (chackequal(count1, count2))
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

// leetcode
// Remove all the adjacent duplicate in a string
// c7
// #include <iostream>
// #include <string>
// #include "bits/stdc++.h"
// using namespace std;
// // correct code
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

// c7
// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// string removeDuplicates(string s) {
//     stack<char> st;
//     for (char c : s) {
//         if (!st.empty() && c == st.top()) {
//             st.pop(); // If current character is a duplicate, pop the previous character
//         } else {
//             st.push(c); // Otherwise, push the current character onto the stack
//         }
//     }

//     string result = "";
//     while (!st.empty()) {
//         result = st.top() + result; // Build the result string by popping characters from the stack
//         st.pop();
//     }

//     return result;
// }

// int main() {
//     string s1;
//     cin >> s1;

//     string ans = removeDuplicates(s1);
//     cout << ans << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// leetcode
// 443. string compression
// c8
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string stringcompression(string s)
// {
//     int count1[26] = {0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         int index = s[i] - 'a';
//         count1[index]++;
//     }
//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         char a;
//         int b;
//         if (count1[i] != 0)
//         {
//             a = 'a' + i;
//             b = count1[i];
//             // cout<<b;
//             ans.push_back(a);
//             // ans.push_back('0'+b);
//             if (b != 1)
//             {
//                 ans.push_back('0' + b);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     cin >> s;
//     string ans = stringcompression(s);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// code bubber
// c8
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string stringcompression(string s)
// {
//     int i = 0;
//     int idx = 0;
//     int n = s.size();
//     while (i < n)
//     {
//         int j = i + 1;
//         while (j < n && s[i] == s[j])
//         {
//             j++;
//         }

//         s[idx++] = s[i];

//         int count = j - i;

//         if (count > 1)
//         {
//             string cnt = to_string(count);
//             for (char ch : cnt)
//             {
//                 s[idx++] = ch;
//             }
//             // char cnt = '0'+count;
//             // s[idx++] = cnt;
//         }
//         i=j;
//     }
//     string ans=s.substr(0,idx);
//     return ans;
// }
// int main()
// {
//     // int n;
//     // vector<char> s;
//     // for (int i=0;i<n;i++){
//     //     cin>>s[i];
//     // }

//     string s;
//     cin>>s;
//     string ans=stringcompression(s);
//     cout<<ans<<endl;
//     return 0;
// }


// -----------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// bool isPalindrome(const string& str) {
//     string reversed = str;
//     reverse(reversed.begin(), reversed.end());
//     return str == reversed;
// }

// string makePalindrome(const string& str) {
//     string palindrome = str;
//     reverse(palindrome.begin(), palindrome.end());
//     return str + palindrome;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     if (isPalindrome(input)) {
//         cout << "The input string is already a palindrome: " << input << endl;
//     } else {
//         string palindrome = makePalindrome(input);
//         cout << "Rearranged palindrome string: " << palindrome << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=-1;
//     int ans=0;
//     for (int i=0;i<n;i++){
//         if (mx<arr[i]){
//             ans=i;
//             mx=arr[i];
//         }
//     }
//     // cout<<ans<<mx;
    


//     return 0;
// }