// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n ){
//     if (n==0){
//         return 0;
//     }
//     int smallpbl=factorial(n-1);
//     int bigpbl=n+smallpbl;
//     return bigpbl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

// c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n ){
//     if (n==0){
//         return 1;
//     }
//     int smallpbl=factorial(n-1);
//     int bigpbl=n*smallpbl;
//     return bigpbl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void counting(int n){
//     if (n==0){
//         return ;
//     }
//     // head recursive relation
//     // counting(n-1);
//     cout<<n<<endl;
//     // tail recursive relation
//     counting(n-1);

// }
// int main()
// {
//     int n, m;
//     cin >> n;
//     counting(n);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int power(int m,int n){
//     if (n==0){
//         return 1;
//     }
//     int sc=power(m,n-1);
//     int bc=m*sc;

//     return bc;

// }
// int main()
// {
//     int n, m;
//     cin >> m>>n;
//     int ans=power(m,n);
//     cout<<ans<<endl;

//     return 0;
// }

