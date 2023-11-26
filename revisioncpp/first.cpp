// c1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <=n; i++)
//     {
//         for(int l=1;l<=n-i;l++){
//             cout<<" ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < n - i+1; j++)
//         {
//             cout << " ";
//         }
//         char nw=ch;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << nw;
//             nw=ch-j;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c7
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         // char nw = ch;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c8
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A';
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c9
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j=1;j<i;j++){
//              cout<<" ";
//          }
//          char ch = 'A';
//          for (int j = 1; j <= n-i+1; j++)
//          {
//              cout << ch;
//              ch++;
//          }
//          cout << endl;
//      }
//      return 0;
//  }

// c10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * n- 2*i +1; j++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c11
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i-1; j++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// c12
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     char c1 = ch;
//     char c2 = ch;
//     for (int i = 1; i <= n; i++)
//     {
//         char n1 = ch;
//         char nc = n1;
//         char nw = ch;

//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << nc;
//             nc = ch + j;
//         }

//         for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
//         {
//             cout << c1;
//         }
//         c1++;

//         if (i >= 2)
//         {
//             nw = c2;
//             for (int j = 1; j <= i - 1; j++)
//             {
//                 cout << nw;
//                 nw = c2 - j;
//             }
//             c2++;
//         }
//         cout << endl;
//     }
//     char c4 = ch + n - 2;
//     char c5 = ch + n - 2;
//     for (int i = 1; i < n; i++)
//     {
//         char c3 = ch;
//         for (int j = n - i; j >= 1; j--)
//         {
//             cout << c3;
//             c3++;
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << c4;
//         }
//         c4--;

//         char nr = c5;
//         int l=1;
//         for (int j = n - i; j >= 1; j--)
//         {
//             cout << nr;
//             nr = c5 - l++;
//         }
//         c5--;
//         cout << endl;
//     }
//     return 0;
// }

// c13
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n , k;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             k = n - j + 1;
//             cout << k;
//         }
//         for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
//         {
//             k = n - i + 1;
//             cout << k;
//         }
//         k = n - i + 2;
//         for (int j = 2; j <= i; j++)
//         {
//             cout << k;
//             k++;
//         }
//         cout << endl;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             k = n - j + 1;
//             cout << k;
//         }
//         for (int j = 1; j <= 2 * i -1 ; j++)
//         {
//             k = i + 1 ;
//             cout << k;
//         }
//         k = i + 1;
//         for (int j = 2; j <= n-i+1; j++)
//         {
//             cout << k;
//             k++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c14
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i - j + 1;
//         }
//         for (int j = 1; j < i; j++)
//         {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // c15
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             k= i + j-1;
//             cout << k;
//         }
//         int l=k-1;
//         for (int j = 1; j < i; j++)
//         {
//             cout << l;
//             l--;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c16
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     for (int i = 1; i <= n / 2 + 1; i++)
//     {
//         for (int j = 1; j < n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int j = 1; j <= n / 2; j++)
//     {
//         for (int i = 1; i <= j+1; i++)
//         {
//             cout << " ";
//         }
//         for (int i = 1; i <= n - 2*j; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c17
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     for (int i = 1; i <= n / 2 + 1; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int j = 1; j <= n / 2; j++)
//     {
//         for (int i = 1; i <= n/2 - j; i++)
//         {
//             cout << " ";
//         }
//         for (int i = 1; i <= n/2 - j + 1; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c18
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <=2*n - 2*i; j++)
//         {
//             cout << " ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<< "*";
//         }
//         cout << endl;
//     }
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= n-j+1; i++)
//         {
//             cout << "*";
//         }
//         for (int i = 1; i < 2*j -1 ; i++)
//         {
//             cout << " ";
//         }
//         for (int i = 1; i <= n-j+1; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c19
// *000*000*
// 0*00*00*0
// 00*0*0*00
// 000***000
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }
//         cout << "*";
//         // cout << endl;
//         for (int j = 1; j <= n; j++)
//         {
//             if (i + j == 5)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ------------------------------patterns end-----------------------------------------------

// c20
// fibonacci series
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 0, b = 1;
//     if (n == 1)
//     {
//         cout << a;
//     }
//     else if (n == 2)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << "0 "
//              << "1 ";
//         for (int i = 3; i <= n; i++)
//         {
//             int c = a + b;
//             a = b;
//             b = c;
//             cout <<c<< " ";
//         }
//     }
//     return 0;
// }

