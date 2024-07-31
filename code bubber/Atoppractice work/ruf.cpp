// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #include <gtest/gtest.h>  // Include Google Test library

// TEST(ArrayManipulationTest, TestSortedAscending) {
//     int arr[] = {1, 3, 5, 7, 9, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int expected[] = {1, 3, 5, 7, 9, 11};

//     // Call the function to be tested
//     // ...

//     // Verify the result
//     for (int i = 0; i < n; i++) {
//         EXPECT_EQ(arr[i], expected[i]);
//     }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int i=0;
//     int j=n-1;
//     while (i<=j)
//     {
//         int e1=arr[i];
//         int e2=arr[j];

//         if ( (e1&1) && (e2%2==0)){
//             i++; j--;
//         }

//         else if ( (e1&1) && (e2%2!=0)){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         else{
//             swap(arr[i],arr[j]);
//             j--;
//         }
// }

//     for (int k=0; k<n; k++)
//         cout << arr[k] << " ";

//     cout << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    int sum, c = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                c++;
            }
        }
    }

    cout << c << " ";

    return 0;
}
