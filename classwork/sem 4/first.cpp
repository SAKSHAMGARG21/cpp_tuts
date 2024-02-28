// // -----------------------------------------------------------------------------------------------------------------
// // c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// bool checkArmstrong(int n){
//     int rem,add=0;
//     int x=n;
//     while(n!=0){
//         rem=n%10;
//         add=add+(rem*rem*rem);
//         n/=10;
//     }

//     if (add==x){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main()
// {
//     int arr[100];
//     int c=0;
//     int l=0;
//     for (int i = 100; i < 999; i++)
//     {
//         if (checkArmstrong(i)){
//             // cout<<i<<" ";
//             arr[l++]=i;
//         }
//     }
//     int n=c;

//     for (int i = 0; i < l; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void swapno(int *a,int *b){

//     int c=*a;
//     *a=*b;
//     *b=c;

//     cout<<*a<<" "<<*b;

// }
// int main()
// {

//     int a=10;
//     int b=20;

//     swapno(&a,&b);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class bnkacc{
//     private:
//     int amt;

//     public:
//     void setamt(int amt){
//         this->amt=amt;
//     }

//     int getamt(){
//         return amt;
//     }

//     bool checkamt(int bal){
//         if (bal<=amt){
//             this->amt=amt-bal;
//             cout<<"you withdraw the amount "<<bal<<endl;
//             cout<<"Avalible amount is "<<amt<<endl;
//         }
//         else {
//             cout<<"Amount is less your cannot withdraw"<<endl;
//         }
//     }




// };
// int main()
// {
//     int n;
//     cin>>n;
    
//     bnkacc obj1;

//     obj1.setamt(1000);
//     obj1.checkamt(n);
//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class stdc
// {
// public:
//     int rolno;
//     string name;
//     int age;

//     // setters
//     void setrolno(int rolno)
//     {
//         rolno = rolno;
//     }

//     void setname(string name)
//     {
//         name = name;
//     }

//     void setage(int age)
//     {
//         age = age;
//     }


//     // constructors
//     stdc()
//     {
//         this->age = 0;
//         this->rolno = 0;
//     }

//     stdc(int age, const string &name)
//     {
//         this->age = age;
//         this->name = name;
//     }

//     stdc(int rolno, int age, const string &name)
//     {
//         this->rolno = rolno;
//         this->age = age;
//         this->name = name;
//     }

//     void print()
//     {
//         cout << "Roll no:" <<rolno << endl;
//         cout << "Name:" <<name << endl;
//         cout << "Age :" <<age << endl;
//     }
// };

// int main()
// {
//         stdc obj;
//         obj.print();

//         stdc obj1(21,20,"saksham");
//         obj1.print();

//         stdc obj2(19,"saksham garg");

//         obj2.print();
   

//     return 0;
// }


// First of an element in sorted array
// #include <iostream>
// using namespace std;
// int lastocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int firstocc(int arr[], int n, int key)
// {

//     int s = 0;
//     int e = n;
//     int mid = 0;
//     int ans = -1;
//     while (s <= e)
//     {
//         /* code */
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int fstocc = firstocc(arr, n,1);
//     cout << fstocc << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int pivotelement(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s < e)
    {
        /* code */
        mid = (s + e) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarysearch(vector<int> &arr, int s, int e, int key)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = pivotelement(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarysearch(arr, 0, pivot, k);
    }
}

int main()
{
    int n, key;
    cin >> n >> key;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = search(arr, n, key);
    cout << ans << endl;
    return 0;
}