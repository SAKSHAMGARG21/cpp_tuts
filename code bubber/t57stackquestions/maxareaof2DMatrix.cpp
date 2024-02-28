#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Solution{
    private:
    vector<int> nextsmallestele(vector<int> &arr,int m){
        
        stack<int> s;
        s.push(-1);
        vector<int> ans(m);
        for (int i=m-1;i>=0;i--){
            int curr=arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    private:
    vector<int> prevsmallestele(vector<int> &arr,int m){
        stack<int> s;
        s.push(-1);
        vector<int> ans(m);
        for (int i=0;i<m;i++){
            int curr=arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    private: 
    int solve(vector<int> &arr,int m){
        int ans=-1;
        vector<int> next(m);
        next=nextsmallestele(arr,m);
        vector<int> prev(m);
        prev=prevsmallestele(arr,m);
        
        for (int i=0;i<m;i++){
            int l=arr[i];
            
            
            if (next[i] ==-1){
                next[i]=m;
            }
            
            int b= next[i] - prev[i] -1;
            int area=l*b;
            // cout<<area<<endl;
            ans=max(ans,area);
        }
        return ans;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int maxarea=-1;
        vector<int> arr(m);
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++)
            {
                if (M[i][j]!=0){
                    arr[j]+=M[i][j];
                }
                else{
                    arr[j]=0;
                }
            }
            int area=solve(arr,m);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}