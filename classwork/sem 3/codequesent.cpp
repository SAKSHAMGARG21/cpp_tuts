// // -----------------------------------------------------------------------------------------------------------------
// // c
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