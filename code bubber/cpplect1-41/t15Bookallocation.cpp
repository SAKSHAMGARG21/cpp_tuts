// code stdio
// Allocate books
// c1

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool ispossible(vector<int> arr, int n, int m, int mid)
// {
//     int stcount = 1;
//     int pagesum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if ((pagesum + arr[i] <= mid) && m <= n)
//         {
//             pagesum += arr[i];
//         }
//         else
//         {
//             stcount++;
//             if ((stcount > m || arr[i] > mid) || m > n)
//             {
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(vector<int> &pages, int n, int b)
// {
//     // Write your code here.
//     int s = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += pages[i];
//     }

//     int end = sum;
//     int ans = -1;
//     int mid = s + (end - s) / 2;
//     while (s <= end)
//     {
//         if (ispossible(pages, n, b, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (end - s) / 2;
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
//     int ans = allocateBooks(arr, n, m);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// // code stdio.
// // Painter's Partition Problem
// // c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool ispossible (vector<int> arr, int n, int m, int mid){
// 	int stcount=1;
// 	int boardsum=0;
// 	for (int i=0;i<n;i++){
// 		if ((boardsum + arr[i] <= mid)){
// 			boardsum+=arr[i];
// 		}
// 		else{
// 			stcount++;
// 			if ((stcount >m || arr[i]>mid)){
// 				return false;
// 			}
// 			boardsum =arr[i];
// 		}
// 	}
// 	return true;
// }
// int findLargestMinDistance(vector<int> &boards,int b)
// {
// 	// Write your code here.
//     int n=boards.size();
// 	int s=0;
// 	int sum=0;
// 	for (int i=0;i<n;i++){
// 		sum+=boards[i];
// 	}

// 	int end=sum;
// 	int ans=-1;
// 	int mid= s+(end-s)/2;
// 	while(s<=end){
// 		if (ispossible(boards,n,b,mid)){
// 			ans=mid;
// 			end=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}
// 		mid= s+(end-s)/2;
// 	}
// 	return ans;
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
//     int ans = findLargestMinDistance(arr, m);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// code stdio
// Aggresive cows
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ispossible(vector<int> &stalls, int k, int mid)
{
    int ss = stalls.size();
    int lp = stalls[0];
    int cowcount = 1;
    for (int i = 0; i < ss; i++)
    {
        if (stalls[i] - lp >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }
            lp = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int ss = stalls.size();
    int mx = -1;
    for (int i = 0; i < ss; i++)
    {
        mx = max(mx, stalls[i]);
    }

    int end = mx-1;
    int ans = -1;
    while (s <= end)
    {
        int mid = (s + end) / 2;
        if (ispossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = aggressiveCows(arr, m);
    cout<<ans<<endl;
    return 0;
}
