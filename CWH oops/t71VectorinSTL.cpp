// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T> 
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main()
{
    // vector<int> vec;
    // cout << "enter the size: ";
    // int size;
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     int element;
    //     cin >> element;
    //     vec.push_back(element);
    // }

    // // vec.pop_back();

    // vector<int> :: iterator iter=vec.begin();

    // vec.insert(iter+1,45);

    // display(vec);

    vector<char> vec1(4);
    vec1.push_back('2');
    display(vec1);

    vector<char> vec2(vec1);

    display(vec2);

    vector<int> vec4(4,13);
    display(vec4);
    return 0;
}