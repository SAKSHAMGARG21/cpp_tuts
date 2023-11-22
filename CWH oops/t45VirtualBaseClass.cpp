// -----------------------------------------------------------------------------------------------------------------
// c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_rollno(int n)
    {
        roll_no = n;
    }

    void print_no(void)
    {
        cout << "Your roll no is :" << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float mm, float pm)
    {
        math = mm;
        physics = pm;
    }

    void print_test(void)
    {
        cout << "Your result is here:" << endl
             << "Math marks :" << math << endl
             << "Physics marks :" << physics << endl;
    }
};

class sprts : virtual public student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is : " << score << endl;
    }
};

class result : public test, public sprts
{
protected:
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_no();
        print_test();
        print_score();
        cout << "Your score is : " << total << endl;
    }
};
int main()
{
    result rust;

    rust.set_rollno(2221);
    rust.set_marks(56.4, 98.3);
    rust.set_score(9);
    rust.display();
    return 0;
}