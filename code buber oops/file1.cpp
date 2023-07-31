// #include<iostream>
// #include "hello.cpp"
// using namespace std;
// // class Hero {
// //     // properties
// //     // int height;
// // };
// int main(int argc, char const *argv[])
// {
//     Hero h1;
//     cout<<"size of :"<<sizeof(h1)<<endl;
//     return 0;
// }

#include <iostream>
#include "bits/stdc++.h"
using namespace std;
class Hero
{
    // properties
private:
    int health;

public:
    char *name;
    char level;

    // statically
    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[1000];
    }

    // parameterised constructor
    Hero(int health)
    {
        cout << "this value:" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char k)
    {
        level = k;
    }

    void print()
    {
        cout << endl;
        cout << "[name:" << this->name << " ,";
        cout << "health:" << this->health << " ,";
        cout << "level:" << this->level << " ]";
        cout << endl
             << endl;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name + 1)];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    ~Hero(){
        cout<<"Dynamically called Destructor"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // statically
    Hero a;

    // Dynamically
    // Hero *b=new Hero();
    // manually called destructor
    // delete b;













    // Hero hero1;
    // hero1.sethealth(79);
    // hero1.setlevel('B');
    // char name[8] = "saksham";
    // hero1.setname(name);

    // // hero1.print();

    // // use default  copy constructor
    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

    // Hero S(56,'d');
    // S.print();

    // // copy constructor
    // Hero R(S);
    // R.print();

    // // object created statically
    // Hero remash(10);
    // // cout << "address of remash is:" << &remash << endl;
    // remash.print();

    // // dynamically
    // Hero *b = new Hero(11);
    // b->print();

    // Hero temp(22,'B');
    // temp.print();

    // statically
    // Hero a;
    // a.sethealth(70);
    // a.setlevel('S');
    // cout << "level is :" << a.level << endl;
    // cout << "health is :" << a.gethealth() << endl;
    // // dynamically
    // Hero *b = new Hero;
    // b->setlevel('D');
    // b->sethealth(70);
    // cout << "level in dynamically is:" << (*b).level << endl;
    // cout << "health in dynamically is :" << (*b).gethealth() << endl;

    // cout<<"level is :"<<b->level<<endl;
    // cout<<"health is :"<<b->gethealth()<<endl;

    // creating object
    //  Hero remash;
    //  cout<<"Ramesh size is :"<<sizeof(remash)<<endl;
    //  cout << "Ramesh health is :"<<remash.gethealth()<<endl;
    //  remash.sethealth(70);
    //  remash.level='A';
    //  cout<<remash.gethealth()<<endl;
    //  cout<<remash.level<<endl;
    return 0;
}
