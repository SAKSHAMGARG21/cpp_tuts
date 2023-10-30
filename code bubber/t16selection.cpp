// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i=0;i<n;i++){
//         for (int j=i;j<n;j++){
//             if (arr[i]>arr[j]){
//                 int s=arr[i];
//                 int t=arr[j];
//                 arr[j]=s;
//                 arr[i]=t;

//                 // int temp =arr[i];
//                 // arr[i]=arr[j];
//                 // arr[j]=temp;
//             }
//         }
//     }
//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }

//         // Swap the minimum element with the current element
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main()
// {
//     int n;
//     // cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     // cout << "Enter the elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Call the selectionSort function
//     selectionSort(arr, n);

//     // cout << "Sorted array in ascending order:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }