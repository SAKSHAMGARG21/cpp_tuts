// #include <iostream>
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
//     int l = 0;
//     int arr1[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 10 != 0)
//         {
//             arr1[l++] = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 10 == 0)
//         {
//             arr1[l++] = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     return 0;
// }

// #include <sstream>
// #include <vector>
// #include <iostream>
// using namespace std;

// vector<int> parseInts(string str) {
// 	// Complete this function
//     vector<int> arr;
//     // int l=0;
//     for (int i=0;i<str.size();i++){
//         if (str[i] == '-'){
//             arr.push_back(1*-1 );
//             // continue;
//         }
//         else if (str[i]!=','){
//             arr.push_back(str[i] - 48);
//         }
//         else{
//             arr.push_back('A');
//             // l++;
//         }
//     }
//     return arr;
// }

// int main() {
//     string str;
//     cin >> str;
//     vector<int> integers = parseInts(str);
//     for(int i = 0; i < integers.size(); i++) {
//         if (integers[i]!='A'){
//             cout << integers[i];
//         }
//         else{
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// c
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< endl;
    }
    return 0;
}