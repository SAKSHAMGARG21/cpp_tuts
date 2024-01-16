// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// private:
//     bool issafe(int x, int y, int n, vector<vector<int>> &vist, vector<vector<int>> &m)
//     {
//         return (x >= 0 && x < n) && (y >= 0 && y < n) && vist[x][y] == 0 && m[x][y] == 1;
//     }

//     void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &vist, vector<string> &ans, string path)
//     {
//         if (x == n - 1 && y == n - 1)
//         {
//             ans.push_back(path);
//             return;
//         }

//         vist[x][y] = 1;

//         // down
//         int nx = x + 1, ny = y;
//         if (issafe(nx, ny, n, vist, m))
//         {
//             path.push_back('D');
//             solve(m, n, nx, ny, vist, ans, path);
//             path.pop_back();
//         }

//         // left
//         nx = x, ny = y - 1;
//         if (issafe(nx, ny, n, vist, m))
//         {
//             path.push_back('L');
//             solve(m, n, nx, ny, vist, ans, path);
//             path.pop_back();
//         }

//         // right
//         nx = x, ny = y + 1;
//         if (issafe(nx, ny, n, vist, m))
//         {
//             path.push_back('R');
//             solve(m, n, nx, ny, vist, ans, path);
//             path.pop_back();
//         }
//         // up
//         nx = x - 1, ny = y;
//         if (issafe(nx, ny, n, vist, m))
//         {
//             path.push_back('U');
//             solve(m, n, nx, ny, vist, ans, path);
//             path.pop_back();
//         }
//         vist[x][y] = 0;
//     }

// public:
//     vector<string> findPath(vector<vector<int>> &m, int n)
//     {
//         vector<string> ans;
//         if (m[0][0] == 0)
//         {
//             return ans;
//         }

//         vector<vector<int>> vist(n, vector<int>(n, 0));
//         int sx = 0, sy = 0;
//         string path = "";
//         solve(m, n, sx, sy, vist, ans, path);
//         return ans;
//     }
// };

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin>>n;
//         vector<vector<int>> m(n,vector<int>(n,0));
//         for (int i=0;i<n;i++){
//             for (int j=0;j<n;j++){
//                 cin>>m[i][j];
//             }
//         }

//         Solution obj;
//         vector<string>result =obj.findPath(m,n);

//         sort(result.begin(),result.end());

//         if (result.size()==0){
//             cout<<-1;
//         }
//         else{
//             for (int i=0;i<result.size();i++){
//                 cout<<result[i]<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

