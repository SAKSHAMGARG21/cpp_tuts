// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool issorted(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     else if (arr[0] > arr[1])
//     {
//         return 0;
//     }
//     else
//     {
//         bool ans = issorted(arr + 1, n - 1);
//         return ans;
//     }
// }
// int main()
// {
//     int n=6, m;
//     // cin >> n;
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int ans = issorted(arr, n);
//     if (ans)
//     {
//         cout << "sorted" << endl;
//     }
//     else
//     {
//         cout << " not sorted" << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c/2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int sumarr(int *arr, int n)
// {
//     int sum = 0;
//     if (n == 1)
//     {
//        return arr[0];
//     }
//     else
//     {
//         // sum += arr[0];

//         int ans=arr[0]+sumarr(arr + 1, n - 1);
//         return ans;
//     }
// }
// int main()
// {
//     int n = 6, m;
//     int arr[n] = {1, 2, 3, 4, 5, 6};
//     // cin >> n >> m;

//     int ans = sumarr(arr, n);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool linersearch(int *arr, int n,int k)
// {
//     if (n == 0)
//     {
//         return false;
//     }

//     if (arr[0]==k){
//         return true;
//     }

//     else{
//         bool ans=linersearch(arr+1,n-1,k);
//         return ans;
//     }
// }
// int main()
// {
//     int n = 6, m,k=7;
//     // cin >> n ;
//     int arr[n] = {1, 2, 3, 4, 5, 6};
//     bool ans = linersearch(arr, n,k);
//     if (ans)
//     {
//         cout << "found" << endl;
//     }
//     else
//     {
//         cout << "not found" << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool binary_search_using_recursion(int *arr,int s,int e,int k){
//     if (s>e){
//         return false;
//     }

//     int mid=s+(e-s)/2;
//     if (arr[mid]== k){
//         return true;
//     }
//     else if (arr[mid]<k){
//         return binary_search_using_recursion(arr,mid+1,e,k);
//     }
//     else{
//         return binary_search_using_recursion(arr,s,mid-1,k);
//     }
// }
// int main()
// {
//     int n=6, k=4;
//     // cin >> n >> m;
//     int arr[n]={1,2,3,4,5,6};
//     if (binary_search_using_recursion(arr,0,6,k)){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     return 0;
// }

// lcm code using recursion
// -----------------------------------------------------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// int lcm(int a, int b) {
//     if (a == 0 || b == 0)
//         return 0;
//     return (a * b) / gcd(a, b);
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int ans = lcm(n, m);
//     cout << ans << endl;

//     return 0;
// }
