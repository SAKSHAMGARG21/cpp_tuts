// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// // #include <bits/stdc++.h>
// using namespace std;
// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *fst = new int[len1];
//     int *sec = new int[len2];

//     int mainidx = s;
//     for (int i = 0; i < len1; i++)
//     {
//         fst[i] = arr[mainidx++];
//     }
//     mainidx = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         sec[i] = arr[mainidx++];
//     }

//     int indx1 = 0;
//     int indx2 = 0;
//     mainidx = s;
//     while (indx1 < len1 && indx2 < len2)
//     {
//         if (fst[indx1] < sec[indx2])
//         {
//             arr[mainidx++] = fst[indx1++];
//         }
//         else
//         {
//             arr[mainidx++] = sec[indx2++];
//         }
//     }

//     while (indx1 < len1)
//     {
//         arr[mainidx++] = fst[indx1++];
//     }
//     while (indx2 < len2)
//     {
//         arr[mainidx++] = sec[indx2++];
//     }

//     delete []fst;
//     delete []sec;
// }
// void mergesort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;

//     mergesort(arr, s, mid);

//     mergesort(arr, mid + 1, e);

//     merge(arr, s, e);
// }
// int main()
// {
//     int arr[6] = {1, 9, 3, 8, 5, 6};
//     int n = 6;
//     // int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
//     // int arr[6] = {3,7,0,1,5,8};
//     // int n = 6;
//     mergesort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// homework
// inversion count
// external sorting

// -----------------------------------------------------------------------------------------------------------------
// c
// practice
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void merge(int *arr, int s, int end)
// {
//     int mid = (s + end) / 2;
//     int len1 = mid - s + 1;
//     int len2 = end - mid;

//     int *fst = new int[len1];
//     int *sec = new int[len2];
//     int minidx = s;

//     for (int i = 0; i < len1; i++)
//     {
//         fst[i] = arr[minidx++];
//     }
//     minidx = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         sec[i] = arr[minidx++];
//     }

//     int indx1 = 0;
//     int indx2 = 0;
//     minidx = s;
//     while (indx1 < len1 && indx2 < len2)
//     {
//         if (fst[indx1] < sec[indx2])
//         {
//             arr[minidx++]=fst[indx1++];
//         }
//         else{
//             arr[minidx++]=sec[indx2++];
//         }
//     }

//     while(indx1<len1){
//         arr[minidx++]=fst[indx1++];
//     }
//     while(indx2<len2){
//         arr[minidx++]=sec[indx2++];
//     }


//     delete [] fst;
//     delete [] sec;
// }
// void mergesort(int *arr, int s, int end)
// {
//     if (s >= end)
//     {
//         return;
//     }

//     int mid = (s + end) / 2;

//     mergesort(arr, mid + 1, end);
//     mergesort(arr, s, mid);

//     merge(arr, s, end);
// }
// int main()
// {
//     int arr[] = {2, 5, 3, 1, 4};

//     int n = 5;

//     mergesort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }