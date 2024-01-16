#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    int i=2;
    int max=-1;
    while(n>=i){
        if (n%i==0){
            if (i>max){
                max=i;
            }
            n/=i;
        }
        else{
            i++;
        }
    }
    cout<<max<<endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;

//     if (n <= 1) {
//         cout << "Prime factorization is not defined for numbers less than or equal to 1." << endl;
//         return 1;  // Return an error code
//     }

//     int i = 2;
//     int max = -1;

//     while (i<=n) {
//         if (n % i == 0) {
//             max = i;
//             n /= i;
//         } else {
//             i++;
//         }
//     }
//     cout<<n<<endl;
//     if (n > 1) {
//         max = n;  // If the remaining n is greater than 1, it is a prime factor
//     }

//     cout << "Largest prime factor: " << max << endl;

//     return 0;
// }
