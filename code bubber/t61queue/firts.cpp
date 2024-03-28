// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool isplain(string n)
// {
//     string x = n;
//     string rev = "";

//     for (int i = n.size()-1; i >= 0; i--)
//     {
//         rev += n[i];
//     }

//     // cout << rev << " " << x << endl;
//     if (rev != x){
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[1000] = {0};
//     int l = 0;
//     int j = 0;
//     int ans = 0;
//     for (int i = 1; i <= 1000; i++)
//     {
//         int val = i;
//         string revs = "";
//         while (val != 0)
//         {
//             int r = val % 2;
//             revs = to_string(r) + revs; // multiply by 2 instead of 10
//             val /= 2;
//         }

//         if (isplain(revs)){
//             if (j<n){
//                 ans=i;
//                 j++;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }
