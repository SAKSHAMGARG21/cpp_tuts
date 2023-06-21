// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if (arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for (int j=0;j<n;j++){
//         cout<<arr[j]<<" ";
//     }
//     cout<<"\n";
//     cout<<arr[n-1];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             if (arr[0]>arr[j]){
//                 int temp=arr[0];
//                 arr[0]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     cout<<arr[0];
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNO=INT_MIN;
//     int minNO=INT_MAX;
//     for(int i=0;i<n;i++){
//         if (arr[i]>maxNO){
//             maxNO=arr[i];
//         }
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]<minNO){
//             minNO=arr[i];
//         }
//     }
//     cout<<maxNO<<" "<<minNO;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <bits/stdc++.h>
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
//     int maxNO = INT_MIN;
//     int minNO = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         maxNO = max(maxNO, arr[i]);
//         minNO = min(minNO, arr[i]);
//     }
//     cout << maxNO << " " << minNO;
//     return 0;
// }

// #include <iostream>
// // #include <string>
// // #include <bits/stdc++.h>
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
//     int maxNO = arr[0];
//     int minNO = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxNO)
//         {
//             maxNO = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < minNO)
//         {
//             minNO = arr[i];
//         }
//     }
//     int secmax = 0;
//     int secmin = 100;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > secmax && arr[i] != maxNO)
//         {
//             secmax=arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < secmin && arr[i] != minNO)
//         {
//             secmin=arr[i];
//         }
//     }
//     cout << secmax << " " << secmin;
//     return 0;
// }

// searching in arrays
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int i,j,n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (j = 0; j < n; j++)
//     {
//         if (key == arr[i])
//         {
//             cout << i;
//             break;
//         }
//     }
//     if (i== n){
//         cout <<-1;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int linearsearch(int arr[],int n, int key){
//     for (int k=0;k<n;k++){
//         if (arr[k]==key){
//             return k;
//         }
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n, i, j, key;
//     cin>>n>>key;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int ans=linearsearch(arr,n,key);
//     cout<<ans<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int bs(int arr[] ,int n ,int key){
//     int s = 0;
//     int e = n;
//     while(s<= e)
//     {
//         int mid = (s + e)/ 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<bs(arr,n,key)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, key;
//     cin >> n >> key;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//      int s = 0;
//     int e = n;
//     while(s<= e)
//     {
//         int mid = (s + e)/ 2;
//         if (key == arr[mid])
//         {
//             cout<< mid;
//             break;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (s>e){
//         cout<<-1;
//     }
//     return 0;
// }

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
//     for (int k = 0; k < n; k++)
//     {
//         for (int i = 0; i < n-k; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         cout << arr[k] << " ";
//     }
//     return 0;
// }

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
//     for (int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }

//     for (int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }  