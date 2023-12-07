// // operator overloading
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class complx
// {
// public:
//     int real;
//     int image;

// public:
//     void input()
//     {
//         cin >> real >> image;
//     }
//     void output()
//     {
//         if (image < 0)
//         {
//             cout << real << "-i" << -image;
//         }
//         else
//         {
//             cout << real << "+i" << image;
//         }
//     }
//     complx operator+(complx temp)
//     {
//         complx temp1;
//         temp1.real = real + temp.real;
//         temp1.image = image + temp.image;
//         return temp1;
//     }
// };

// int main()
// {
//     complx ob1, ob2, ob3;
//     ob1.input();
//     ob2.input();
//     ob3 = ob1 + ob2;
//     ob3.output();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class abc
// {
// public:
//     int x;
//     friend ostream& operator<<(ostream& o1, abc a1);
// };
// ostream& operator<<(ostream& o1, abc a1)
// {
//     o1 << a1.x;
//     return o1;
// }

// int main()
// {
//     abc a1;
//     a1.x = 2;
//     cout << a1;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class abc
// {
// public:
//     int x;
//     friend ostream& operator<<(ostream &o1, abc& a1);
//     friend istream& operator>>(istream &o1, abc& a2);
// };
// ostream &operator<<(ostream &o1, abc& a1)
// {
//     o1 << a1.x;
//     return o1;
// }
// istream &operator>>(istream &o1, abc& a2)
// {
//     o1 >> a2.x;
//     return o1;
// }
// int main()
// {
//     abc a1;
//     // a1.x = 2;
//     cin >> a1;
//     cout << a1;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class abc
// {
// public:
//     int x;
//     friend ostream &operator<<(ostream &o1, const abc &a1);
//     friend istream &operator>>(istream &o1, abc &a2);
// };

// ostream &operator<<(ostream &o1, const abc &a1)
// {
//     o1 << a1.x;
//     return o1;
// }

// istream &operator>>(istream &o1, abc &a2)
// {
//     o1 >> a2.x;
//     return o1;
// }

// int main()
// {
//     abc a1;
//     cin >> a1;
//     cout << a1;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class abc
// {
// public:
//     int *x;
//     abc(int y=0)
//     {
//         x = new int(y);
//     }
//     void setx(int y){
//         *x=y;
//     }
//     void getx(){
//         cout<<*x<<endl;
//     }
//     abc operator=(abc temp){
//         *x=*temp.x;
//         return *this;
//     }
// };
// int main()
// {
//     abc a1(2);
//     abc a2;
//     a2=a1;
//     a1.setx(3);
//     a2.getx();
//     a1.getx();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Animals
// {
// public:
//     void sound()
//     {
//         cout << "Genric animal sound" << endl;
//     }
// };
// class Cats : public Animals
// {
// public:
//     void sound()
//     {
//         cout << "Cat meow" << endl;
//     }
// };
// int main()
// {
//     Animals *a;
//     Cats c;
//     a = &c;
//     a->sound(); // early binding
//     return 0;
// }

// __________________________________________________________________________________
// #include <iostream>

// using namespace std;

// class Animals

// {
// public:
//     virtual void sound()

//     {

//         cout << "Genric animal sound" << endl;
//     }
// };

// class Cats : public Animals

// {

// public:
//     void sound()

//     {

//         cout << "Cats meow" << endl;
//     }
// };

// int main()

// {

//     Animals *a;

//     Cats c;
//     a = &c;
//     a->sound(); // late binding

//     return 0;
// }