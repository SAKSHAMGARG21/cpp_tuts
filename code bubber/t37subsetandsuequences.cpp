// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "{}"
//          << ",";
//     if (n == 0)
//     {
//         cout << "{0}";
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << "{" << arr[i] << "}"
//                  << ",";
//         }
//         // cout<<",";
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 cout << "{" << arr[i] << "," << arr[j] << "}"
//                      << ",";
//             }
//             // cout<<endl;
//         }
//         // cout<<endl;
//         cout << "{";
//         for (int i = 0; i < n - 1; i++)
//         {
//             cout << arr[i] << ",";
//         }
//         cout << arr[n - 1] << "}";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c1
// leet code
// 78 subset
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void solve(vector<int> nums, vector<int> output, int idx, vector<vector<int>> &ans)
// {
//     if (idx >= nums.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     // excude
//     solve(nums, output, idx + 1, ans);

//     // include
//     int elemnt = nums[idx];
//     output.push_back(elemnt);
//     solve(nums, output, idx + 1, ans);
// }

// vector<vector<int>> subsets(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int> output;
//     int index = 0;
//     solve(nums, output, index, ans);
//     return ans;
// }
// int main()
// {
//     int n, m;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<vector<int>> ans = subsets(arr);
//     for (const vector<int> &subset : ans)
//     {
//         for (int element : subset)
//         {
//             cout << element << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// c1
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<vector<int>> generatePowerSet(const vector<int>& input) {
//     int n = input.size();
//     int numSubsets = 1 << n; // 2^n

//     vector<vector<int>> powerSet;

//     for (int i = 0; i < numSubsets; i++) {
//         vector<int> subset;
//         for (int j = 0; j < n; j++) {
//             if ((i >> j) & 1) {
//                 subset.push_back(input[j]);
//             }
//         }
//         powerSet.push_back(subset);
//     }

//     return powerSet;
// }

// int main() {
//     vector<int> input = {1, 2, 3};
//     vector<vector<int>> powerSet = generatePowerSet(input);

//     // Print the power set
//     for (const vector<int>& subset : powerSet) {
//         cout << "{";
//         for (size_t i = 0; i < subset.size(); i++) {
//             cout << subset[i];
//             if (i < subset.size() - 1) {
//                 cout << ",";
//             }
//         }
//         cout << "}" << endl;
//     }

//     return 0;
// }

// subsequences of string
// code stdio
// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void solve(string str,string output,int idx,vector<string> &ans){
// 	if (idx>=str.length()){
// 		if (output.length() > 0 ){
// 			ans.push_back(output);
// 		}
// 		return ;
// 	}

// 	// excude 
// 	solve(str,output,idx+1,ans);

// 	// include
// 	char elemnt=str[idx];
// 	output.push_back(elemnt);
// 	solve(str,output,idx+1,ans);

// } 
// vector<string> subsequences(string str){
	
// 	// Write your code here
// 	vector<string> ans;
// 	string output="";
// 	int idx=0;
// 	solve(str,output,idx,ans);
// 	return ans;
	
// }
// int main()
// {
//     string s;
//     cin >> s;

//     vector<string>  ans=subsequences(s);

//     for (auto i:ans){
//         cout<<i<<" ";
//     }

//     return 0;
// }