// c21
// palindrome
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int x=n;
//     int rev=0,rem;
//     while(n!=0){
//         rem=n%10;
//         rev=(rev*10)+rem;
//         n/=10;
//     }
//     n=x;
//     if (n == rev){
//         cout<<"true"<< rev;
//     }
//     else{
//         cout<<"false"<< rev;
//     }
//     return 0;
// }

// c22
// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int x = n, c = 0;
//     while (n != 0)
//     {
//         c++;
//         n /= 10;
//     }
//     n = x;
//     int rem, ans = 0;
//     while (n != 0)
//     {
//         rem = n % 10;
//         ans = ans + pow(rem, c);
//         n /= 10;
//     }
//     if (x == ans)
//     {
//         cout << "is Armstrong no";
//     }
//     else{
//         cout<< "not a Armstrong no";
//     }
//     return 0;
// }

// c23
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int c[1000] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int count=1;
//         if (arr[i] != -1)
//         {
//             for (int j = i +1 ; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     arr[j] = -1;
//                 }
//             }       
//         }
//         c[i] = count;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != -1)
//         {
//             cout << arr[i] << ":" << c[i] << endl;
//         }
//     }

//     return 0;
// }

// c24
// prime nos
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int flag;
//     for (int i = 2; i <= n; i++)
//     {
//         flag = 1;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 0;
//             }
//         }
//         if (flag == 1)
//         {
//             cout << i<<" "<<endl;
//         }
//     }
//     return 0;
// }

// union of array
// c25
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n];
//     int arr2[m];
//     int arr3[n + m];
//     int s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     int l;
//     for (l = 0; l < n; l++)
//     {
//         arr3[l] = arr1[l];
//     }
//     int k=l;

//     for (int i = 0; i < m; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr2[i] == arr3[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             arr3[k++] = arr2[i];
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     return 0;
// }

// intersection of array
// c26
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n];
//     int arr2[m];
//     int arr3[m + n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout<<arr1[i]<<" ";
//                 // arr3[k++] = arr1[i];
//             }
//         }
//     }
//     // for (int i = 0; i < k; i++)
//     // {
//     //     cout << arr3[i] << " ";
//     // }
//     return 0;
// }

// c27
// subset
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n];
//     int arr2[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 c++;
//                 break;
//             }
//         }
//     }
//     if (c == m)
//     {
//         cout << "subset" << endl;
//     }
//     else
//     {
//         cout << "not subset" << endl;
//     }
//     return 0;
// }

// binary to decimal conversion
// c28
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0, rem, t, j = 0;
//     while (n != 0)
//     {
//         /* code */
//         rem = n % 10;
//         if (rem != 0)
//         {
//             t = pow(2, j);
//             ans = ans + t;
//             j++;
//         }
//         // j++;
//         else
//         {
//             j++;
//         }
//         n /= 10;
//     }
//     cout << ans << endl;

//     return 0;
// }

// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string n;
//     cin >> n;
//     int sum = 0, j = 0;
//     int a = n.length();
//     // cout<<a;
//     for (int i = a-1; i >= 0; i--)
//     {
//         if (n[i] == '1')
//         {
//             sum += pow(2, j);
//             j++;
//         }
//         else{
//             j++;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

// c29
// decimal to binary conversion
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0, rem,ten=1,tans;
//     while (n != 0)
//     {
//         /* code */
//         rem = n %2;

//         tans= ten*rem;
//         ans= ans + tans;
//         ten*=10;
//         n /= 2;
//     }
//     cout << ans << endl;

//     return 0;
// }

// c30
// second max and second min
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int mx=INT_MIN;
    int mn=INT_MAX;
    for (int i=0;i<n;i++){
        if (mx<arr[i]){
            mx=arr[i];
        }
        if (mn>arr[i]){
            mn=arr[i];
        }
    }

    // cout<<mx<<mn<<endl;

    int smx= INT_MIN;
    int smin= INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]>smx && arr[i]!=mx){
            smx=arr[i];
        }
    }
    for (int i=0;i<n;i++){
        if (arr[i]<smin && arr[i]!=mn){
            smin=arr[i];
        }
    }
    cout<<smx<<smin<<endl;
    return 0;
}

// c31
// strong no
// #include <iostream>
// using namespace std;
// int fact(int a)
// {
//     int fans = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         fans = fans * i;
//     }
//     return fans;
// }
// int isstrong(int n)
// {
//     int ans = 0;
//     int x = n;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         ans = ans + fact(rem);
//         n /= 10;
//     }

