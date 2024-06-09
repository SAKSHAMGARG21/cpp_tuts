// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int trap(vector<int> &height)
// {
//     int n = height.size();

//     vector<int> left(n);
//     vector<int> right(n);

//     int temp = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         left[i] = max(temp, height[i]);
//         temp = left[i];
//     }

//     temp = INT_MIN;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         right[i] = max(temp, height[i]);
//         temp = right[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += min(left[i], right[i]) - height[i];
//     }

//     return sum;
// }

// void solve(vector<vector<int>> &ans, vector<int> &arr, int index, vector<int> &temp, int sum, int target)
// {
//     if (index >= arr.size())
//     {
//         if (sum == target)
//         {
//             ans.push_back(temp);
//         }
//         return;
//     }

//     // Exclude the current element
//     solve(ans, arr, index + 1, temp, sum, target);

//     // Include the current element
//     temp.push_back(arr[index]);
//     solve(ans, arr, index + 1, temp, sum + arr[index], target);
//     temp.pop_back(); // Backtrack by removing the last element
// }

// int remove0s(int n){

//     vector<int> arr;
//     int rev=0;
//     while(n!=0){
//         int rem=n%10;

//         if (rem==0){
//             rev=n/10;
//             rev=(rev*10)+5;
//         }
//         else{
//             arr.push_back(rem);
//         }
//     }
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

//     // 42 traping rainwater
//     // int ans=trap(arr);
//     // cout<<ans<<endl;

//     int target;
//     cin >> target; // 13
//     vector<vector<int>> ans;
//     int index = 0;
//     vector<int> temp;
//     int sum = 0;
//     solve(ans, arr, index, temp, sum, target);

//     // int sum=0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     arr.push_back(arr[i]);
//     //     sum = arr[i];
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         arr.push_back(arr[j]);
//     //         sum += arr[j];
//     //         if (sum == target)
//     //         {
//     //             arr.clear();
//     //         }
//     //     }
//     //     for(auto k:arr){
//     //         cout<<k<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     for (auto it : ans)
//     {
//         for (auto i : it)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void setZeros(vector<vector<int>> &arr)
// {
//     int numrow = arr.size();
//     int numcol = arr[0].size();

//     vector<bool> zeroRows(numrow, false);
//     vector<bool> zeroCols(numcol, false);

//     for (int i = 0; i < numrow; i++)
//     {
//         for (int j = 0; j < numcol; j++)
//         {
//             if (arr[i][j] == 0)
//             {
//                 zeroRows[i] = true;
//                 zeroCols[j] = true;
//             }
//         }
//     }

//     for (int i = 0; i < numrow; i++)
//     {
//         for (int j = 0; j < numcol; j++)
//         {
//             if (zeroRows[i] || zeroCols[j])
//             {
//                 arr[i][j] = 0;
//             }
//         }
//     }
// }

// int main()
// {
//     int a;
//     int n, m;
//     cin >> a;
//     for (int l = 0; l < a; l++)
//     {
//         cin >> n >> m;
//         vector<vector<int>> arr(n, vector<int>(m));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         setZeros(arr);

//         // Print the modified vector
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c 45 and 55
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fibonacii(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacii(n - 1) + fibonacii(n - 2);
}
int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int c = 0;
    // int f = 0;
    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     f = max(f, arr[i] + i);
    //     if (i == c)
    //     {
    //         c = f;
    //         j++;
    //     }
    // }
    // cout << j << endl;

    // int idx = n - 1;
    // for (int i = idx; i >= 0; i--)
    // {

    //     if (arr[i] + i >= idx)
    //     {
    //         idx = i;
    //     }
    // }
    // if (idx == 0)
    // cout<<"true"<<endl;
    // else
    // cout<<"false"<<endl;

    int ans = fibonacii(6);
    cout << ans << endl;

    return 0;
}