// to find the lcm of two nos using recursion

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int i = 2;
//     int pre=0;
//     int ans=1;
//     int mans=1;
//     while (i <= n)
//     {
//         if (n % i == 0)
//         {
//             if (i == pre)
//             {
//                 ans = ans * i;
//             }
//             else
//             {
//                 pre = i;
//                 ans*=pre;
//             }
//             n /= i;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout<<ans<<endl;
//     // cout << endl;
//     int j = 2;
//     while (j <= m)
//     {
//         if (m % j == 0)
//         {
//             cout << j << " ";
//             m /= j;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     return 0;
// }

// #include <iostream>

// // Function to find the LCM of two numbers
// int findLCM(int a, int b) {
//     int maxNum = (a > b) ? a : b;
//     int minNum = (a < b) ? a : b;
//     int lcm = maxNum;

//     while (lcm % minNum != 0) {
//         lcm += maxNum;
//     }

//     return lcm;
// }

// int main() {
//     int num1, num2;

//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     int lcm = findLCM(num1, num2);

//     std::cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << std::endl;

//     return 0;
// }
