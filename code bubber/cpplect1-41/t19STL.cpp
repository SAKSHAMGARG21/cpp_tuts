// C++ STL have two parts
// Algorithms and containers

// first learn about containers
// containers have four parts:
// Sequence,Container Adapters,Associative and Unordered container

// (1) Sequence container:-

// Array
// #include<iostream>
// #include<array>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     array<int,4> a={1,2,3,4};
//     for (int i=0;i<a.size();i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Empty or not"<<a.empty()<<endl;
//     cout<<"Element index at position:"<<a.at(2)<<endl;
//     cout<<"First element :"<<a.front()<<endl;
//     cout<<"Second element :"<<a.back()<<endl;
//     return 0;
// }

// vector
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main(int argc, char const *argv[])
//  {
//      vector<int> a={1,2,3,4,5};
//      for (int i=0;i<a.size();i++){
//          cout<<a[i]<<endl;
//      }

//     vector<int> v;

//     vector<int> o(5,1);
//     vector<int> last(o);
//     for (int i:last){
//         cout<<i;
//     }cout<<endl;
//     v.push_back(1);
//     cout<<"capacity:"<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"capacity:"<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"capacity:"<<v.capacity()<<endl;
//     cout<<"size:"<<v.size()<<endl;

//     cout<<"Empty or not"<<v.empty()<<endl;
//     cout<<"Element index at position:"<<v.at(2)<<endl;
//     cout<<"First element :"<<v.front()<<endl;
//     cout<<"Second element :"<<v.back()<<endl;

//     cout<<"before pop:"<<endl;
//     for (int i:v){
//         cout<<i;
//     }cout<<endl;
//     v.pop_back();
//     cout<<"after pop:"<<endl;
//     for (int i:v){
//         cout<<i;
//     }cout<<endl;

//     cout<<"before clear size:"<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear size:"<<v.size()<<endl;

//     return 0;
// }

// deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     deque<int> v;

//     v.push_back(13);

//     v.push_front(24);

//     // cout<<"before pop:"<<endl;
//     // for (int i:v){
//     //     cout<<i;
//     // }cout<<endl;
//     // v.pop_back();
//     // cout<<"after pop:"<<endl;
//     // for (int i:v){
//     //     cout<<i;
//     // }cout<<endl;

//     cout<<"Element index at position:"<<v.at(1)<<endl;
//     cout<<"First element :"<<v.front()<<endl;
//     cout<<"Second element :"<<v.back()<<endl;
//     cout<<"Empty or not"<<v.empty()<<endl;

//     cout<<"before erase size:"<<v.size()<<endl;
//     v.erase(v.begin(),v.begin()+1);
//     cout<<"after erase size:"<<v.size()<<endl;

//     for (int i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// list
// #include<iostream>
// #include<list>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     list<int> v;

//     v.push_back(1);
//     v.push_front(2);
//     for (int i:v){
//         cout<<i;
//     }cout<<endl;

//     list<int> n(5,100);
//     cout<<"printing n:"<<endl;
//     for (int i:n){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"First element :"<<v.front()<<endl;
//     cout<<"Second element :"<<v.back()<<endl;

//     cout<<"before erase size:"<<v.size()<<endl;
//     v.erase(v.begin());
//     cout<<"after erase size:"<<v.size()<<endl;

//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     return 0;
// }

// (2) Container Adapters

// stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     stack<string> a;
//     a.push("love");
//     a.push("bubber");
//     a.push("kumar");

//     cout<<"top ele:"<<a.top()<<endl;

//     a.pop();
//     cout<<"after pop top ele:"<<a.top()<<endl;

//     cout<<"size of stack:"<<a.size()<<endl;
//     cout<<"Empty or not :"<<a.empty()<<endl;

//     return 0;
// }

// queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     queue<string> a;
//     a.push("love");
//     a.push("bubber");
//     a.push("kumar");

//     cout<<"size of queue:"<<a.size()<<endl;

//     cout<<"top ele:"<<a.front()<<endl;

//     a.pop();

//     cout<<"after pop top ele:"<<a.front()<<endl;

//     cout<<"Empty or not :"<<a.empty()<<endl;

//     return 0;
// }

// heap
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // max - heap
//     priority_queue<int> maxi;

//     // min- heap
//     priority_queue<int ,vector<int>,greater<int>> mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(0);

//     int n=maxi.size();
//     for (int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(1);
//     mini.push(2);
//     mini.push(3);
//     mini.push(0);

//     for (int i=0;i<n;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     return 0;
// }

// // set
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[]) {
    set<int> a;

    a.insert(1);
    a.insert(1);
    a.insert(1);
    a.insert(5);
    a.insert(2);
    a.insert(2);
    a.insert(3);
    a.insert(3);
    a.insert(3);
    a.insert(0);
    a.insert(0);

    for (int i : a) {
        cout << i << endl;
    }
    cout << endl;

    cout<<"//"<<endl;
    set<int>::iterator it = a.end();
    // it++;
    cout << *it << endl; // Use *it to print the value, not it itself
    a.erase(it);

    cout<<"//"<<endl;
    for (auto i : a) {
        cout << i << endl;
    }
    cout << endl;

    cout << "-5 is not present in set: " << a.count(-5) << endl;

    set<int>::iterator itr = a.find(0);
    cout<<*itr<<endl;
    if (itr != a.end()) {
        for (auto it = itr; it != a.end(); it++) {
            cout << *it << " ";
        }
    } else {
        cout << "5 is not found in the set.";
    }
    cout << endl;
    return 0;
}

// map
// #include <iostream>
// #include <map>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     map<int, string> m;

//     m[1] = "love";
//     m[13] = "bubber";
//     m[2] = "code";

//     m.insert({5, "bubber"});

//     cout << "before erase:" << endl;
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << endl;

//     cout << "13 find or not" << m.count(13) << endl;

//     m.erase(13);
//     cout << "after erase:" << endl;
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << endl;

//     map<int,string>:: iterator it = m.find(5);
//     // cout << *it << endl;
//     for (auto i = it; i != m.end(); i++)
//     {
//         cout << (*i).first <<" "<<(*i).second<< endl;
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Algorithms
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     vector<int> m;

//     m.push_back(1);
//     m.push_back(3);
//     m.push_back(6);
//     m.push_back(7);

//     cout<<"binary search :"<<binary_search(m.begin(),m.end(),6)<<endl;

//     cout<<"lower bound:"<<lower_bound(m.begin(),m.end(),6)-m.begin()<<endl;
//     cout<<"upper bound:"<<upper_bound(m.begin(),m.end(),6)-m.begin()<<endl;

//     int a=3;
//     int b=5;

//     swap(a,b);
//     cout<<"swap A:"<<a<<endl;
//     cout<<"swap B:"<<b<<endl;

//     string rev="abcd";
//     reverse(rev.begin(),rev.end());
//     cout<<rev<<endl;

//     rotate(m.begin(),m.begin()+1,m.end());
//     cout<<"after rotation:"<<endl;
//     for (int i:m){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"after sorting:"<<endl;
//     sort(m.begin(),m.end());
//     for (int i:m){
//         cout<<i<<" ";
//     }
//     return 0;
// }
