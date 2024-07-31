// -----------------------------------------------------------------------------------------------------------------
// c
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    queue<int> q;
		    string ans="";
		    unordered_map<char,int> mp;
		    
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        mp[ch]++;
		        
		        q.push(ch);
		        
		        while(!q.empty()){
		            if (mp[q.front()] > 1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        
		        if (q.empty()){
		            ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};

int main()
{
return 0;
}