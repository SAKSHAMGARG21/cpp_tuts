// #include<iostream>
// using namespace std;

// int main(){
//     cout << "hello\n"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int amount1;
//     cout<<"Enter the no:\n";
//     cin>>amount1;
//     int amount2;
//     cout<<"Enter the no:\n";
//     cin>>amount2;
//     int sum=amount1+amount2;
//     cout<<"sum\n";
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int savings;
//     cin>>savings;

//     if (savings>5000){
//         if (savings >20000){
//             cout<<"mackbook air\n";
//         }
//         else{
//             cout<<"dell laptop\n";
//         }
//     }
//     else if (savings<3000){
//         cout<<"Iphone 14 pro max\n";
//     }
//     else{
//         cout<<"Realme i6 phone\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     /* code */
//     int a,b,c;
//     cin>>a>>b>>c;

//     if (a>b){
//         if (a>c){
//             cout<<a;
//         }
//         else{
//             cout<<c;
//         }
//     }
//     else{
//         if (b>c){
//             cout<<b;
//         }
//         else{
//             cout<<c;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a;
//     for (a=1;a<=10;a++){
//         cout<<"2"<<"*"<<a<<"="<<2*a<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a;
//     cin>>a;
//     while(a>0){
//         cout<<a<<endl;
//         cin>>a;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     do{
//         cout<<"5 is less than 1 inside do while loop";
//     }while(n<1);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n=3000;
//     for (int i = 1; i <= 30; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         cout << "yes go to home";
//         if (n==0){
//             break;
//         }
//         n=n-300;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n=100;
//     for (int i=1;i<=n;i++){
//         if (i%2==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n=100;
//     for (int i=1;i<=n;i++){
//         if (i==9){
//             break;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int i, j;
//     i = 1;
//     j = 2;
//     int c = i + j + i++ + j++ + ++i + ++j;
//     cout<<c<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cin>>a>>b;
//     for (int i=0;i<a;i++){
//         for (int j=0;j<b;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= b; j++)
//         {
//             if (i == 1 || i == a)
//             {
//                 cout << "* ";
//             }
//             else if (j == 1 || j == b)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"no:";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         for (int k=0;k<n-i;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"no:";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for (int k=0;k<2*n-2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"no:";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=1;j<n-i;j++){
//             cout<<" ";
//         }
//         for (int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// Diomond pattren;
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "no:";
//     cin >> n;
//     for (int i = 1; i <= n / 2 + 1; i++)
//     {
//         for (int j = 1; j <= n / 2 + 1 - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     for (int i = 1; i <=n / 2; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= n - 2 * i; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// arrow Pattern.
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "no:";
//     cin >> n;
//     for (int i = 1; i <= n / 2 + 1; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i ; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     for (int i = 1; i <=n / 2; i++)
//     {
//         for (int j = 1; j < n/2 -i+1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= n/2 - i+1; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "no:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= 2 * n - 2 * i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <=2 * i -2; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= n-i+1; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// Number pattren starts form here.
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "no:";
//     cin >> n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++){
//             cout<<i+1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m=1;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << m<<" ";
//             m = m + 1;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m=1;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n-i+1; j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, p, q;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             p = 1;
//             q = 0;
//         }
//         else
//         {
//             q = 1;
//             p = 0;
//         }
//         for (j = 1; j <= i; j++)
//         {
//             if (j%2!=0){
//                 cout<<p;
//             }
//             else{
//                 cout<<q;
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m=1;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (m=1;m<=n;m++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m = 1;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m;
//     cout << "no:";
//     cin >> n;
//     int k,l,p;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             cout<<" ";
//         }
//         for (k=1;k<=i;k++){
//             m=i-k+1;
//             cout<<m;
//         }
//         p=m+1;
//         for (int l=2;l<=i;l++){
//             cout<<p;
//             p++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// wave pattern 
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j;
//     cout << "no:";
//     cin >> n;
//     for (i = 1; i <= 3; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             if (((i + j) % 4 == 0) ||( i == 2 && j % 4 == 0))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c1
// Decimal to Binary code
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, i, j, m;
//     // cout << "no:";
//     cin >> n;
//     int rem = 0, que = 0, e = 0, add = 0, ten = 1;
//     while (n != 0)
//     {
//         rem = n % 2;
//         e = rem * ten;
//         add = add + e;
//         ten *= 10;
//         n = n / 2;
//     }
//     cout << add;
//     return 0;
// }

// 101101
// c2
// Binary to Decimal code
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, rem, add = 0, m = 0;
//     // cout << "no:";
//     cin >> n;
//     while (n != 0)
//     {
//         rem = n % 10;
//         if (rem != 0)
//         {
//             int j = pow(2, m);
//             add = add + j;
//         }
//         m++;
//         n/=10;
//     }
//     cout<<add;
//     return 0;
// }

// Reverse of a number.
// c3
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n, rem, add = 0, m = 0;
//    // cout << "Enter a number: ";
//     cin >> n;
//     while (n!=0){
//         rem=n%10;
//         add=(add*10)+rem;
//         n/=10;
//     }
//     cout << "your output is : "<< add << endl;
//     return 0;
// }

// Armstrong no
// c4
//  #include <iostream>
//  #include <cmath>
//  using namespace std;

// int main() {
//     int n,rem,x,sum=0,c=0;
//     cout << "Enter a number: ";
//     cin >> n;
//     x=n;
//     while (n!=0){
//         c++;
//         n=n/10;
//     }
//     cout<<c<<endl;
//     n=x;
//     while (n!=0){
//         rem=n%10;
//         sum=sum+pow(rem,c);
//         n/=10;
//     }
//     if (sum==x){
//         cout<<sum<<"is armstrong no";
//     }
//     else {
//         cout<<sum<<"is not armstrong";
//     }
//     return 0;
// }

// c4
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n,rem,x,sum=0,c=0;
//     // cout << "Enter a number: ";
//     cin >> n;
//     x=n;
//     for (int i=n;i>0;i/=10){
//         c++;
//     }
//     n=x;
//     for (int j=n;j>0;j/=10){
//         rem=j%10;
//         sum=sum+pow(rem,c);
//     }
//     if (sum==x){
//         cout<<sum<<"is armstrong";
//     }
//     else {
//         cout<<sum<<" not armstrong";
//     }
//     return 0;
// }

// _______________________________code bubber_____________________________________
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {

//     // int a=123;
//     // cout<<a<<endl;

//     // char b='v';
//     // cout<<b<<endl;

//     // bool c=true;
//     // cout<<c<<endl;

//     // double d= 1.23;
//     // cout<<d<<endl;

//     // float e= 1.3;
//     // cout<<e<<endl;

//     // int size = sizeof(d);
//     // cout<<"size of a is:"<<size<<endl;

//     /* type casting*/
//     // int a='a';
//     // cout<<a<<endl;

//     // char ch=98;
//     // cout<<ch<<endl;

//     // arthmatic operators
//     // float a=2.5/2;
//     // cout<<a<<endl;
//     // cout<<2.5/2<<endl;

//     // relation operators
//     // int a=2;
//     // int b=3;

//     // bool first= (a==b);
//     // cout<<first<<endl;

//     // bool second =(a<b);
//     // cout<<second<<endl;

//     // bool third = (a>b);
//     // cout<<third<<endl;

//     // bool fourth=(a<=b);
//     // cout<<fourth<<endl;

//     // bool fifth=(a>=b);
//     // cout<<fifth<<endl;

//     // bool six=(a!=b);
//     // cout<<six<<endl;

//     // logical operators
//     // && || !
//     return 0;
// }

// c5
// #include<iostream>
// #include<string>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char n;
//     cin>>n;
//     if (n>='A' && n<='Z'){
//         cout<<"this is upper case"<<endl;

//     }
//     else if (n>='a' && n<='z'){
//         cout<<"this is lower case"<<endl;
//     }
//     else if (n>='0' && n<='9'){
//         cout<<"this is char no"<<(int)n<<endl;
//     }
//     return 0;
// }

// c6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int i=2;
//     while(i<n){
//         if (n%i==0){
//             cout<<"not prime no"<<i<<endl;
//         }
//         else{
//             cout<<"prime no"<<i<<endl;
//         }
//         i+=1;
//     }
//     return 0;
// }

// c7
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1, p = 1;
//     while (i <= n)
//     {
//         int j=1;
//         while (j <= n)
//         {
//             cout<< p << " ";
//             p += 1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// c8
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1, p = 1;
//     char a = 'A';
//     while (i <= n)
//     {
//         // char a = 'A';
//         int j = 1;
//         while (j <= n)
//         {
//             cout << a;
//             // a++;
//             j++;
//         }
//         a++;
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c9
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char a = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << a;
//             a++;
//             j++;
//         }
//         // a++;
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c10
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char a = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << a;
//             a++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c11
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch='A'+i+j-2;
//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c12
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char a = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + i + j - 2;
//         while (j <= i)
//         {
//             cout << ch;
//             ch--;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c13
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + n - i;
//         while (j <= i)
//         {
//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

//c14 
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1,a=1;
//     while (i <= n)
//     {
//         int k = 1;
//         while (k<=n-i+1)
//         {
//             /* code */
//             cout<<" ";
//             k++;
//         }
//         int j=1;
//         while (j <= i)
//         {
//             cout <<a;
//             a++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c15
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char a = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << a<<" ";
//             a++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// c16
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i = 1, a = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i)
//         {
//             cout << " ";
//             j++;
//         }
//         int k = 1;
//         while (k <= i)
//         {
//             cout << k;
//             k++;
//         }
//         a=k-2;
//         int l=2;
//         while (l<=i)
//         {
//             /* code */
//             cout<<a;
//             a--;
//             l++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// fibonacci series
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n=10;
//     int a =0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for (int i=3;i<=n;i++){
//         int nextno=a+b;
//         cout<<nextno<<" ";
//         a=b;
//         b=nextno;
//     }
//     return 0;
// }

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