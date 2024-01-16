// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Base class";
    }

};
class B: public A{
    public:
    void show(){
        cout<<"Derived class";

    }
};

int main()
{
    A *ptr;
    B a;
    ptr=&a;
    ptr->show();
    return 0;
}