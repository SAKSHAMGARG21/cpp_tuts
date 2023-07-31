// #include <iostream>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a, b;
//     char op;
//     // cout << "Enter the no a and b :" << endl;
//     cin >> a >> op >> b;
//     // cout << "Enter the operator:" << endl;
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

// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     return 0;
// }

#include <iostream>
#include<climits>
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int a=6;
    int b=4;
    int c=a^b;
    cout<<c<<endl;
    return 0;
}

// #include <iostream>
// #include<climits>
// #include "bits/stdc++.h"
// using namespace std;
// int swapalternate(int arr[],int n){
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int var=swapalternate(arr,n);
//     // cout<<var<<endl;

//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

#include <iostream>
#include<climits>
#include "bits/stdc++.h"
using namespace std;
int swapalternate(vector<int> &arr){

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> narr=swapalternate(arr,n);
    cout<<narr<<endl;

    return 0;
}




