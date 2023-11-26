// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template<class T>
class cls{
    public:
    int data;
    cls(T a){
        data=a;
    }

    void display();
};

template<class T>
void cls<T>:: display(){
    cout<<data<<endl;
}

void func1(int a){
    cout<<"this is fist func "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"this is templatised func1 "<<a <<endl;
}

template<class T>
void func(T a){
    cout<<"this is templatised func1 "<<a <<endl;
}

int main()
{
    cls<int> obj(5);
    obj.display();
    func1(5); // exact match takes highest priority
    func(4);
    return 0;
}

