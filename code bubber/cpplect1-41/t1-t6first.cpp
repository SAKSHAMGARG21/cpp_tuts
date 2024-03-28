// ______________________________________________code bubber___________________________________________________
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

//     // -----------------------------------------
//     /* type casting*/
//     // int a='a';
//     // cout<<a<<endl;

//     // char ch=98;
//     // cout<<ch<<endl;
// // ---------------------------------------
//     // arthmatic operators
//     // float a=2.5/2;
//     // cout<<a<<endl;
//     // cout<<2.5/2<<endl;

//     // relation operators
//     int a=2;
//     int b=3;

//     // bool first= (a==b);
//     // cout<<first<<endl;

//     // bool second =(a<b);
//     // cout<<second<<endl;

//     // bool third = (a>b);
//     // cout<<third<<endl;

//     // bool fourth=(a<=b);
//     // cout<<fourth<<endl;

//     bool fifth=(a>=b);
//     cout<<fifth<<endl;

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