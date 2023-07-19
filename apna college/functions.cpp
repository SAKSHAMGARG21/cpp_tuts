// #include<iostream>
// using namespace std;
// int add(int num1,int num2){
//     int a=num1+num2;
//     return a;
// }
// int main(int argc, char const *argv[])
// {
//     int num1;
//     int num2;
//     cin>>num1>>num2;
//     int sum = add(num1,num2);
//     cout<<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int isprime(int i)
// {
//     for (int j = 2; j < i; j++)
//     {
//         if (i % j == 0)
//         {
//             return false;
//             break;
//         }
//     }
//     return true;
// }
// int main(int argc, char const *argv[])
// {
//     int num1;
//     // cout << "no:";
//     cin >> num1;
//     for (int i = 2; i <= num1; i++)
//     {
//         if ((isprime(i)))
//         {
//             cout <<i<<" ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fibo(int n)
// {
//     int a = 0, b = 1;
//     if (n == 0)
//     {
//         cout<<a;
//     }
//     else if (n == 1)
//     {
//         cout<< b;
//     }
//     else
//     {
//         int c;
//         cout << a << " " << b <<" ";
//         for (int j = 2; j <= n; j++)
//         {
//             c = a + b;
//             a = b;
//             b = c;
//             cout<<c<<" ";
//         }
//     }
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "no:";
//     cin >> n;
//     fibo(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void fibo(int n)
// {
//     int a = 0, b = 1;
//     int c;
//     for (int j = 1; j <= n; j++)
//     {
//         cout << a << " ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     // cout << "no:";
//     cin >> n;
//     fibo(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     int faci=1;
//     for (int i=2;i<=n;i++){
//         faci*=i;
//     }
//     return faci;
// }
// int main(int argc, char const *argv[])
// {
//     int n,r,ans;
//     cout << "no:";
//     cin >> n>>r;
//     ans=fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;
//     return 0;
// }

// Octal to decimal conversion
// #include <iostream>
// #include<cmath>
// using namespace std;
// int otd(int n)
// {
//     int fval=0,p=0,rem,val;
//     while(n!=0){
//         rem=n%10;
//         val= rem*pow(8,p);
//         fval=fval+val;
//         p++;
//         n/=10;
//     }
//     cout<<fval;
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     // cout << "no:";
//     cin >> n;
//     otd(n);
//     // cout<<ans<<endl;
//     return 0;
// }

// decimal to octal conversiona
// #include <iostream>
// #include<cmath>
// using namespace std;
// int dto(int n)
// {
//     int rem,aval=0,ten=1;
//     while(n!=0){
//         rem=n%8;
//         aval=aval+rem*ten;
//         ten*=10;
//         n/=8;
//     }
//     cout<<aval;
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int n,r,ans;
//     cin >> n;
//     dto(n);
//     return 0;
// }

// Hexa to decimal conversion
// #include <iostream>
// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;
// int htd(string n)
// {
//     int ans = 0,val, x = 0;
//     int s = n.size();

//     for (int i = s - 1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             val=(n[i]-'0') * pow(16, x);
//             ans += val;
//             // ans += x*(n[i]-'0');
//             // cout << ans<<n[i];
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             val= (n[i]-'A'+10) * pow(16, x);
//             ans +=val;
//             // ans += x*(n[i]-'A'+10);
//             // cout << ans;
//         }
//         // x*=16;
//         x++;
//     }
//     return ans;
// }
// int main(int argc, char const *argv[])
// {
//     string n;
//     cin >> n;
//     htd(n);
//     cout << htd(n);
//     return 0;
// }

// // Decimal to hexadecimal conversion.
// #include <iostream>
// #include <string>

// using namespace std;

// string decimalToHexadecimal(int n)
// {
//     if (n == 0)
//     {
//         return "0";
//     }

//     string hex = "";
//     while (n > 0)
//     {
//         int rem = n % 16;
//         if (rem < 10)
//         {
//             hex = to_string(rem) + hex;
//         }
//         else
//         {
//             char c = 'A' + (rem - 10);
//             hex = c + hex;
//         }
//         n /= 16;
//     }
//     cout<< hex << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     decimalToHexadecimal(n);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char n = '5';
//     int num = n - '0';
//     cout << num;
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char n='5';
//     cout<<(int)n;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string n = '2';
//     string va = '2';
//     int b;
//     b = n + va;
//     cout << b;
//     return 0;
// }

// adding two binary numbers.
// #include <iostream>
// using namespace std;
// int addBinaryNumbers(int num1, int num2)
// {
//     int rem1, rem2, ten = 1, fadd, val, fval = 0;
//     int carry = 0;
//     while (num1 != 0 && num2 != 0)
//     {
//         rem1 = num1 % 10;
//         rem2 = num2 % 10;
//         int add = rem1 + rem2 + carry;
//         if (add == 2)
//         {
//             carry = 1;
//             add = 0;
//         }
//         else if (add == 3)
//         {
//             carry = 1;
//             add = 1;
//         }
//         else
//         {
//             carry = 0;
//             add = 1;
//         }
//         val = add * ten;
//         fval = fval + val;
//         ten *= 10;
//         num1 /= 10;
//         num2 /= 10;
//     }
//     if (carry!=0){
//         fval+=carry*ten;
//     }
//     return fval;
// }

// int main()
// {
//     int num1, num2;
//     // std::cout << "Enter two binary numbers: ";
//     cin >> num1 >> num2;

//     int sum = addBinaryNumbers(num1, num2);

//     cout << sum << endl;

//     return 0;
// }


// #include <iostream>
// int addBinaryNumbers(int num1, int num2)
// {
//     int carry = 0;
//     int sum = 0;
//     int multiplier = 1;
//     while (num1 != 0 || num2 != 0)
//     {
//         int bit1 = num1 % 10;
//         int bit2 = num2 % 10;
//         int add = bit1 + bit2 + carry;
//         int bitSum = add % 2;
//         carry = add / 2;
//         sum += bitSum * multiplier;
//         num1 /= 10;
//         num2 /= 10;
//         multiplier *= 10;
//     }
//     if (carry != 0)
//     {
//         sum += carry * multiplier;
//     }
//     return sum;
// }

// int main()
// {
//     int num1, num2;
//     // std::cout << "Enter two binary numbers: ";
//     std::cin >> num1 >> num2;
//     int sum = addBinaryNumbers(num1, num2);
//     std::cout <<sum << std::endl;
//     return 0;
// }

