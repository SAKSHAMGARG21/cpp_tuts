// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class t1 = int, class t2 = char, class t3 = float>
class cls
{
public:
    t1 a;
    t2 b;
    t3 c;

    cls(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << a<<" " << b<<" " << c << endl;
    }
};
int main()
{
    cls<> s(1, 'a', 2.4);
    s.display();
    cout << endl;
    cls<float, int, char> obj(2.3, 2, 'A');
    obj.display();
    cout << endl;
    return 0;
}