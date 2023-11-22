// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class vctor
// {
// public:
//     int *arr;
//     int size;
//     vctor(int s)
//     {
//         size=s;
//         arr = new int[size];
//     }

//     int dotproduct(vctor &v)
//     {
//         int sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += this->arr[i] *v.arr[i];
//         }
//         return sum;
//     }
// };

// int main()
// {
//     vctor v1(3);
//     v1.arr[0]=4;
//     v1.arr[1]=3;
//     v1.arr[2]=1;
//     vctor v2(3);
//     v2.arr[0]=1;
//     v2.arr[1]=0;
//     v2.arr[2]=1;

//     int a=v1.dotproduct(v2);
//     cout<<a<<endl;

//     return 0;
// }

// template
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// template <class T>
// class vctor
// {
// public:
//     T *arr;
//     int size;
//     vctor(int s)
//     {
//         size = s;
//         arr = new T[size];
//     }

//     T dotproduct(vctor &v)
//     {
//         T sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += this->arr[i] * v.arr[i];
//         }
//         return sum;
//     }
// };

// int main()
// {
//     vctor<double> v1(3);
//     v1.arr[0] = 4.4;
//     v1.arr[1] = 3.7;
//     v1.arr[2] = 1.3;
//     vctor<double> v2(3);
//     v2.arr[0] = 1.9;
//     v2.arr[1] = 0.5;
//     v2.arr[2] = 1.3;

//     double a = v1.dotproduct(v2);
//     cout << a << endl;

//     return 0;
// }