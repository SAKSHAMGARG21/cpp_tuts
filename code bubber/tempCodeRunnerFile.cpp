#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    int a =0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i=3;i<=n;i++){
        int nextno=a+b;
        cout<<nextno<<" ";
        a=b;
        b=nextno;
    }
    return 0;
}