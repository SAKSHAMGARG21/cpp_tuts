// 😂😂
// -----------------------------------------------------------------------------------------------------------------
// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Time
// {
// public:
//     int hr;
//     int min;
//     int sec;

//     Time(int h, int mn, int sc)
//     {
//         hr = h;
//         min = mn;
//         sec = sc;
//     }

//     void display()
//     {
//         cout << hr << ":" << min << ":" << sec<<endl;
//     }

//     Time operator+(Time inp)
//     {
//         int rhr, rmin, rsec;

//         rsec = sec + inp.sec;
//         rmin = min + inp.min + (rsec / 60);
//         rhr = hr + inp.hr + (rmin / 60);

//         rsec %= 60;
//         rmin %= 60;
//         rhr %= 24;

//         return Time(rhr, rmin, rsec);
//     }
//     Time operator-(Time inp)
//     {
//         int rhr, rmin, rsec;

//         rsec = sec - inp.sec;
//         rmin = min - inp.min -(rsec / 60);
//         rhr = hr - inp.hr - (rmin / 60);

//         if (rsec<0){
//             rsec=-(rsec);
//         }
//         if (rmin <0 ){
//             rmin=-rmin;
//         }
//         if ( rhr<0){
//             rhr=-(rhr);
//         }
//         else {
//             rsec=rsec;
//             rmin=rmin;
//             rhr=rhr;
//         }

//         rsec %= 60;
//         rmin %= 60;
//         rhr %= 24;

//         return Time(rhr, rmin, rsec);
//     }
// };
// int main()
// {
//     int hr1, min1, sec1;
//     int hr2, min2, sec2;
//     cin >> hr1 >> min1 >> sec1;
//     cin >> hr2 >> min2 >> sec2;

//     Time t1(hr1, min1, sec1);
//     Time t2(hr2, min2, sec2);

//     Time t3 = t1 + t2;
//     t3.display();
//     Time t4 = t1 - t2;
//     t4.display();

//     return 0;
// }

// c1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Time
// {
// // private:
// public:
//     int hr;
//     int min;
//     int sec;

//     Time(int h, int mn, int sc)
//     {
//         this->hr = h;
//         this->min = mn;
//         this->sec = sc;
//     }

//     void display()
//     {
//         cout << hr << ":" << min << ":" << sec<<endl;
//     }

//     Time operator+(Time temp)
//     {
//         Time temp1(0,0,0);
//         temp1.sec = sec + temp.sec;
//         temp1.min = min + temp.min + (temp1.sec / 60);
//         temp1.hr = hr + temp.hr + (temp1.min / 60);

//         temp1.sec %= 60;
//         temp1.min %= 60;
//         temp1.hr %= 24;

//         return temp1;
//     }
//     Time operator-(Time &temp)
//     {
//         Time temp1(0,0,0);
//         temp1.sec = sec - temp.sec;
//         temp1.min = min - temp.min - (temp1.sec / 60);
//         temp1.hr = hr -temp.hr - (temp1.min / 60);

//         if (temp1.sec<0){
//             temp1.sec=-(temp1.sec);
//         }
//         if (temp1.min <0 ){
//             temp1.min=-temp1.min;
//         }
//         if ( temp1.hr<0){
//             temp1.hr=-(temp1.hr);
//         }

//         temp1.sec %= 60;
//         temp1.min %= 60;
//         temp1.hr %= 24;

//         return temp1;
//     }
// };
// int main()
// {
//     int hr1, min1, sec1;
//     int hr2, min2, sec2;
//     cin >> hr1 >> min1 >> sec1;
//     cin >> hr2 >> min2 >> sec2;

//     Time t1(hr1, min1, sec1);
//     Time t2(hr2, min2, sec2);

//     Time t3 = t1 + t2;
//     t3.display();
//     Time t4 = t1 - t2;
//     t4.display();

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c2
// addition of matrix with operator overloading
// 1 2  5 1
// 3 4  2 6
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class matrix
// {
// private:
//     int **mat;
//     int ros;
//     int col;

// public:
//     matrix(int m, int n)
//     {
//         ros = m;
//         col = n;
//         mat = new int *[ros];
//         for (int i = 0; i < ros; i++)
//         {
//             mat[i] = new int[col];
//         }
//     }

//     void inputmatrix()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     matrix operator+(matrix other)
//     {

