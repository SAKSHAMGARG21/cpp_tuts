// -----------------------------------------------------------------------------------------------------------------
// c
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        
        // stack<int> st;
        // int i=0;
        // while(!q.empty() && i<k){
        //     st.push(q.front());
        //     q.pop();
        //     i++;
        // }
        // queue<int> nq;
        // while(!st.empty()){
        //     nq.push(st.top());
        //     st.pop();
        // }
        
        // while(!q.empty()){
        //     nq.push(q.front());
        //     q.pop();
        // }
        
        // return nq;
        
        stack<int> st;
        int i=0;
        while(!q.empty() && i<k){
            st.push(q.front());
            q.pop();
            i++;
        }

        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        int t=q.size()-k;
        while(t--){
            int val =q.front();
            q.pop();
            q.push(val);
        }
        
        return q;
    }
};
int main()
{
return 0;
}