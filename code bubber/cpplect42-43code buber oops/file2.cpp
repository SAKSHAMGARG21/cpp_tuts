// -----------------------------------------------------------------------------------------------------------------
// c1
// Encapulation
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class student{

//     private:
//         string name;
//         int health;
//         int age;

//     public:

//     void setage(int age){
//         this->age=age;
//     }
//     int getAge(){
//         return this->age;
//     }

// };
// int main()
// {
//     student first;
//     first.setage(34);
//     cout<<first.getAge()<<endl;
//     cout<<"things going good"<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// inheritance
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class human{
//     public:
//     int weight=1;
//     int height=2;
//     private:
//     int age=3;

//     public:
//     int getage(){
//         return this->age;
//     }

//     int setweight(int weight){
//         return this->weight=weight;
//     }
//     int setage(int age){
//         return this->age=age;
//     }
// };

// // class male:public human{
// //     public:
// //     string color="royl gold";

// //     void sleep(){
// //         cout<<"Male sleeping"<<endl;
// //     }
// //     int getheight(){
// //         return this->height;
// //     }
// // };

// class male:protected human{
//     public:
//     string color="royl gold";

//     void sleep(){
//         cout<<"Male sleeping"<<endl;
//     }
// };

// int main()
// {
//     // male mi;
//     // human ml;

//     // cout<<mi.getheight()<<endl;

//     // _________________________________
//     // male mi;
//     // human ml;

//     // mi.weight=90;
//     // cout<<mi.weight<<endl;

//     // ml.setage(23);
//     // cout<<ml.getage()<<endl;

//     // ________________________________
//     male obj1;
//     // cout<<obj1.age<<endl;
//     // cout<<obj1.height<<endl;
//     // cout<<obj1.weight<<endl;

//     // cout<<obj1.getage()<<endl;
//     // obj1.setweight(45);
//     // cout<<obj1.weight<<endl;

//     cout<<obj1.color<<endl;
//     obj1.sleep();

//     return 0;
// }

// types of inheritance:-

// 1. single
// 2. multilevel
// 3. multiple
// 4. hybrid
// 5. heirarchial

// -----------------------------------------------------------------------------------------------------------------
// 1. single inheritance
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class animal
// {
// public:
//     int age;
//     int weight;

// public:
//     woid speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class dog : public animal
// {
// public:
//     int name;
//     int health;
// };
// int main()
// {
//     dog d;
//     d.speak();
//     cout << d.age << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 2. multilevel inheritance
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class animal
// {
// public:
//     int age;
//     int weight;

// public:
//     void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class dog : public animal
// {
// public:
//     int speed;
//     int health;
// };

// class pitbull : public dog
// {
// public:
//     int name;
// };
// int main()
// {
//     pitbull obj;
//     obj.speak();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 3. multiple inheritance
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class animal
// {
// public:
//     int age;
//     int weight;

// public:
//     void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class human
// {
// public:
//     string color;

// public:
//     void bark()
//     {
//         cout << "barking" << endl;
//     }
// };

// class hybrid: public animal,public human{
//     public:
//     string name;
// };

// int main()
// {
//     hybrid obj;
//     obj.speak();
//     obj.bark();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 4. hierarchical type
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class A{

//     public:
//     void fun1(){
//         cout<<"class fun A"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void fun2(){
//         cout<<"class fun B"<<endl;
//     }

// };
// class c:public A{
//     public:
//     void fun3(){
//         cout<<"class fun c"<<endl;
//     }
// };
// int main()
// {
//     A obj1;
//     obj1.fun1();

//     B obj2;
//     obj2.fun1();
//     obj2.fun2();

//     c obj3;
//     obj3.fun1();
//     obj3.fun3();

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// 5. hybrid inheritance -> combination of more than one type of inheritance
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
// public:
//     void fun1()
//     {
//         cout << "class A" << endl;
//     }
// };

// class D
// {
// public:
//     void fun2()
//     {
//         cout << "class d" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void fun3()
//     {
//         cout << "class B" << endl;
//     }
// };

// class c : public A, public D
// {
// public:
//     void fun4()
//     {
//         cout << "class C" << endl;
//     }
// };

// int main()
// {
//     A ob1;
//     D ob2;
//     B ob3;
//     c ob4;

//     ob4.fun1();
//     ob4.fun2();
//     ob4.fun4();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// inheritance Amibiguity
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
// public:
//     void fun()
//     {
//         cout << "class A" << endl;
//     }
// };

// class B
// {
// public:
//     void fun()
//     {
//         cout << "class B" << endl;
//     }
// };

// class c : public A, public B
// {
// public:
//     void fun4()
//     {
//         cout << "class C" << endl;
//     }
// };

// int main()
// {
//     A ob1;
//     B ob3;
//     c ob4;

//     ob4.A::fun();
//     ob4.B::fun();
//     ob4.fun4();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// polymorfism => compile time overloading , run time overloading

// compile time overloading
// 1. function overloading
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
// public:
//     void fun()
//     {
//         cout << "function 1" << endl;
//     }

//     int fun(string name, int n){
//         cout<<"function 2"<<endl;
//         return n;
//     }

//     void fun(string name){
//         cout<<"function 3"<<endl;
//     }
// };
// int main()
// {
//     A ob1;
//     ob1.fun();

//     ob1.fun("saksham", 3);

//     ob1.fun("saksham");

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// operator overloading
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
// public:
//     int a;
//     int b;

// public:
//     void operator+(A &obj)
//     {
//         int val1 = this->a;
//         int val2 = obj.a;

//         cout << "value is:" << val1 << val2 << val2 - val1 << endl;
//     }
// };

// int main()
// {
//     A ob1, ob2;
//     ob1.a = 4;

//     ob2.a = 7;

//     ob1 + ob2;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
//     public:
//     int a;
// public:
//     void operator()()
//     {
//         cout << "ma Bracket hu " << this->a << endl;
//     }
// };

// int main()
// {
//     A ob1;
//     ob1.a=4;
//     ob1();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// run time overloading
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class animal
// {
// public:
//     virtual void speak()
//     {
//         cout << "speaking" << endl;
//     }
// };
// class dog : public animal
// {
// public:
//     void speak()
//     {
//         cout << "Barking" << endl;
//     }
// };
// int main()
// {
//     dog obj1;
//     obj1.speak();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// friend function
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class A{
//     int x;
// public:
//     A (int y){
//         x=y;
//     }
//     friend void print(A &obj);
// };

// void print(A &obj){
//     cout<<obj.x<<endl;
// }
// int main()
// {
//     A obj(5);
//     print(obj);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class adds{
//     public:
//     char s1[25],s2[25];
//     adds(char st1[],char st2[]){
//         strcpy(s1,st1);
//         strcpy(s2,st2);
//     }

//     void operator+(){
//         cout<<"the concatenated string is "<<'"'<<strcat(s1,s2)<<'"';
//     }
// };
// int main()
// {
//     char sm1[]="Hello";
//     char sm2[]="world";
//     adds a(sm1,sm2);
//     +a;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// Basic to class type
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class timel
// {
//     int hrs;
//     int min;

// public:
//     timel(int t)
//     {
//         hrs = t / 60;
//         min = t % 60;
//     }

//     void display()
//     {
//         cout << hrs << " hour and " << min << " min" << endl;
//     }
// };
// int main()
// {
//     timel t1(90);
//     t1.display();
//     return 0;
// }

// class to Basic type
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class timel
// {
//     int hrs;
//     int min;

// public:
//     timel(int t)
//     {
//         hrs = t / 60;
//         min = t % 60;
//     }

//     int display()
//     {
//         cout << hrs << " hour and " << min << " min" << endl;
//         int m;
//         m=min;
//         return m;
//     }
// };
// int main()
// {
//     int x=90;
//     timel t1(x);
//     int j=t1.display();
//     cout<<"The value of j is "<<j<<endl;
//     return 0;
// }
