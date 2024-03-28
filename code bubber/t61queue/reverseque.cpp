// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        // Bs
        stack<int> s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        queue<int> tq;
        while(!s.empty()){
            tq.push(s.top());
            s.pop();
        }
        return tq;
        
    }
};
// class Solution {
// public:
//     void rev(queue<int>& q) {
//         // Base case for recursion
//         if (q.empty()) {
//             return;
//         }

//         // Store the front element and remove it from the queue
//         int num = q.front();
//         q.pop();

//         // Recursively call rev to reverse the remaining queue
//         rev(q);

//         // Add the stored element back to the queue
//         q.push(num);
//     }
// };

int main()
{
    return 0;
}