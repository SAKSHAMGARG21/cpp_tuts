// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    // bs
    vector<long long> ans;
    queue<int> q;
    int fg = 1;
    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            fg = 0;
            ans.push_back(A[i]);
            break;
        }
    }
    if (fg == 1)
    {
        ans.push_back(0);
    }
    int i = 1;
    while (i <= N - K)
    {
        for (int j = i; j < i + K; j++)
        {
            q.push(A[j]);
        }

        int flag = 1;
        while (!q.empty())
        {
            if (q.front() < 0)
            {
                flag = 0;
                ans.push_back(q.front());
                break;
            }
            q.pop();
        }

        while (!q.empty())
        {
            q.pop();
        }
        if (flag == 1)
        {
            ans.push_back(0);
        }
        i++;
    }

    return ans;

    //  vector<long long> ans;
    //     queue<int> q;
    //     for(int i=0;i<K;i++){
    //         if (A[i]<0){
    //             q.push(i);
    //         }
    //     }

    //     if (q.size() > 0){
    //         ans.push_back(A[q.front()]);
    //     }else{
    //         ans.push_back(0);
    //     }

    //     for (int i=K;i<N;i++){
    //         if (!q.empty() && i-q.front() >= K){
    //             q.pop();
    //         }

    //         if (A[i]<0){
    //             q.push(i);
    //         }

    //         if (q.size() > 0){
    //             ans.push_back(A[q.front()]);
    //         }else{
    //             ans.push_back(0);
    //         }
    //     }
    //     return ans;
}

int main()
{
    long long int A[] = {-2, 5, -3, 2, -1, 3, 4, -1};
    long long int N = sizeof(A) / sizeof(A[0]);
    long long int K = 3;
    vector<long long> result = printFirstNegativeInteger(A, N, K);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}