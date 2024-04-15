//  c1
// #include <iostream>
// using namespace std;
// int pivotelement(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     while (s < e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << pivotelement(arr, n) << endl;
//     return 0;
// }

// code stdio
// search in a rotated sorted array
// c2
// #include <iostream>
// #include <vector>
// using namespace std;
// int pivotelement(vector<int> &arr, int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     while (s < e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }
// int binarysearch(vector<int> &arr, int s, int e, int key)
// {
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return -1;
// }

// int search(vector<int> &arr, int n, int k)
// {
//     int pivot = pivotelement(arr, n);
//     if (k >= arr[pivot] && k <= arr[n - 1])
//     {
//         return binarysearch(arr, pivot, n - 1, k);
//     }
//     else
//     {
//         return binarysearch(arr, 0, pivot, k);
//     }
// }

// int main()
// {
//     int n, key;
//     cin >> n >> key;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans = search(arr, n, key);
//     cout << ans << endl;
//     return 0;
// }

// leet code
// 69.sqrt(x)
// c3
// #include <iostream>
// #include <cmath>
// using namespace std;

// long long int mysqrt(int x)
// {
//     int s = 0;
//     int e = x;
//     long long int mid = 0;
//     long long int ans = -1;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (mid * mid == x)
//         {
//             return mid;
//         }
//         if (mid * mid > x)
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

// double decimalval(int n, int decimal, int sqroot)
// {
//     double factor = 1;
//     double ans = sqroot;
//     for (int i = 0; i < decimal; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < n; j += factor)
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
//     int sqroot = mysqrt(n);
//     cout << decimalval(n, 3, sqroot) << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------
// practice code
#include <iostream>
#include <vector>
using namespace std;

void setZeros(vector<vector<int>> &arr)
{
    int numrow = arr.size();
    int numcol = arr[0].size();

    vector<bool> zeroRows(numrow, false);
    vector<bool> zeroCols(numcol, false);

    for (int i = 0; i < numrow; i++)
    {
        for (int j = 0; j < numcol; j++)
        {
            if (arr[i][j] == 0)
            {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }

    for (int i = 0; i < numrow; i++)
    {
        for (int j = 0; j < numcol; j++)
        {
            if (zeroRows[i] || zeroCols[j])
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int a;
    int n, m;
    cin >> a;
    for (int l = 0; l < a; l++)
    {
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        setZeros(arr);

        // Print the modified vector
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}