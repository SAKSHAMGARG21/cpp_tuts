// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void srctodest(int src ,int dest){
//     cout<<src<<" to "<<dest<<endl;
//     if (src==dest){
//         return ;
//     }

//     src++;
//     srctodest(src,dest);
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     srctodest(n,m);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// leet code
// 509. Fibonacci Number
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n)
// {
//     int ans = 0;
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }
// int main()
// {
//     int n, m;
//     cin >> n;
//     int ans=fib(n);
//     cout<<ans<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// long long countDistinctWays(int nStairs) {
//     if (nStairs <= 1) {
//         return 1;
//     }

//     long long a = 1;
//     long long b = 1;
//     long long c;

//     for (int i = 2; i <= nStairs; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return b;
// }

// int main() {
//     int testCases[] = {51};

//     for (int i = 0; i < 1; i++) {
//         int n = testCases[i];
//         long long result = countDistinctWays(n);
//         cout << result << endl;
//     }

//     return 0;
// }

// c3
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int countWays(int n)
// {
//     if (n==1){
//         return 1;
//     }
//     if (n == 2 )
//     {
//         return 2;
//     }
//     return countWays(n - 1) + countWays(n - 2);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number of stairs: ";
//     cin >> n;
//     int ways = countWays(n);
//     cout << "Number of ways to reach the top: " << ways << endl;
//     return 0;
// }


//c3
// #include <bits/stdc++.h>
// using namespace std;
// int countWays(int n)
// {
//     if (n == 0 || n==1)
//     {
//         return 1;
//     }
//     if (n==2){
//         return 2;
//     }
//     return countWays(n - 1) + countWays(n - 2) +countWays(n-3);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number of stairs: ";
//     cin >> n;
//     int ways = countWays(n);
//     cout << "Number of ways to reach the top: " << ways << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void saydigit(int n,string arr[]){
//     if (n==0){
//         return ;
//     }

//     int digit = n%10;
//     n/=10;

//     saydigit(n,arr);

//     cout<<arr[digit]<<" ";
// }
// int main()
// {
//     int n, m;
//     cin >> n;
//     string arr[10]={"Zero","one","two","three","four","five","six","seven","eight","nine"};
//     saydigit(n,arr);
//     return 0;
// }