///// include files
// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include "bits/stdc++.h"
// using namespace std;

// -----------------------------------------------------------------------

// #include <algorithm>

//  sort(arr, arr + n);

// // Sort the entire container
// vector<int> arr(n);
// sort(container.begin(), container.end());

// // Sort a specific range of the container
// sort(container.begin() + start_index, container.begin() + end_index);

// // Sort with a custom comparison function
// sort(container.begin(), container.end(), compare_function);


// ------------------------------------------------------------------------

//frequency of an array
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int arr[] = {1, -2, 3, 2, 1, 4, 2, 3, 4, 5, 6, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Create an unordered_map to store element frequency
//     unordered_map<int, int> frequencyMap;

//     // Count the frequency of each element
//     for (int i = 0; i < n; i++) {
//         frequencyMap[arr[i]]++;
//     }

//     // Print the frequency of each element
//     for (const auto& entry : frequencyMap) {
//         cout<< entry.first << ":" << entry.second << endl;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------

// pair question 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int lastocc(vector<int>& arr, int n, int key) {
//     int s = 0;
//     int e = n - 1; // Corrected the end index to n-1
//     int mid = 0;
//     int ans = -1;
//     while (s <= e) {
//         mid = (s + e) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             s = mid + 1;
//         } else if (arr[mid] > key) {
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// int firstocc(vector<int>& arr, int n, int key) {
//     int s = 0;
//     int e = n - 1; // Corrected the end index to n-1
//     int mid = 0;
//     int ans = -1;
//     while (s <= e) {
//         mid = (s + e) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             e = mid - 1;
//         } else if (arr[mid] > key) {
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// pair<int, int> firstandlastocc(vector<int>& arr, int n, int k) {
//     pair<int, int> p;
//     p.first = firstocc(arr, n, k);
//     p.second = lastocc(arr, n, k);
//     return p;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;

//     pair<int, int> occ = firstandlastocc(arr, n, k);
//     cout << "First Occurrence: " << occ.first << endl;
//     cout << "Last Occurrence: " << occ.second << endl;

//     return 0;
// }

