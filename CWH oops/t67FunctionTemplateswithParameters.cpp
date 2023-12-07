// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// template <class T1 = int, class T2 = float>
// float funcAverage(int a, int b){
//     float avg= (a+b)/2.0; 
//     return avg;
// }

// template<class T1, class T2>
// T2 funcAverage(T1 a, T2 b){
//     T2 avg= (a+b)/2.0; 
//     return avg;
// }

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcAverage(5,2.8);
    printf("The average of these numbers is %f\n",a);
    int x=2,y=5;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}

