// #include<iostream>
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

// ostream& operator<<(ostream& os, const Complex& c) {
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

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class chkno{
//     public:
//     double vale;
//     chkno(double num){
//         vale=num;
//         if (vale>0){
//             cout<<vale<<" is a positive no."<<endl;
//         }
//         else if (vale==0){
//             cout<<vale<<" is a neutral."<<endl;
//         }
//         else{
//             cout<<vale<<" is a negtive."<<endl;
//         }
//     }
// };
// int main()
// {
//     double num;
//     cin>>num;
//     chkno ob1(num);
//     return 0;
// }

