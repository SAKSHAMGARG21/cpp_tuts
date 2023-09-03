///// include files
// #include <iostream>
// #include <climits>
// #include <unordered_map>
// #include <string>
// #include <vector>
// #include <cctype> // use for type casting
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

// pair function question 
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

// set code
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> st;

//     // Insert elements into the set
//     st.insert(10);  //Note IN case of set insert function will use not push_back
//     st.insert(5);
//     st.insert(15);
//     st.insert(8);

//     // The set will automatically sort and remove duplicates
//     // So, the set will contain {5, 8, 10, 15}

//     // Access elements in the set
//     cout << "Set Elements: ";
//     for (int num : st) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Check if an element exists in the set
//     int x = 5;
//     if (st.count(x)) {
//         cout << x << " exists in the set." << endl;
//     } else {
//         cout << x << " does not exist in the set." << endl;
//     }

//     // Erase elements from the set
//     st.erase(8);

//     cout << "Set after erasing 8: ";
//     for (int num : st) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <cctype> // Include the cctype header for toupper
// using namespace std;

// int main() {
//     char lowercaseChar = 'a';
//     char uppercaseChar = 'A';
    
//     // Use the toupper function to convert to uppercase
//     char uppercaseChar1 = toupper(lowercaseChar);
//     char lowercaseChar1 = tolower(uppercaseChar);
    
//     cout << "Original character: " << lowercaseChar << endl;
//     cout << "Uppercase character: " << uppercaseChar1 << endl;
//     cout << "Original character: " << uppercaseChar << endl;
//     cout << "Uppercase character: " << lowercaseChar1 << endl;

//     return 0;
// }

// short from of if else returning true : false
//     bool b = check(arr1);
//     cout << (b ? "true" : "false") << endl;