#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int ans = -1;
    int flag2;
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        // Bs
        // for (int i=0;i<n;i++){
        //     int flag=1;
        //     for (int j=0;j<n;j++){
        //         if (M[i][j] == 1 &&  i!=j ){
        //             flag=0;
        //         }
        //     }
        //     if (flag==1){
        //         ans=i;
        //     }
        // }
        //     flag2=1;
        //     for (int j=0;j<n;j++){
        //         if (M[j][ans] == 0 && j!=ans){
        //             flag2=0;
        //         }
        //     }
        // if (flag2==1){
        //     return ans;
        // }
        // else{
        //     return -1;
        // }

        // code bubber
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (M[a][b] == 1)
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }

        int ans = s.top();

        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (M[ans][j] == 1 && ans != j)
            {
                flag = 0;
            }
        }

        // flag2=1;
        for (int j = 0; j < n; j++)
        {
            if (M[j][ans] == 0 && j != ans)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M, n) << endl;
    }
}