//         if (ros != other.ros || col != other.col)
//         {
//             cout << "addition of two matrix not possible" << endl;
//             return matrix(0, 0);
//         }

//         matrix result(ros,col);
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 result.mat[i][j] = mat[i][j] + other.mat[i][j];
//             }
//         }
//         return result;
//     }

//     void display()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << mat[i][j]<<" ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int rs, cs;
//     cin >> rs >> cs;
//     matrix mtx1(rs, cs);
//     mtx1.inputmatrix();
//     matrix mtx2(rs, cs);
//     mtx2.inputmatrix();

//     matrix result = mtx1 + mtx2;
//     result.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class addsmtrix
// {
// private:
//     int **arr;
//     int ros;
//     int col;

// public:
//     addsmtrix(int rs, int cs)
//     {
//         ros = rs;
//         col = cs;
//         arr = new int *[ros];
//         for (int i = 0; i < ros; i++)
//         {
//             arr[i] = new int[col];
//         }
//     }

//     void input()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//     }

//     void print()
//     {
//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     addsmtrix operator*(addsmtrix &other)
//     {
//         if (col != other.ros)
//         {
//             cout << "multiplication not possible" << endl;
//             return addsmtrix(0, 0);
//         }
//         addsmtrix reslt(ros, other.col);

//         for (int i = 0; i < ros; i++)
//         {
//             for (int j = 0; j < other.col; j++)
//             {
//                 reslt.arr[i][j]=0;
//                 for (int l = 0; l < col; l++)
//                 {
//                     reslt.arr[i][j] += arr[i][l] * other.arr[l][j];
//                 }
//             }
//         }
//         return reslt;
//     }
// };

// int main()
// {
//     int rs, cs;
//     cin >> rs >> cs;
//     addsmtrix obj1(rs, cs);
//     obj1.input();
//     addsmtrix obj2(rs, cs);
//     obj2.input();
//     addsmtrix reslt1 = obj1 * obj2;
//     reslt1.print();
//     return 0;
// }

// // -----------------------------------------------------------------------------------------------------------------
// // c3,4,5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class dis
// {
// private:
//     double feet, inch;

// public:
//     void readdiatande()
//     {
//         cin >> feet >> inch;
//     }

//     void display()
//     {
//         cout << feet << " " << inch <<endl;
//     }

//     dis operator+(dis temp)
//     {
//         dis temp1;
//         temp1.feet = feet + temp.feet;
//         temp1.inch = inch + temp.inch;
//         if (temp1.inch >= 12)
//         {
//             temp1.feet++;
//             temp1.inch = temp1.inch - 12;
//         }
//         return temp1;
//     }
//     dis operator-(dis temp)
//     {
//         dis temp1;
//         temp1.feet = feet - temp.feet;
//         temp1.inch = inch - temp.inch;

//         if (temp1.inch < 0)
//         {
//             temp1.feet = temp1.feet - 1;
//             temp1.inch = temp1.inch + 12;
//         }
//         return temp1;
//     }
// };
// int main()
// {
//     dis obj1, obj2;
//     obj1.readdiatande();
//     obj2.readdiatande();

//     dis obj3=obj1+obj2;
//     obj3.display();
//     obj3=obj1-obj2;
//     obj3.display();

//     return 0;
// }

// // c6,7
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
//     complx operator >>(complx temp)
//     {
//         complx temp1;
//         temp1.real = real + temp.real;
//         temp1.image = image - temp.image;
//         return temp1;
//     }
// };

// int main()
// {
//     complx ob1, ob2, ob3;
//     ob1.input();
//     ob2.input();
//     ob3 = ob1 >> ob2;
//     ob3.output();
//     return 0;
// }

// c8
//  #include <iostream>
//  #include <string>
//  using namespace std;
//  class StringManipulator
//  {
//  private:
//      string str;

// public:
//     StringManipulator(string s)
//     {
//         str = s;
//     }
//     bool operator>(StringManipulator other)
//     {
//         return str > other.str;
//     }
//     bool operator<(StringManipulator other)
//     {
//         return str < other.str;
//     }
//     bool operator==(StringManipulator other)
//     {
//         return str == other.str;
//     }
// };
// int main()
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     StringManipulator sm1(str1);
//     StringManipulator sm2(str2);
//     string g, s, e;
//     (sm1 > sm2) ? g = "true" : g = "false";
//     (sm1 < sm2) ? s = "true" : s = "false";
//     (sm1 == sm2) ? e = "true" : e = "false";
//     cout << "String1 > String2: " << g << endl;
//     cout << "String1 < String2: " << s << endl;
//     cout << "String1 == String2: " << e << endl;
//     return 0;
// }