//     if (ans == x)
//     {
//         return 1;
//         // return ans;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int s, e;
//     cin >> s >> e;
//     for (int i = s; i <= e; i++)
//     {
//         if (isstrong(i))
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// c32
// prefect no
// #include <iostream>
// using namespace std;

// bool isperfect(int n)
// {
//     int sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//     }
//     return sum == n;
// }

// int main()
// {
//     int start, end;
//     // cout << "Enter the starting and ending numbers: ";
//     cin >> start >> end;

//     cout << "Perfect numbers in the range " << start << " to " << end << " are: ";
//     for (int i = start; i <= end; i++)
//     {
//         if (isperfect(i))
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// c33
// power of any no
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, p;
//     cin >> n >> p;
//     long long int ans=1;
//     for (int i = 1; i <= p; i++)
//     {
//         ans = ans * n;
//     }
//     cout<<ans;
//     return 0;
// }

// c34
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     char opt;
//     cin >> a >>opt>>b;
//     switch(opt){
//         case '+': cout<<a+b<<endl;
//         break;
//         case '-': cout<<a-b<<endl;
//         break;
//         case '*': cout<<a*b<<endl;
//         break;
//         case '/': cout<<a/b<<endl;
//         break;
//         default:
//         cout<<"enter valid operator.";
//         break;
//     }
//     return 0;
// }

// c
// insertion
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;
//     int pos;
//     cin >> pos;
//     if (pos >= n - 1)
//     {
//         cout << "not valid position";
//     }
//     else
//     {
//         for (int i = n-1; i >= pos-1; i--)
//         {
//             arr[i + 1] = arr[i];
//         }
//         arr[pos - 1] = key;
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// c36
// deletion
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int pos;
//     cin >> pos;
//     if (pos > n - 1)
//     {
//         cout << "the position is not valid";
//     }
//     else
//     {
//         for (int i = pos; i < n; i++)
//         {
//             arr[i - 1] = arr[i];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// c37
// Bubble sort
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             if (arr[j] > arr[j+1]){
//                 int temp= arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// c38
// selection sort
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[i] > arr[j]){
//                 int temp= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// c39
// insertion
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i=1;i<n;i++){
//         int temp = arr[i];
//         int j=i-1;
//         while(j>-1 && temp<arr[j]){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// c40
// missing element
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n-1; i++)
//     {
//         cin >> arr[i];
//     }

//     int total= n * (n+1)/2;
//     for (int i=0;i<n-1;i++){
//         total-=arr[i];
//     }
//     cout<<total<<endl;
//     return 0;
// }

// c41
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if((n%4==0 && n%400 == 0) || (n%100!=0)){
//         cout<<"this is leap year"<<endl;
//     }
//     else{
//         cout<<"this is not a leap year"<<endl;
//     }
//     return 0;
// }

// c42
// no of notes
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[5] = {500, 100, 50, 20, 10};
//     int count, rem;
//     int ans[5]={0};
//     for (int i = 0; i < 5; i++)
//     {
//         count = n / arr[i];
//         ans[i] = count;
//         // cout<<count<<endl;
//         n = n % arr[i];
//     }
//     for (int i=0;i<5;i++){
//         cout<<arr[i]<<"\t:"<<ans[i]<<endl;
//     }
//     return 0;
// }

// c43
// multiply of a matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n][m];
//     int arr2[n][m];
//     int arr3[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << arr1[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << arr2[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             arr3[i][j]=0;
//             for (int l = 0; l < n; l++)
//             {
//                 arr3[i][j]+= arr1[i][l] * arr2[l][j];
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// c44
// transpose of a matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr1[n][m];
//     int arr2[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< arr1[i][j];
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             arr2[i][j]=arr1[j][i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// same as above but this code without allocate new 2D array
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Transpose the matrix in-place
//     for (int i = 0; i < m; i++) {
//         for (int j = i + 1; j < n; j++) {
//             // Swap arr[i][j] and arr[j][i]
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     // Print the transposed matrix
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// insertion sort algorithm by college wallah
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int j = i;
//         while (j >= 1 && arr[j] < arr[j - 1])
//         {
//             int temp = arr[j];
//             arr[j] = arr[j - 1];
//             arr[j - 1] = temp;
//             j--;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i]<< endl;
//     }
//     return 0;
// }