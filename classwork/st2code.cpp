// -----------------------------------------------------------------------------------------------------------------
// c1
// string rotation
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     int k=2;
//     string temp="";
//     for (int i=k;i<s.length();i++){
//         temp.push_back(s[i]);
//     }
//     for (int i=k-1;i>=0;i--){
//         temp.push_back(s[i]);
//     }
//     cout<<temp<<endl;;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// wave print
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int narr[n*m];
//     int l=0;
//     for (int i=0;i<m;i++){
//         if (i&1){
//             for (int j=n-1;j>=0;j--){
//                 narr[l++]=arr[j][i];
//             }
//         }
//         else {
//             for (int j=0;j<n;j++){
//                 narr[l++]=arr[j][i];
//             }
//         }
//     }
//     for (int i=0;i<n*m;i++){
//         cout<<narr[i]<<" ";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// transpose of a matrix
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int narr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             narr[j][i]=arr[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<narr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int narr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int sum1=0;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             if (i==j){
//                 sum1+=arr[i][j];
//             }
//         }
//     }
//     int sum2=0;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             if (i+j==2){
//                 sum2+=arr[i][j];
//             }
//         }
//     }

//     cout<<sum1<<" "<<sum2<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     // s[0]=toupper(s[0]);
//     // s[0]=s[0] - 'a' +'A';
//     // cout<<s<<endl;

//     // for (int i=0;i<s.size();i++){
//     //     s[i]=s[i] - 'a' + 'A';
//     // }
//     // // cout<<s<<endl;
//     // for (int i=0;i<s.size();i++){
//     //     s[i]=s[i] - 'A' + 'a';
//     // }
//     // cout<<s<<endl;

//     for (int i=0;i<s.size();i++){
//         if (s[i]>='A' && s[i]<='Z'){
//             s[i]=s[i] - 'A' +'a';
//         }
//         else{
//             s[i]=s[i] - 'a'  + 'A';
//         }
//     }

//     cout<<s<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c7
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int add(int n){
//     if (n==0){
//         return 0;
//     }
//     int s=add(n-1);
//     int ans=n+s;
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n ;
//     int ans=add(n);
//     cout<<ans<<endl;
//     return 0;
// }

// c8
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int add(int n){
//     if (n==1){
//         return 1;
//     }
//     // int s=add(n-1);
//     // int ans=n*s;
//     return n*add(n-1);
// }
// int main()
// {
//     int n;
//     cin >> n ;
//     int ans=add(n);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int ti = 0;
//     int k = 0;
//     int p = 0;
//     int t[100];
//     int mx = -1;
//     int l = 0;
//     int arr[100];
//     int ss = s.length();
//     for (int i = 0; i < ss; i++)
//     {
//         if (s[i] == ' ' && i != ss)
//         {
//             // for (int j = ti; j < i; j++)
//             // {
//             //     arr[l] = k++;
//             // }
//             cout << i - ti << endl;
//             ti += i + 1;
//         }
//         // l++;
//     }
//     for (int i = 0; i < l; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     // cout<<s[]<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     int start = 0;
//     int l = 0;
//     int arr[100];
//     int idx[100];
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == ' ')
//         {
//             idx[p++]=i;
//             arr[l++] = i - start;
//             start = i + 1;
//         }
//     }
//     arr[l++] = s.length() - start; 
//     for (int i = 0; i < l; i++)
//     {
//         for (int j = 0; j < l - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     int tmax = arr[l - 3];
//     for (int i=0;i<n;i++){

//     }

//     // for (int i = 0; i < l; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     // int sp=0;
//     // for (int i = 0; i < s.length(); i++)
//     // {
//     //     if (s[i] == ' ')
//     //     {

//     //         // if (i - sp == tmax)
//     //         // {
//     //         //     // cout<<;
//     //         //     for (int j = sp; j <=i; j++)
//     //         //     {
//     //         //         cout << s[j];
//     //         //     }
//     //         // }
//     //         sp = i ;
//     //     }
//     //     // cout<<s[10];
//     // }

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
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
//     int mx = -1;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (mx < arr[i])
//         {
//             ans = i;
//             mx = arr[i];
//         }
//     }
//     // cout<<ans<<mx;
//     int flag=0;
//     for (int i = 0; i < ans - 1; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             flag = 1;
//         }
//         else{
//             flag=0;
//         }
//     }
//     for (int i = ans + 1; i < n; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             flag = 1;
//         }
//         else{
//             flag=0;
//         }
//     }
//     if (flag==1){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }


//     return 0;
// }
