// -----------------------------------------------------------------------------------------------------------------
// c1
// reverse of a string
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void reverse(string& s,int st,int e){
//     if (st>e){
//         return ;
//     }

//     swap(s[st],s[e]);
//     st++;
//     e--;
//     reverse(s,st,e);
//     // return ans;
// }
// int main()
// {
//     string str;
//     cin>>str;
//     int s=0;
//     int e=str.length();
//     reverse(str,s,e-1);
//     cout<<str<<endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// palindrome
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool chekpalindrome(string str,int s,int e){
//     if (s>e){
//         return true;
//     }
//     if (str[s]!=str[e]){
//         return false;
//     }
//     else{
//         s++;
//         e--;
//         bool ans=chekpalindrome(str,s,e);
//         return ans;
//     }
// }
// int main()
// {
//     string str;
//     cin>>str;
//     bool ans=chekpalindrome(str,0,str.length()-1);
//     if(ans){
//         cout<<"palindrome"<<endl;
//     }
//     else{
//         cout<<"not palindrome"<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int power(int a ,int b){
//     if (b==0){
//         return 1;
//     }
//     else if(b==1){
//         return a;
//     }

//     int ans=power(a,b/2);

//     if (b&1){
//         return a*ans*ans;
//     }
//     else{
//         return ans*ans;
//     }
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int ans=power(a,b);
//     cout<<ans<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int n){

    if (n==0 || n==1){
        return ;
    }

    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubblesort(arr,n-1);

}
int main()
{
    int arr[6]={1,2,3,8,5,6};
    bubblesort(arr,6);
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// selection and insertion sort homework