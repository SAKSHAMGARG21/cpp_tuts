// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n, m;
//     // cin >> n >> m;
//     // int arr[n][m];

//     // row wise input
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout<< arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     // column wise input
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[j][i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int arr[3][4]={1,2,3,4,5,6,7,8,9,5,2,3};
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,5,2,3}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<< arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// linear search
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool ispresent(int arr[][100],int key,int rs,int cs){
//     for (int i=0;i<rs;i++){
//         for (int j=0;j<cs;j++){
//             if (arr[i][j]==key){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[100][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int key;
//     cin>>key;
//     if(ispresent(arr,key,n,m)){
//         cout<<"Element is found"<<endl;
//     }
//     else{
//         cout<<"Element is not found"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool f(int n, int m, int matrix[][100],int target) {
//     int row = n;
//     int col = m;
//     int rowindex = 0;
//     int colindex = col - 1;
//     while (rowindex < row && colindex >= 0) {
//         int element = matrix[rowindex][colindex];
//         if (element == target) {
//             return 1;
//         }
//         if (element < target) {
//             rowindex++;
//         } else {
//             colindex--;
//         }
//     }
//     return 0;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int arr[100][100];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int target;
//     cin >> target;
//     bool found = f(n, m,arr, target);
//     if (found) {
//         cout << "Target found" << endl;
//     } else {
//         cout << "Target not found" << endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// row wise sum
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void rowisesum(int arr[][100], int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[100][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     rowisesum(arr, n, m);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c5
// largest row sum
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int rowisesum(int arr[][100], int n, int m)
// {
//     int sum;

//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//         // cout << endl;
//         if (mx < sum)
//         {
//             mx = sum;
//         }
//     }
//     return mx;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[100][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int ans = rowisesum(arr, n, m);
//     cout<<endl;
//     cout << ans;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c6
// code stdio
// print like a wave
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
//     int m = mCols;
//     int n = nRows;
//     vector<int> narr;

//     for (int i = 0; i < m; i++) {
//         if (i & 1) {
//             for (int j = n - 1; j >= 0; j--) {
//                 narr.push_back(arr[j][i]);
//             }
//         } else {
//             for (int j = 0; j < n; j++) {
//                 narr.push_back(arr[j][i]);
//             }
//         }
//     }

//     return narr;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     vector<int> ans = wavePrint(arr, n, m);
//     for (auto i : ans) {
//         cout << i << " ";
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c7
// leet code
// 54 spiral print
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> spiralOrder(vector<vector<int>> &arr)
// {
//     int rs = arr.size();
//     int cs = arr[0].size();
//     vector<int> narr;
//     int top = 0, botm = rs - 1, left = 0, right = cs - 1;
//     while (top <= botm && left <= right)
//     {
//         for (int i = left; i <= right; i++)
//         {
//             narr.push_back(arr[top][i]);
//         }
//         top++;
//         for (int j = top; j <= botm; j++)
//         {
//             narr.push_back(arr[j][right]);
//         }
//         right--;
//         if (top <= botm)
//         {
//             for (int j = right; j >= left; j--)
//             {
//                 narr.push_back(arr[botm][j]);
//             }
//             botm--;
//         }
//         if (left <= right)
//         {
//             for (int i = botm; i >= top; i--)
//             {
//                 narr.push_back(arr[i][left]);
//             }
//             left++;
//         }
//     }
//     return narr;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n,vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     vector<int> ans=spiralOrder(arr);
//     for (auto i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c8
// leetcode
// 48 rotate 90
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void rotate(vector<vector<int>> &arr)
// {
//     int rs = arr.size();
//     int cs = arr[0].size();
//     vector<vector<int>> narr(rs,vector<int>(cs));
//     for (int i = 0; i < rs; i++)
//     {
//         for (int j = 0; j < cs; j++)
//         {
//             narr[j][i]=arr[rs-i-1][j];
//         }
//     }
//     // int nrs=narr.size();
//     // int ncs=narr[0].size();
//     // for (int i = 0; i < rs; i++)
//     // {
//     //     for (int j = 0; j < cs; j++)
//     //     {
//     //         arr[i][j] = narr[i][j];
//     //     }
//     // }
//     arr=narr;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n,vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     rotate(arr);

//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c8
// #include <iostream>
// #include <vector>
// using namespace std;

// void rotate(vector<vector<int>> &matrix) {
//     int n = matrix.size();

//     for (int layer = 0; layer < n / 2; layer++) {
//         int first = layer;
//         int last = n - 1 - layer;

//         for (int i = first; i < last; i++) {
//             int offset = i - first;

//             // Save the top element
//             int top = matrix[first][i];

//             // Move left to top
//             matrix[first][i] = matrix[last - offset][first];

//             // Move bottom to left
//             matrix[last - offset][first] = matrix[last][last - offset];

//             // Move right to bottom
//             matrix[last][last - offset] = matrix[i][last];

//             // Move top to right
//             matrix[i][last] = top;
//         }
//     }
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     rotate(arr);

//     // Print the rotated matrix
//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr[0].size(); j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c9
// leet code
// 74 search 2d matrix
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool searchMatrix(vector<vector<int>> &arr, int target)
// {
//     int rs = arr.size();
//     int cs = arr[0].size();

//     int s = 0;
//     int e = (rs * cs) - 1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         int element = arr[mid / cs][mid % cs];

//         if (element == target)
//         {
//             return 1;
//         }
//         else if (element < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int> (m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int key;
//     cin>>key;
//     // bool ans=searchMatrix(arr,key);
//     if (searchMatrix(arr,key)){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c10
// leet code
// 240. Search a 2D Matrix II
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool searchMatrix(vector<vector<int>> &arr, int target)
// {
//     int rs = arr.size();
//     int cs = arr[0].size();

//     int ri = 0;
//     int ci = cs - 1;

//     while (ri < rs && ci >= 0)
//     {
//         int e = arr[ri][ci];

//         if (e == target)
//         {
//             return 1;
//         }
//         else if (e < target)
//         {
//             ri++;
//         }
//         else
//         {
//             ci--;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int key;
//     cin >> key;
//     // bool ans=searchMatrix(arr,key);
//     if (searchMatrix(arr, key))
//     {
//         cout << "found" << endl;
//     }
//     else
//     {
//         cout << "not found" << endl;
//     }
//     return 0;
// }

// practice question
#include <iostream>
#include <vector>
using namespace std;
void rotateArrayKTimes(vector<vector<int>>& arr, int k) {
    int nRows = arr.size();
    int nCols = arr[0].size();
    vector<vector<int>> tempArray(nRows, vector<int>(nCols));

    // Calculate effective number of rotations (0 to 3)
    k = k % 4;

    for (int r = 0; r < k; r++) {
        for (int i = 0; i < nRows; i++) {
            for (int j = 0; j < nCols; j++) {
                tempArray[j][nRows - i - 1] = arr[i][j];
            }
        }
        arr = tempArray;
    }
}

int main() {
    int nRows, nCols, k;
    cin >> nRows >> nCols >> k;
    vector<vector<int>> arr(nRows, vector<int>(nCols));

    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            cin >> arr[i][j];
        }
    }

    rotateArrayKTimes(arr, k);

    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
