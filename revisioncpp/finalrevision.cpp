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
// c9
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
// c10
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
// c10
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
// c11
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
// c12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string fun(string &s,string &part){
//     while(s.length()!=0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main()
// {
//     string s,part;
//     cin>>s>>part;

//     string ans=fun(s,part);
//     cout<<ans<<endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c13
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// bool istrue(int cnt1[], int cnt2[])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (cnt1[i] != cnt2[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// bool fun(string s, string p)
// {
//     int cnt1[26] = {0};
//     int cnt2[26] = {0};
//     int i = 0;
//     while (i < s.size())
//     {
//         int idx = s[i] - 'a';
//         cnt1[idx]++;
//         i++;
//     }

//     int wnds = s.length();

//     int j = 0;
//     while (j < wnds && j < p.length())
//     {
//         int idx = s[j] - 'a';
//         cnt2[idx]++;
//         j++;
//     }

//     if (istrue(cnt1, cnt2))
//     {
//         return 1;
//     }

//     while (j < p.length())
//     {
//         int newch = s[j] - 'a';
//         cnt2[newch]++;

//         int oldch = s[j - wnds] - 'a';
//         cnt2[oldch]--;

//         if (istrue(cnt1, cnt2))
//         {
//             return 1;
//         }
//         j++;
//     }
// }
// int main()
// {
//     string s, p;
//     cin >> s >> p;
//     bool ans = fun(s, p);
//     cout <<(ans ? "true" : "false") << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c14
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string fun(string &s)
// {
//     int j = -1;

//     for (int i = 0; i < s.size(); i++)
//     {

//         if (j >= 0 && s[i] == s[j])
//         {
//             j--;
//         }
//         else {
//             j++;
//             s[j]=s[i];
//         }
//     }

//     string rest=s.substr(0,j+1);
//     return rest;
// }
// int main()
// {
//     string s;
//     cin >> s;

//     string ans = fun(s);
//     cout << ans << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string fun(string &s){
//     stack<char> ch;
//     for (char c:s)
//     {
//         if (!ch.empty() && c==ch.top()){
//             ch.pop();
//         }
//         else{
//             ch.push(c);
//         }
//     }
//     string reslt="";
//     while(!ch.empty()){
//         reslt=ch.top() + reslt;
//         ch.pop();
//     }
//     return reslt;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     string ans=fun(s);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c15
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// string fun(string &s)
// {

//     int i = 0;
//     string reslt = "";
//     while (i < s.size())
//     {
//         int j = i + 1;
//         while (j < s.size() && s[i] == s[j])
//         {
//             j++;
//         }

//         reslt.push_back(s[i]);
//         int cnt = j - i;

//         if (cnt > 1)
//         {
//             string ans = to_string(cnt);
//             for (char c : ans)
//             {
//                 reslt.push_back(c);
//             }
//         }
//         i=j;
//     }
//     return reslt;
// }
// int main()
// {
//     string s;
//     cin >> s;

//     string ans = fun(s);
//     cout << ans << endl;
//     return 0;
// }

// _____________________________________2D matrix _____________________________________________________
// c16
// 1 2 3
// 4 5 6
// 7 8 9
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> spiralprint(vector<vector<int>> &arr)
// {
//     int nRows = arr.size();
//     int nCols = arr[0].size();
//     vector<int> tarr;
//     int l = 0;
//     int top = 0, botm = nRows - 1, left = 0, right = nCols - 1;
//     while (top <= botm && left <= right)
//     {
//         for (int i = top; i <= right; i++)
//         {
//             tarr.push_back(arr[top][i]);
//         }
//         top++;

//         for (int i = top; i <= botm; i++)
//         {
//             tarr.push_back(arr[i][right]);
//         }
//         right--;

//         if (top <= botm)
//             for (int i = right; i >= left; i--)
//             {
//                 tarr.push_back(arr[botm][i]);
//             }
//         botm--;

//         if (left <= right)
//             for (int i = botm; i >= top; i--)
//             {
//                 tarr.push_back(arr[i][left]);
//             }
//         left++;
//     }
//     return tarr;
// }

// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     vector<int> ans = spiralprint(arr);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     // for (auto i : ans)
//     // {
//     //     cout << i << " ";
//     // }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 1 2 3
// 4 5 6
// 7 8 9
// c17
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void adgcentrotation(vector<vector<int>> &arr){
//     int ns=arr.size();
//     int cs=arr[0].size();

//     int top=0,botm=ns-1,left=0,right=cs-1;

//     int curr;
//     while(top<=botm && left<=right){
//         int prev=arr[top+1][left];

//         for (int i = left; i <=right; i++)
//         {
//             curr=arr[top][i];
//             arr[top][i]=prev;
//             prev=curr;
//         }
//         top++;
//         for (int i = top; i <= botm; i++)
//         {
//             curr=arr[i][right];
//             arr[i][right]=prev;
//             prev=curr;
//         }
//         right--;
//         for (int i = right; i >=left; i--)
//         {
//             curr=arr[botm][i];
//             arr[botm][i]=prev;
//             prev=curr;
//         }
//         botm--;
//         for (int i = botm; i >=top; i--)
//         {
//             curr=arr[i][left];
//             arr[i][left]=prev;
//             prev=curr;
//         }
//         left++;
//     }
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;
//     adgcentrotation(arr);

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // for (auto i : ans)
//     // {
//     //     cout << i << " ";
//     // }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 1 2 3
// 4 5 6
// 7 8 9
// c18
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void waveprint(vector<vector<int>> &arr){
//     int ns=arr.size();
//     int cs=arr[0].size();

//     for (int i = 0; i < cs; i++)
//     {
//         if (i&1){
//             for (int j = ns-1; j >=0; j--)
//             {
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         else{
//             for (int j = 0; j < ns; j++)
//             {
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//     }
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     waveprint(arr);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c19
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void transpose(vector<vector<int>> &arr)
// {
//     int ns = arr.size();
//     int cs = arr[0].size();

//     for (int i = 0; i < ns; i++)
//     {
//         for (int j = i + 1; j < cs; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     transpose(arr);
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c20
// 1 2  9 8
// 3 4  7 6
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void multiply(vector<vector<int>> &arr, vector<vector<int>> &arr1)
// {
//     int ar = arr.size();
//     int ac = arr[0].size();
//     vector<vector<int>> arv(ar, vector<int>(ac, 0));

//     for (int i = 0; i < ar; i++)
//     {
//         for (int j = 0; j < ac; j++)
//         {
//             arv[i][j] = 0;
//             for (int l = 0; l < ar; l++)
//             {
//                 arv[i][j] += arr[i][l] * arr1[l][j];
//             }
//         }
//     }
//     for (int i = 0; i < ar; i++)
//     {
//         for (int j = 0; j < ac; j++)
//         {
//             cout << arv[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));
//     vector<vector<int>> arr1(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     multiply(arr, arr1);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 1 2 3
// 4 5 6
// 7 8 9
// c21
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void rotataktime(vector<vector<int>> &arr, int k)
// {
//     int ar = arr.size();
//     int ac = arr[0].size();
//     k = k % 4;
//     vector<vector<int>> nar(ar, vector<int>(ac));
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = 0; j < ar; j++)
//         {
//             for (int l = 0; l < ac; l++)
//             {
//                 nar[l][j] = arr[ar - j - 1][l];
//             }
//         }
//         arr = nar;
//     }
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     int k;
//     cin >> k;
//     rotataktime(arr, k);
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void dignolsum(vector<vector<int>> &arr)
// {
//     int ar = arr.size();
//     int ac = arr[0].size();

//     int sum1 = 0;
//     int sum2 = 0;
//     int c=0;
//     for (int i = 0; i < ar; i++)
//     {
//         for (int j = 0; j < ac; j++)
//         {
//             if (i==j && i+j==ar-1){
//                 c=arr[i][j];
//             }
//             if (i == j)
//             {
//                 sum1 += arr[i][j];
//             }
//             else if (i + j == ar - 1)
//             {
//                 sum2 += arr[i][j];
//             }
//         }
//     }

//     cout<<sum1-c<<" "<<sum2<<endl;
// }
// int main()
// {
//     int nRows, nCols;
//     cin >> nRows >> nCols;
//     vector<vector<int>> arr(nRows, vector<int>(nCols));

//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < nRows; i++)
//     {
//         for (int j = 0; j < nCols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     dignolsum(arr);
//     // cout << ans << endl;
//     return 0;
// }
