// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n ;
//     int rem,rev=0;
//     while(n!=0){
//         rem=n%10;
//         if ((rev > INT_MAX/10) || (rev < INT_MIN/10)){
//             cout<<"0"<<endl;
//             break;
//         }
//         rev=(rev*10)+rem;
//         n/=10;
//     }

//     cout<<rev<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ten=1,add=0,m=1,rem;
//     while(n!=0){
//         rem=n%2;
//         m=rem*ten;
//         add=add+m;
//         ten*=10;
//         n/=2;
//     }
//     // cout<<add;
//     int newval,nm,ad=0,t=1,remn;;
//     while(add!=0){
//         rem=add%10;
//         if (rem==0){
//             newval=1;
//         }
//         else{
//             newval=0;
//         }

//         nm=newval*t;
//         ad=ad+nm;
//         t*=10;
//         add/=10;
//     }
//     // cout<<ad;
//     int r,a,j=0;
//     while(ad!=0){
//         r=ad%10;
//         if (r!=0){
//             a=r*pow(2,j);
//         }
//         j++;
//         ad/=10;
//     }
//     cout<<a;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m;
//     cin >> m;
//     int n=m;
//     int mask=0;
//     while (n != 0)
//     {
//         mask = (mask << 1) | 1;
//         n = n >> 1;
//     }
//     int ad=(~m) & mask;
//     cout<<ad;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> insterarr(vector<int> &arr,vector<int> &arr1){
//     sort(arr.begin(),arr.end());
//     sort(arr1.begin(),arr1.end());
//     set<int> st;
//     vector<int> ans;
//     int i=0;
//     int j=0;
//     while(i<arr.size() && j<arr1.size()){
//         if (arr[i]==arr1[j]){
//             st.insert(arr[i]);
//             i++;
//             j++;
//         }
//         else if (arr[i]<arr1[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     for (int i:st){
//         ans.push_back(i);
//     }
//     return ans;
// }
// int main()
// {
//     int n,m;
//     cin >> n>>m;
//     vector<int> arr(n);
//     vector<int> arr1(m);
//     for (int i = 0; i < n; i++)
//     {
//
//         cin>>arr[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//
//         cin>>arr1[i];
//     }

//     vector<int> ans=insterarr(arr,arr1);

//     if (ans.empty()){
//         cout<<"there is no common ilement";
//     }
//     else{
//         for (int i:ans){
//             cout<<i<<" ";
//         }
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int lastocc(vector<int> &arr,int key){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if (arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if (arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }
// int firstocc(vector<int> &arr,int key){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if (arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if (arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int lstocc=lastocc(arr,3);
//     int fstocc=firstocc(arr,3);
//     cout<<lstocc<<" "<<fstocc<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int pekele(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int ans =-1;
//     while(s<e){
//         int mid=(s+e)/2;
//         if (arr[mid]<arr[mid+1]){
//             ans=mid+1;
//             s=mid+1;
//         }
//         else{
//             e= mid;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans=pekele(arr,n);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c6
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// long long int squaroot(int n)
// {
//     int s = 0;
//     int e = n;
//     long long int ans = -1;
//     while (s <= e)
//     {
//         long long int mid = (s + e) / 2;
//         if (mid * mid == n)
//         {
//             return mid;
//         }
//         else if (mid * mid > n)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// double pointval(int n, int decimal, int a)
// {
//     double factor = 1;
//     double ans = a;
//     for (int i = 0; i < decimal; i++)
//     {
//         factor /= 10;
//         for (double j = 0; j * j < n; j += factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = squaroot(n);
//     double fans = pointval(n, 3, ans);
//     // cout << ans << endl;
//     cout << fans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c7
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool ispossible(vector<int> &arr, int n, int b, int mid)
// {
//     int e = arr.size();
//     int pagec = 0;
//     int stcount = 1;
//     for (int i = 0; i < e; i++)
//     {
//         if (pagec + arr[i] <= mid && b<n){
//             pagec+=arr[i];
//         }
//         else{
//             stcount++;
//             if ((stcount > b || arr[i]>mid) || b>n) {
//                 return false;
//             }
//             pagec=arr[i];
//         }
//     }
//     return true;
// }
// int binarysch(vector<int> &arr, int n, int b)
// {
//     int page = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         page += arr[i];
//     }
//     int s = 0;
//     int e = page;
//     int ans = -1;
//     while (s < e)
//     {
//         int mid = (s + e) / 2;
//         if (ispossible(arr, n, b, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }

//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = binarysch(arr,n,m);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c8
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

//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j > -1 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c10
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void ispossible(string &s)
// {
//     int sl = s.length();
//     for (int i = 0; i < sl; i++)
//     {
//         if (islower(s[i]))
//         {
//             s[i] = toupper(s[i]);
//         }
//         else if (!isalnum(s[i]) || s[i] == ' ')
//         {
//             s[i] = -1;
//         }
//     }
// }
// bool checkplandrome(string s)
// {
//     ispossible(s);

//     int sl = s.length();
//     string ans="";

//     for (int i = 0; i < sl; i++)
//     {
//         if (s[i]!=-1)
//         ans+=s[i];
//     }
//     // cout<<ans<<endl;

//     int st = 0;
//     int e = ans.size() - 1;

//     while (st <= e)
//     {
//         if (ans[st] != ans[e])
//         {
//             return 0;
//         }
//         else
//         {
//             st++;
//             e--;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     string s;
//     // cout << "enter the string :" << endl;
//     getline(cin, s);

//     bool ans = checkplandrome(s);
//     cout << (ans ? "true" : "false");

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c11
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void revstring(string &s)
// {
//     int sl = s.length();
//     int st = 0;
//     int k = 0;
//     string temp = s;
//     for (int i = 0; i <= sl; i++)
//     {
//         if (temp[i] == ' ' || i == sl)
//         {
//             for (int j = i - 1; j >= st; j--)
//             {
//                 s[k++] = temp[j];
//             }
//             if (i != sl)
//             {
//                 s[k++] = ' ';
//             }
//             st = i + 1;
//         }
//     }
//     s.resize(k);
// }
// int main()
// {
//     string s;
//     getline(cin, s);

//     revstring(s);
//     cout << s << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c11
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void revstring(string &s)
// {
//     int sl = s.size();
//     int st = 0;
//     for (int i = 0; i <=sl; i++)
//     {
//         if (s[i] == ' ' || i == sl)
//         {
//             int e = i - 1;
//             while (st <= e)
//             {
//                 swap(s[st++], s[e--]);
//             }
//             st = i + 1;
//         }
//     }
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     revstring(s);
//     cout << s << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// char mxocc(string &s){
//     int sl=s.size();
//     int i=0;
//     int cnt[26]={0};
//     while(i<sl){
//         int idx=s[i] - 'a';
//         cnt[idx]++;
//         i++;
//     }

//     int j=0;
//     int mx=-1;
//     int ans=-1;
//     while(j<26){
//         if (cnt[j]>mx){
//             ans=j;
//             mx=cnt[j];
//         }
//         j++;
//     }

//     char an='a' + ans;
//     return an;
// }
// int main()
// {
//     string s;
//     getline(cin, s);

//     char ans=mxocc(s);

//     cout<<ans<<endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    return 0;
}