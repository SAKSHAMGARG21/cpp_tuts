
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int  n = 1;
//     char ch='1';
//     switch (ch)
//     {
//     case 1:
//         cout << "first" << endl;
//         break;
//     case '1':
//         // cout << "second" << endl;
//         switch (n){
//             case 1:cout<<"value of num is "<<n<<endl;
//             break;
//         }
//         break;
//         // exit;
//     case 'a':
//         cout << "char" << endl;
//         break;
//     default:
//         cout << "it is default case" << endl;
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a, b;
//     char op;
//     // cout << "Enter the no a and b :" << endl;
//     cin >> a >> b;
//     // cout << "Enter the operator:" << endl;
//     cin >> op;
//     switch (op)
//     {
//     case '+':
//         cout << (a + b) << endl;
//         break;
//     case '-':
//         cout << (a - b) << endl;
//         break;
//     case '*':
//         cout << (a * b) << endl;
//         break;
//     case '/':
//         cout << (a / b) << endl;
//         break;
//     case '%':
//         cout << (a % b) << endl;
//         break;
//     default:
//         cout << ("Please enter the valid operator");
//         break;
//     }
//     return 0;
// }

// c22
// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     cout<<"100:"<<(n/100)<<endl;
//     cout<<"50:"<<((n%100)/50)<<endl;
//     cout<<"20:"<<(((n%100)%50)/20)<<endl;
//     cout<<"10:"<<((((n%100)%50)%20)/10)<<endl;
//     return 0;
// }

// c23
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int denominations[] = {100, 50, 20, 10};
//     int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

//     for (int i = 0; i < numDenominations; i++)
//     {
//         int count = n / denominations[i];
//         cout << denominations[i] << ":" << count << endl;
//         n = n % denominations[i];
//     }
//     return 0;
// }

// c24
// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int swap2(int *a,int *b){
//     int c;
//     c=*a;
//     *a=*b;
//     *b=c;
// }

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cin >>a>>b;
//     swap2(&a,&b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }