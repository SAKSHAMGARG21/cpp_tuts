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
//             // printf("*");
//             cout<<"*";
//         }
//         // printf("\n");
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

// Star Pattern.
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
//                 cout << "*";
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

// Decimal to Binary code
//  #include <iostream>
//  using namespace std;
//  int main(int argc, char const *argv[])
//  {
//      int n, i, j, m;
//      cout << "no:";
//      cin >> n;
//      int rem=0,que=0,e=0,add=0,ten=1;
//      while(n!=0){
//          rem=n%2;
//          e=rem*ten;
//          add=add+e;
//          ten*=10;
//          n=n/2;
//      }
//      cout<<add;
//      return 0;
//  }

// 101101
// Binary to Decimal code
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, rem, add = 0, m = 0;
//     cout << "no:";
//     cin >> n;
//     while (n != 0)
//     {
//         rem = n % 10;
//         if (rem != 0)
//         {
//             int j = rem * pow(2, m);
//             add = add + j;
//         }
//         m++;
//         n/=10;
//     }
//     cout<<add;
//     return 0;
// }


// Reverse of a number.
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n, rem, add = 0, m = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     while (n!=0){
//         rem=n%10;
//         add=(add*10)+rem;
//         n/=10;
//     }
//     cout << "your output is : "<< add << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

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

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n,rem,x,sum=0,c=0;
//     cout << "Enter a number: ";
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








