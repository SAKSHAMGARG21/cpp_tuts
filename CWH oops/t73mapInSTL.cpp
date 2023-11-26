// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> marksmp;
    marksmp["hary"]=34;
    marksmp["sam"]=4;
    marksmp["rahul"]=3;

    marksmp.insert({{"kazi",23},{"pickacu",43}});

    map<string,int> ::iterator iter;
    for (iter=marksmp.begin(); iter !=marksmp.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    
    return 0;
}