// c9
// #include <iostream>
// using namespace std;
// class Shape
// {
// public:
//     virtual double getArea()=0;
// };
// class Square : public Shape
// {
// private:
//     double side;

// public:
//     Square(double s)
//     {
//         side = s;
//     }
//     double getArea()
//     {
//         return side * side;
//     }
// };
// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     double getArea()
//     {
//         return 3.14159 * radius * radius; // Using Pi as approximately 3.14159
//     }
// };
// int main()
// {
//     // Creating instances of Square and Circle
//     Square square(5.0); // Square with side 5 units
//     Circle circle(3.0); // Circle with radius 3 units
//     // Calculating and displaying areas
//     cout << "Area of Square: " << square.getArea() << endl;
//     cout << "Area of Circle: " << circle.getArea() << endl;
//     return 0;
// }

// c9
// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
// public:
//     int real;
//     int img;
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     Complex(int r)
//     {
//         real = r;
//         img = 0;
//     }
//     Complex operator-()
//     {
//         return Complex(-real, -img);
//     }
//     Complex operator++()
//     { // preincrement
//         return Complex(++real, ++img);
//     }
//     // Complex operator++(int)
//     // { // postincrement
//     //     return Complex(++real, ++img);
//     // }
//     Complex operator--()
//     {
//         return Complex(--real, --img);
//     }
//     Complex operator--(int)
//     {
//         return Complex(--real, --img);
//     }
//     void display()
//     {
//         cout << real << " + i" << img << endl;
//     }
// };
// int main()
// {
//     Complex c1(1, 1);
//     Complex c2(2, 2);
//     c1.display();
//     Complex negC1 = -c1;
//     negC1.display();
//     Complex plusC1 = ++c1;
//     plusC1.display();
//     Complex minusC1 = --c1;
//     minusC1.display();
//     return 0;
// }

// #include <iostream>
// // Base class Fruit
// class Fruit
// {
// protected:
//     int numFruits;

// public:
//     Fruit()
//     {
//         numFruits = 0;
//     }
//     void addToBasket(int count)
//     {
//         numFruits += count;
//     }
//     int getNumFruits() const
//     {
//         return numFruits;
//     }
// };
// // Derived class Apples
// class Apples : public Fruit
// {
// public:
//     void addApples(int count)
//     {
//         addToBasket(count);
//     }
//     int getApples() const
//     {
//         return getNumFruits();
//     }
// };
// // Derived class Mangoes
// class Mangoes : public Fruit
// {
// public:
//     void addMangoes(int count)
//     {
//         addToBasket(count);
//     }
//     int getMangoes() const
//     {
//         return getNumFruits();
//     }
// };
// int main()
// {
//     Apples appleBasket;
//     Mangoes mangoBasket;
//     appleBasket.addApples(5);  // Adding 5 apples to the basket
//     mangoBasket.addMangoes(8); // Adding 8 mangoes to the basket
//     // Display the count of each type of fruit and the total number of fruits
//     cout << "Number of Apples: " << appleBasket.getApples() << endl;
//     cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
//     cout << "Total number of Fruits: " << appleBasket.getNumFruits() + mangoBasket.getNumFruits() << endl;
//     return 0;
// }

// c11
// #include <iostream>
// using namespace std;
// // Base class Mammals
// class Mammals
// {
// public:
//     void displayMammal()
//     {
//         cout << "I am a mammal." << endl;
//     }
// };
// // Base class MarineAnimals
// class MarineAnimals
// {
// public:
//     void displayMarineAnimal()
//     {
//         cout << "I am a marine animal." << endl;
//     }
// };
// // Derived class BlueWhale inheriting from Mammals and MarineAnimals
// class BlueWhale : public Mammals, public MarineAnimals
// {
// public:
//     void displayBlueWhale()
//     {
//         cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
//     }
// };
// int main()
// {
//     Mammals mammal;
//     MarineAnimals marineAnimal;
//     BlueWhale blueWhale;
//     cout << "Calling functions using objects of respective classes:" << endl;
//     cout << "\nFunction of Mammals using object of Mammals:" << endl;
//     mammal.displayMammal();
//     cout << "\nFunction of MarineAnimals using object of MarineAnimals:" << endl;
//     marineAnimal.displayMarineAnimal();
//     cout << "\nFunction of BlueWhale using object of BlueWhale:" << endl;
//     blueWhale.displayBlueWhale();
//     cout << "\nFunctions of each parent class using object of BlueWhale:" << endl;
//     blueWhale.displayMammal();       // Function of Mammals through BlueWhale object
//     blueWhale.displayMarineAnimal(); // Function of MarineAnimals through BlueWhale object
//     return 0;
// }

