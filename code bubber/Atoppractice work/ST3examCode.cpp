// // -----------------------------------------------------------------------------------------------------------------
// // prefix Evaluate
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int prefix(string s)
// {
//     stack<int> st;

//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i]-'0');
//         }
//         else
//         {

//             int oprnd1 = st.top();
//             st.pop();
//             int oprnd2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(oprnd1 + oprnd2);
//                 break;
//             case '-':
//                 st.push(oprnd1 - oprnd2);
//                 break;
//             case '*':
//                 st.push(oprnd1 * oprnd2);
//                 break;
//             case '/':
//                 st.push(oprnd1 / oprnd2);
//                 break;
//             case '^':
//                 st.push(pow(oprnd1, oprnd2));
//                 break;

//             default:
//                 cout << "Invalid operator";
//                 break;
//             }
//         }
//     }

//     return st.top();
// }
// int main()
// {
//     cout << prefix("-+7*45+20");
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// postfix Evaluate
// #include <iostream>
// #include <stack>
// #include <cmath> // For pow function
// using namespace std;

// int postfix(string s) {
//     stack<int> st;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] >= '0' && s[i] <= '9') {
//             st.push(s[i] - '0');
//         } else {
//             int oprnd2 = st.top();
//             st.pop();
//             int oprnd1 = st.top();
//             st.pop();
//             switch (s[i]) {
//                 case '+':
//                     st.push(oprnd1 + oprnd2);
//                     break;
//                 case '-':
//                     st.push(oprnd1 - oprnd2);
//                     break;
//                 case '*':
//                     st.push(oprnd1 * oprnd2);
//                     break;
//                 case '/':
//                     st.push(oprnd1 / oprnd2);
//                     break;
//                 case '^':
//                     st.push(pow(oprnd1, oprnd2));
//                     break;
//                 default:
//                     cout << "Invalid operator";
//                     break;
//             }
//         }
//     }

//     return st.top();
// }

// int main() {
//     cout << "Result: " << postfix("46+2/5*7+") << endl;
//     return 0;
// }
