// c17
// leet code problem
// lect 7
// reverse interger
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int add = 0;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         if ((add > __INT_MAX__ / 10) || (add < __WINT_MIN__ / 10))
//         {
//             cout << "0" << endl;
//             break;
//         }
//         // add = (rem * 10) + add;
//         add = (add * 10) + rem;
//         n /= 10;
//     }
//     if (n <= 0)
//     {
//         cout << add << endl;
//     }
//     return 0;
// }

// c18
// leet code problem
// fst complement code by self
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int ten = 1, m, add = 0;
//     if (n == 0)
//     {
//         cout << "1" << endl;
//     }
//     else
//     {
//         while (n != 0)
//         {
//             int rem = n % 2;
//             m = rem * ten;
//             add = add + m;
//             ten *= 10;
//             n /= 2;
//         }
//         cout << add << endl;
//         int ans = 0, tem = 1;
//         while (add != 0)
//         {
//             /* code */
//             int rem1 = add % 10;
//             int newrem;
//             if (rem1 == 1)
//             {
//                 newrem = 0;
//             }
//             else
//             {
//                 newrem = 1;
//             }
//             int m2 = newrem * tem;
//             ans = ans + m2;
//             tem *= 10;
//             add /= 10;
//         }
//         cout<<ans<<endl;
//         int p = 0;
//         int mans = 0;
//         while (ans != 0)
//         {
//             int rem3 = ans % 10;
//             if (rem3 != 0)
//             {
//                 mans = mans + pow(2, p);
//             }
//             p++;
//             ans /= 10;
//         }
//         cout << mans << endl;
//     }
//     return 0;
// }

// c19
// by code bubber
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int m = n;
//     int mask = 0;
//     if (n == 0)
//     {
//         cout << "1";
//     }
//     else
//     {
//         while (m != 0)
//         {
//             /* code */
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
//         int ans = (~n) & mask; // (~n) it means this is not operator
//         cout << ans << endl;
//         // cout << mask << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int mask=7;
//     int ans=(~n)& mask;
//     cout<<ans<<endl;
//     return 0;
// }

// c20
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i;
//     for (i=0;i<=n;i++){
//         if (n==pow(2,i)){
//             cout<<"true"<<n<<endl;
//             break;
//         }
//     }
//     if (i>=n){
//         cout<<"false"<<n<<endl;
//     }
//     return 0;
// }

// c21
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i;
//     int ans = 1;
//     for (i = 0; i <= 30; i++)
//     {
//         // cout<<"ans"<<ans<<endl;
//         // ans=pow(2,i);
//         if (ans == n)
//         {
//             cout << "true" << n << endl;
//             break;
//         }
//         ans = ans * 2;
//     }
//     if (i >= 30)
//     {
//         cout << "false" << n << endl;
//     }
//     return 0;
// }
