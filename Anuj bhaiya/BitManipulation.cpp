// Bit Masking
// Find ith bit
// Set ith bit
// Clear ith bit
// Find number of bits to change to conver a to b

// Bit Masking

// Find ith bit
// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int n=0;
//     int mask = n << 2;

//     int ans= a & mask;
//     cout<<ans<<endl;
//     return 0;
// }

// Set ith bit
// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int a=1;
//     int mask = a << 1;

//     int ans = n | mask;

//     cout<<ans<<endl;
//     return 0;
// }

// Clear ith bit
// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int a = 1;
//     int mask = ~(a << 1);
//     int ans = n & mask;
//     cout << ans << endl;

//     return 0;
// }

// find number of bits to change to conver a to b

// a = 10110
// b = 11011

// a^b=01101; now find count 1

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     // int a=16;
//     // int c=0;
//     // while(a!=0){
//     //     c++;
//     //     a = a & (a-1);
//     // }
//     // cout<<c<<endl;

//     int a = 13;
//     int c = 0;
//     while (a != 0)
//     {
//         if (a&1){
//             c++;
//         }
//         cout<<a<<endl;
//         a = a >> 1;
//     }

//     cout << c << endl;
//     return 0;
// }
