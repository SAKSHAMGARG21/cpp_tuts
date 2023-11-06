// // c1
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>> arr[i][j];
//         }
//     }
//     int a;
//     cin>> a;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             if (a==arr[i][j]){
//                 cout<<i<<" "<<j;
//             }
//         }
//         // cout<<endl;
//     }

//     return 0;
// }

// c2
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     // for (int i=0;i<n;i++){
//     //     for (int j=0;j<m;j++){
//     //         cin>> arr[i][j];
//     //     }
//     // }

//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<i+1*j+1<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// c3
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // int sum = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         if (j == m - 1)
//     //         {
//     //             sum += arr[i][j];
//     //         }
//     //     }
//     // }
//     // cout << sum;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i+j==m-1)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }

//     return 0;
// }

// // c4
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // int top = 0;
//     for (int j = 0; j < m; j++)
//     {
//         cout << arr[0][j] << " ";
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int k = 0; k < m; k++)
//         {
//             if (k == m - 1)
//             {
//                 cout << arr[i][k] << " ";
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// void printSpiral(vector<vector<int>>& matrix) {
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

//     while (top <= bottom && left <= right) {
//         // Print top row
//         for (int i = left; i <= right; ++i)
//             cout << matrix[top][i] << " ";
//         top++;

//         // Print rightmost column
//         for (int i = top; i <= bottom; ++i)
//             cout << matrix[i][right] << " ";
//         right--;

//         // Print bottom row
//         for (int i = right; i >= left; --i)
//             cout << matrix[bottom][i] << " ";
//         bottom--;

//         // Print leftmost column
//         for (int i = bottom; i >= top; --i)
//             cout << matrix[i][left] << " ";
//         left++;
//     }
// }

// int main() {
//     // Example usage
//     vector<vector<int>> matrix = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     printSpiral(matrix);

//     return 0;
// }

// c5,6
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int rem, ans = 0;
//     int x = n;
//     int c = 0;
//     while (n != 0)
//     {
//         c++;
//         n /= 10;
//     }
//     n = x;
//     while (n != 0)
//     {
//         /* code */
//         rem = n % 10;
//         ans = ans + pow(rem, c);
//         n /= 10;
//     }

//     if (ans == x)
//     {
//         cout << ans << "is an armstrong no" << endl;
//         int n = x;
//         int i = 1, sum1 = 0, sum2 = 0, r;
//         while (n != 0)
//         {
//             r = n % 10;
//             if (i % 2 == 0)
//             {
//                 sum1 += r;
//             }
//             i++;
//             n /= 10;
//         }
//         cout << "even sum:" << sum1 << endl;
//     }
//     else
//     {
//         cout << ans << "is not an armstrong no" << endl;
//         int n = x;
//         int j = 1, sum2 = 0, r1;
//         while (n != 0)
//         {
//             r1 = n % 10;
//             if (j % 2 != 0)
//             {
//                 sum2 += r1;
//             }
//             j++;
//             n /= 10;
//         }
//         cout << "odd sum:" << sum2 << endl;
//     }
//     return 0;
// }

// c7
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
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

//     for (int i = 0; i < n; i++)
//     {
//         int c=0;
//         int temp = arr[i];
//         int rem,sum=0,rev=0;
//         while (temp!=0)
//         {
//             /* code */
//             c++;
//             rem=temp%10;
//             sum+=rem;
//             rev=(rev*10)+rem;
//             temp/=10;
//         }
//         cout<<arr[i]<<"\t"<<c<<"\t"<<sum<<"\t"<<rev<<endl;
//     }

//     return 0;
// }

// c8
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin >> n>>m;
//     int arr[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>> arr[i][j];
//         }
//     }

//     // for (int i=0;i<n;i++){
//     //     for (int j=0;j<m;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     int top=0, botm= n-1, left = 0 ,right = m-1;

//     while(top <= botm && left<= right){
//         for (int i=left;i<=right;i++){
//             cout<<arr[top][i]<<" ";
//         }
//         top++;

//         for (int i=top;i<=botm;i++){
//             cout<<arr[i][right]<<" ";
//         }
//         right--;

//         for (int i=right;i>=left;i--){
//             cout<<arr[botm][i]<<" ";
//         }
//         botm--;

//         for (int i=botm;i>=top;i--){
//             cout<<arr[i][left]<<" ";
//         }
//         left++;
//     }
//     return 0;
// }

// c9
// diaganolly print the array
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n>>m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < m; j++)
//         {
//             int temp= arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// c10
// transpose of a matrix
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int arr2[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             arr2[j][i]=arr[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// c10
// same as above but this code without allocate new 2D array
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     // Transpose the matrix in-place
//     for (int i = 0; i < m; i++) {
//         for (int j = i + 1; j < n; j++) {
//             // Swap arr[i][j] and arr[j][i]
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     // Print the transposed matrix
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// c11
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = m-1; j >=0; j--)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// c11
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <=m/2; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j]=arr[i][m-j-1];
//             arr[i][m-j-1]=temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// c12
// cylic arrat
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // for (int i=0;i<n;i++){
//     //     for (int j=0;j<m;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     int top = 0, botm = n - 1, left = 0, right = m - 1;

//     for (int i = left; i <= right; i++)
//     {
//         cout << arr[top][i] << " ";
//     }
//     top++;

//     for (int i = top; i <= botm; i++)
//     {
//         cout << arr[i][right] << " ";
//     }
//     right--;

//     for (int i = right; i >= left; i--)
//     {
//         cout << arr[botm][i] << " ";
//     }
//     botm--;

//     for (int i = botm; i >= top; i--)
//     {
//         cout << arr[i][left] << " ";
//     }
//     left++;
//     return 0;
// }

// c13
// #include <iostream>
// #include <climits>
// #include <limits>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int top = 0, botm = n - 1, left = 0, right = m - 1;
//     int curr;
//     while (top < botm && left < right)
//     {
//         int prev = arr[top + 1][left];
//         for (int i = left; i <= right; i++)
//         {
//             curr = arr[top][i];
//             arr[top][i] = prev;
//             prev = curr;
//         }
//         top++;
//         for (int i = top; i <= botm; i++)
//         {
//             curr = arr[i][right];
//             arr[i][right] = prev;
//             prev = curr;
//         }
//         right--;
//         for (int i = right; i >= left; i--)
//         {
//             curr = arr[botm][i];
//             arr[botm][i] = prev;
//             prev= curr;
//         }
//         botm--;
//         for (int i=botm;i>=top;i--){
//             curr= arr[i][left];
//             arr[i][left]=prev;
//             prev=curr;
//         }
//         left++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// c
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

//     return 0;
// }
