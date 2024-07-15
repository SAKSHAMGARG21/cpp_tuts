// c1
// leet code
// 204 count primes
// this code use this algorithm "sieve of eratosthenes"
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// // void checkprime(int n)
// // {
// //     int c = 0;
// //     for (int i = 2; i <= n; i++)
// //     {
// //         int flag = 1;
// //         for (int j = 2; j < i; j++)
// //         {
// //             if (i % j == 0)
// //             {
// //                 flag = 0;
// //             }
// //         }
// //         if (flag == 1)
// //         {
// //             c++;
// //         }
// //     }
// //     cout << c << " ";
// //     // return 1;
// // }

// // bool isprime(int n)
// // {
// //     for (int j = 2; j < n; j++)
// //     {
// //         if (n % j == 0)
// //         {
// //             return 0;
// //         }
// //     }
// //     return 1;
// // }

// // int countPrimes(int n)
// // {
// //     int c = 0;
// //     for (int j = 2; j < n; j++)
// //     {
// //         if (isprime(j))
// //         {
// //             c++;
// //         }
// //     }
// //     return c;
// // }

// int countPrimes(int n)
// {
//     int c = 0;
//     vector<bool> prime(n + 1, true);

//     prime[0] = prime[1] = false;

//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             c++;
//             for (int j = 2 * i; j < n; j = j + i)
//             {
//                 prime[j] = 0;
//             }                                                                                                                                  
//         }
//     }
//     return c;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     // if (countprime(n))
//     // {
//     //     cout << "found";
//     // }
//     // else
//     // {
//     //     cout << "not found";
//     // }

//     int ans=countPrimes(n);
//     cout<<ans<<endl;

//     return 0;
// }

// homwork
// segmented sieve

// -----------------------------------------------------------------------------------------------------------------
// c2
// gcd/hcf
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int maxno = (n > m) ? n : m;
//     int minno = (n < m) ? n : m;

//     int hcf=minno;

//     while(maxno-hcf!=0){
//         maxno=maxno-hcf;
//     }

//     cout<<maxno<<endl;

//     return 0;
// }

// c3
// // lcm of two nos
// #include <iostream>
// using namespace std;
// // Function to find the LCM of two numbers
// int findLCM(int a, int b) {
//     int maxNum = (a > b) ? a : b;
//     int minNum = (a < b) ? a : b;
//     int lcm = maxNum;

//     while (lcm % minNum != 0) {
//         lcm += maxNum;
//     }

//     return lcm;
// }
// int main() {
//     int num1, num2;

//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     int lcm = findLCM(num1, num2);

//     std::cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << std::endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// // LCM of 15 and 20 is 60

// int main() {
//     int a = 15, b = 20, max_num, flag = 1;
//     max_num = (a > b) ? a : b; // Use ternary operator to get the larger number

//     while (flag) {
//         if (max_num % a == 0 && max_num % b == 0) {
//             cout << "LCM of " << a << " and " << b << " is " << max_num;
//             break;
//         }
//         ++max_num;
//     }


//     return 0;
// }


// #include <iostream>
// #include <numeric>
// #include<bits/stdc++.h>
// //  Note that this function is available since C++17.
// using namespace std;

// int main() {
//     cout << "LCM(10, 20) = " << lcm(10, 20) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x = 50;
//     int y = 100;
//     int temp, hcf;

//     if (x > y) {
//         temp = x;
//         x = y;
//         y = temp;
//     }

//     for (int i = 1; i < (x + 1); i++) {
//         if (x % i == 0 && y % i == 0)
//             hcf = i;
//     }

//     cout << "HCF of " << x << " and " << y << " is: " << hcf;
//     return 0;
// }



// by using euclid's algo

// -----------------------------------------------------------------------------------------------------------------
// c4
// hcf
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     if (n==0){
//         cout<<m;
//     }
//     else if (m==0){
//         cout<<n;
//     }
//     while(n!=m){
//         if(n>m){
//             n-=m;
//         }
//         else{
//             m-=n;
//         }
//     }
//     cout<<n;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c5
// code stdio
// Modular Exponentiation
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int modularExponentiation(int x, int n, int m) {
// 	// Write your code here.
// 	int res=1;
// 	while(n>0){
// 		if (n&1){
// 			res=(1LL*res*(x)%m)%m;
// 		}
// 		x=(1LL*(x)%m*(x)%m)%m;
// 		n=n>>1;
// 	}
// 	return res;
// }
// int main()
// {
//     int n, x,m;
//     cin >> x >>n>> m;
//     int ans=modularExponentiation(x,n,m);
//     cout<<ans;
//     return 0;
// }

// homwork 

// pigeonhok principal
// catalon number
// inclusion ans exclusion principal

// Q. factorial of 212!%m where m=10^9 + 7;