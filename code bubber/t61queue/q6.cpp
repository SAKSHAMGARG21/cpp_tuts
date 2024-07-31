// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void itobtm(stack<int> &st,int temp){
    if(st.empty()){
        st.push(temp);
        return;
    }

    int n=st.top();
    st.pop();
    itobtm(st,temp);
    st.push(n);
}
void rev(stack<int>& st){
    if(st.empty())
        return;
    int temp = st.top();
    st.pop();

    rev(st);

    itobtm(st,temp);
}
queue<int> interleav(queue<int>& q){
    
    stack<int> st;
    int qs=q.size();
    // cout<<qs<<endl;
    for(int i=0;i<qs/2;i++){
        st.push(q.front());
        q.pop();
    }

    rev(st);

    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);

        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main()
{
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        q.push(d);
    }

    queue<int> ans=interleav(q);
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }
    return 0;
}