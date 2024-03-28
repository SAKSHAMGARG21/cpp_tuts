// Binary Numbers
// Additions/Substraction
// Bitwise Operations:
// &,|,^,~,<<,>>
// Odd/Even
// Swap two numbers

// Binary Numbers
// 3-> 11
// 5-> 101
// 6-> 110

// Additions two Numebers in binary
// 5 + 7 = 12 -> 101 + 111 = 1100

// Substraction two Numbers in Binary
// 9 + (-7) = 2 -> 1001 + (-111) = 10
// 12 + (-5) = 7 -> 1100 + (-101) = 111

// How to find negative inverse of the number

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // Find the 2's complement
//     int sc = (~5)+1;
//     int ans= 12 + sc;
//     cout<<ans<<endl;  // 7
//     return 0;
// }

// Bitwise Operators
// a b & | ^
// 0 0 0 0 0
// 0 1 0 1 1
// 1 0 0 1 1
// 1 1 1 1 0
// ~ operator -> convert 0 to 1 and 1 to 0

// right shift operator
// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=5; // 101
//     int b= a >> 1; // 10 // left shift operator divide the value with 2
//     cout<< b <<endl;
//     b= a >> 2; // 001 // left shift operator divide the value with 2
//     cout<< b <<endl;
//     return 0;
// }

// left shift operator
// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 3; // 11
//     int b = a << 1; // 110 // right shift operator multiply the value by 2
//     cout << b << endl;
//     b = a << 2; // 1100
//     cout << b << endl;
//     return 0;
// }

// odd/Even Numbers
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=2;
//     if (a&1){
//         cout<<"num is odd"<<endl;
//     }
//     else{
//         cout<<"num is even"<<endl;
//     }
//     return 0;
// }

// Swap two numbers
// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int b=7;
    
    a = a ^ b; // 2
    b = a ^ b; // 5
    a = a ^ b; // 7
    cout<<a<<" "<<b<<endl;
    return 0;
}