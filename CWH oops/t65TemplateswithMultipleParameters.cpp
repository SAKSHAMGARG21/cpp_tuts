// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 date2;

    myclass(t1 a, t2 b)
    {

        data1 = a;
        date2=b;
    }

    void display()
    {
        cout << this->data1 << this->date2;
    }
};
int main()
{
    myclass<int, char> obj(1, 'A');
    obj.display();
    return 0;
}
