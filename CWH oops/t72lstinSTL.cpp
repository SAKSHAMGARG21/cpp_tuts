// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin() ;it!=lst.end() ;it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(35);
    list1.push_back(4);
    list1.push_back(34);
    list1.push_back(12);

    // remove element from list
    display(list1);
    // list1.pop_back();
    list1.pop_front();
    list1.remove(4);
    display(list1);

    list<int> list2(3);
    list<int> :: iterator iter;
    iter =list2.begin();
    *iter=45;
    iter++;
    *iter=52;
    iter++;
    *iter=99;
    iter++;

    display(list2);

    list1.merge(list2);

    list1.sort();

    cout<<"list after merge and sort :";
    display(list1);

    list1.reverse();
    cout<<"list after reverse :";
    display(list1);



    return 0;
}