// code stdio
// c9,10
// comples number class
// #include <bits/stdc++.h>
// #include<iostream>

// using namespace std;

// class ComplexNumbers {
//     // Complete this class

//     public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl,int img){
//         this->real=rl;
//         this->imag=img;
//     }

//     ComplexNumbers operator+(ComplexNumbers &obj){

//         int treal,timag;
//         treal=real + obj.real;
//         timag=imag + obj.imag;

//         return ComplexNumbers(treal,timag);

//     }

//     ComplexNumbers operator*(ComplexNumbers &obj){
//         int t1,t2,t3,t4;
//         t1=real * obj.real;
//         t2=real * obj.imag;
//         t3=imag * obj.real;
//         t4=imag * obj.imag;

//         int val=t1 - t4;
//         int val1=t2 + t3;
//         return ComplexNumbers(val,val1);
//     }

//     void print(){
//         cout<<real<<" + i"<<imag<<endl;
//     }

// };

// int main() {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     int choice;
//     cin >> choice;

//     if (choice == 1) {
//         ComplexNumbers ans=c1+c2;
//         ans.print();
//     }
//     else if (choice == 2) {
//         ComplexNumbers ans1=c1*c2;
//         ans1.print();
//     }
//     else {
//         return 0;
//     }
// }

// c11
// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// class ComplexNumbers
// {
//     // Complete this class

// public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl, int img)
//     {
//         this->real = rl;
//         this->imag = img;
//     }

//     ComplexNumbers plus(ComplexNumbers &obj)
//     {
//         int temp1,temp2;
//         temp1=real + obj.real;
//         temp2=imag + obj.imag;
//         return ComplexNumbers(temp1,temp2);
//     }

//     void print(){
//         cout<<real<<" + i"<<imag<<endl;
//     }
// };

// int main()
// {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     ComplexNumbers ans=c1.plus(c2);
//     ans.print();
//     return 0;
// }

// c12
// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// class ComplexNumbers
// {
//     // Complete this class

// public:
//     int real;
//     int imag;

//     ComplexNumbers(int rl, int img)
//     {
//         this->real = rl;
//         this->imag = img;
//     }

//     void plus(ComplexNumbers &obj)
//     {
//         this->real += obj.real;
//         this->imag += obj.imag;
//     }

//     void print()
//     {
//         cout << real << " + i" << imag << endl;
//     }
// };

// int main()
// {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     // Perform addition and store the result in c1
//     c1.plus(c2);

//     // Print the modified c1
//     c1.print();

//     // Print the unchanged c2
//     c2.print();

//     return 0;
// }

// c13
// #include <iostream>
// using namespace std;

// class Complex
// {
// public:
//     int a, b;
//     void input(string s)
//     {
//         int v1 = 0;
//         int i = 0;
//         while (s[i] != '+')
//         {
//             v1 = v1 * 10 + s[i] - '0';
//             i++;
//         }
//         while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
//         {
//             i++;
//         }
//         int v2 = 0;
//         while (i < s.length())
//         {
//             v2 = v2 * 10 + s[i] - '0';
//             i++;
//         }
//         a = v1;
//         b = v2;
//     }

//     Complex operator+(const Complex& other) const {
//         Complex temp;
//         temp.a = a + other.a;
//         temp.b = b + other.b;
//         return temp;
//     }

//     friend ostream& operator<<(ostream& os, const Complex& c);
// };

// ostream &operator<<(ostream &os, const Complex &c)
// {
//     os << c.a << "+i" << c.b;
//     return os;
// }

// int main()
// {
//     Complex x, y;
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     x.input(s1);
//     y.input(s2);
//     Complex z = x + y;
//     cout << z << endl;

//     return 0;
// }
