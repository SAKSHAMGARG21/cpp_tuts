// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bt
{
    int data;
    bt *right = NULL;
    bt *left = NULL;

public:
    bt(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
int main()
{

    bt* root=new bt(1);
    bt* n2=new bt(2);
    bt* n3=new bt(3);
    bt* n4=new bt(4);

    return 0;
}