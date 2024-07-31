// -----------------------------------------------------------------------------------------------------------------
// c
// solve this problem
// Alice really loves midnights. For her, it's the only time which makes her feel safe. Since she's so excited about today's midnight, she asked you to find how much time she needs to wait until midnight. Alice is so precise, so she wants to know the exact number of seconds till today's midnight.

// You are given a string S of length 8 representing the current time in this format HH:MM:SS, where HH, MM, SS stand for hours, minutes and seconds respectively. The time is in 24-hour format, which means the following: 00 <= HH < 24, 00 <= MM, SS < 60. The midnight is at 00:00:00. You need to print the number of seconds Alice needs to wait till it's midnight.
// If the current time is midnight then print 0.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string time;
    cin >> time;

    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    int seconds = stoi(time.substr(6, 2));

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    int secondsInDay = 24 * 3600;

    int secondsToMidnight = secondsInDay - totalSeconds;

    cout << secondsToMidnight << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// // int findLastNumber(vector<int> &numbers)
// // {
// //     sort(numbers.begin(), numbers.end());

// //     while (numbers.size() > 1)
// //     {
// //         int smallest = numbers[0];
// //         numbers.erase(numbers.begin());

// //         if (smallest == numbers.back())
// //         {
// //             numbers.pop_back();
// //         }
// //     }

// //     return numbers[0];
// // }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> numbers(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> numbers[i];
//     }

//     // cout<<numbers[0];

//     // int lastNumber = findLastNumber(numbers);
//     // cout << lastNumber << endl;

//     for (int i = 0; i < n; i++)
//     {
//         int mx = INT_MIN;
//         int mn = INT_MAX;
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 mx = max(mx, numbers[j]);
//             }
//             numbers[i]=-1;
//         }
//         else
//         {
// for (int j = 0; i < n; j++)
// {
//     mn=min(mn,numbers[j]);
// }

// numbers[i]=-1;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (numbers[i]!=-1){
//             cout<<numbers[i]<<" ";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int players(vector<int> Numbers)
// {
//     // Check for edge cases
//     if (Numbers.size() == 1)
//     {
//         return Numbers[0];
//     }

//     // Sort the numbers to easily access the smallest and largest elements
//     sort(Numbers.begin(), Numbers.end());

//     bool isRaviTurn = true;
//     int n=Numbers.size();

//     while (Numbers.size() > 1)
//     {

//         int mx = INT_MIN;
//         int mn = INT_MAX;
//         if (isRaviTurn)
//         {
//             int l=0;
//             // Ravi's turn - remove the smallest number
//             for (int j = 0; j < n; j++)
//             {
//                 mx = max(mx, Numbers[j]);
//                 l=0;
//             }
//             Numbers.erase(Numbers.begin()+l);
//             // numbers[i]=-1;
//         }
//         else
//         {
//             // Shanu's turn - remove the largest number
//             int l=0;
//             for (int j = 0; j < n; j++)
//             {
//                 mn = min(mn, Numbers[j]);
//                 l=j;
//             }

//             Numbers.erase(Numbers.begin()+l);
//         }
//         // Switch turns
//         isRaviTurn = !isRaviTurn;
//     }

//     // The last remaining number
//     return Numbers[0];
// }

// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> Numbers(N);
//     for (int j = 0; j < N; ++j)
//     {
//         cin >> Numbers[j];
//     }

//     int result = players(Numbers);
//     cout << result << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int players(vector<int> Numbers)
// {
//     // Check for edge cases
//     if (Numbers.size() == 1)
//     {
//         return Numbers[0];
//     }

//     // Sort the numbers to easily access the smallest and largest elements
//     sort(Numbers.begin(), Numbers.end());

//     bool isRaviTurn = true;
//     int n = Numbers.size();

//     while (Numbers.size() > 1)
//     {
//         int mx = INT_MIN;
//         int mn = INT_MAX;
//         if (isRaviTurn)
//         {
//             int l = 0;
//             // Ravi's turn - remove the smallest number
//             for (int j = 0; j < n; j++)
//             {
//                 mx = max(mx, Numbers[j]);
//                 l = j;
//                 cout<<l<<" ";
//             }
//             Numbers.erase(Numbers.begin() + l);
//         }
//         else
//         {
//             // Shanu's turn - remove the largest number
//             int l = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 mn = min(mn, Numbers[j]);
//                 l = j;
//             }
//             Numbers.erase(Numbers.begin() + l);
//         }
//         // Switch turns
//         isRaviTurn = !isRaviTurn;
//     }

//     // The last remaining number
//     return Numbers[0];
// }

// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> Numbers(N);
//     for (int j = 0; j < N; ++j)
//     {
//         cin >> Numbers[j];
//     }

//     int result = players(Numbers);
//     cout << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int players(vector<int>& Numbers) {
//     // Sort the numbers to easily access the smallest and largest elements
//     sort(Numbers.begin(), Numbers.end());

//     while (Numbers.size() > 1) {
//         // Ravi's turn: remove the smallest number
//         Numbers.erase(Numbers.begin());

//         // Shanu's turn: remove the largest number
//         Numbers.pop_back();
//     }

//     return Numbers[0];
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> Numbers(N);
//     for (int j = 0; j < N; ++j) {
//         cin >> Numbers[j];
//     }

//     int result = players(Numbers);
//     cout << result << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int players(vector<int>& Numbers) {
//     // Sort the numbers to easily access the smallest and largest elements
//     sort(Numbers.begin(), Numbers.end());

//     int n=Numbers.size();
//     return Numbers[n/2];
// }
// int main() {
//     int N;
//     cin >> N;

//     vector<int> Numbers(N);
//     for (int j = 0; j < N; ++j) {
//         cin >> Numbers[j];
//     }

//     int result = players(Numbers);
//     cout << result << endl;

//     return 0;
// }