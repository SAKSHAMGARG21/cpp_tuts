// -----------------------------------------------------------------------------------------------------------------
// c2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class stdc
// {
// private:
//     int phone;
//     char health;

// public:
//     int rolno;
//     string name;
//     int age;
//     int marks[3];
//     int total;

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

//     void setmarks()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> marks[i];
//         }
//     }

//     void setphone(int n)
//     {
//         phone = n;
//     }

//     void sethealth(char ch)
//     {
//         health = ch;
//     }

//     // getters
//     char gethealth()
//     {
//         return health;
//     }

//     int getphone()
//     {
//         return phone;
//     }

//     // constructors
//     stdc()
//     {
//         this->phone = 0;
//         this->age = 0;
//         this->rolno = 0;
//     }

//     stdc(int phone, char health, int rolno, int age, const string &name)
//     {
//         this->phone = phone;
//         this->health = health;
//         this->rolno = rolno;
//         this->age = age;
//         this->name = name;
//     }

//     stdc(int rolno, int age, const string &name)
//     {
//         this->rolno = rolno;
//         this->age = age;
//         this->name = name;
//     }

//     void print(int i)
//     {
//         cout << "Roll no:" << this->rolno << endl;
//         cout << "Name:" << i + 1 << this->name << endl;
//         cout << "Phone:" << this->phone << endl;
//         cout << "Age :" << this->age << endl;
//         cout << "Health:" << this->health << endl;
//     }
// };

// int main()
// {
//     // c2
//     // stdc obj1[2];

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     cin >> obj1[i].rolno;
//     //     cin >> obj1[i].age;
//     //     cin.ignore(); // To consume the newline character left in the buffer
//     //     getline(cin, obj1[i].name);
//     //     char h;
//     //     cin >> h;
//     //     obj1[i].sethealth(h);
//     //     int p;
//     //     cin >> p;
//     //     obj1[i].setphone(p);
//     // }

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     char healthans = obj1[i].gethealth();
//     //     int phoneans = obj1[i].getphone();
//     //     cout << "Health :" << i + 1 << "=" << healthans << endl;
//     //     cout << "Phone no :" << i + 1 << "=" << phoneans << endl;
//     //     cout << "Name :" << i + 1 << "=" << obj1[i].name << endl;
//     //     cout << "Age:" << i + 1 << "=" << obj1[i].age << endl;
//     //     cout << "Roll no: " << i + 1 << "=" << obj1[i].rolno << endl;
//     // }

//     // constructor
//     // stdc obj2[2];

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     int phne;
//     //     cin>>phne;
//     //     char h;
//     //     cin >> h;
//     //     int r;
//     //     cin>>r;
//     //     int a;
//     //     cin >> a;
//     //     string nme;
//     //     cin.ignore();
//     //     getline(cin,nme);
//     //     obj2[i]=stdc(phne,h,r,a,nme);
//     // }

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     obj2[i].print(i);
//     // }

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
//     int marks[3];

//     // setters
//     void setrolno(int rolno)
//     {
//         this->rolno = rolno;
//     }

//     void setname(const string &name)
//     {
//         this->name = name;
//     }

//     void setmarks()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> marks[i];
//         }
//     }

//     int countmarks(){
//         int sum=0;
//         for (int i = 0; i < 3; i++)
//         {
//             sum+=marks[i];
//         }
//         return sum;
//     }

//     void print(int i)
//     {
//         cout << "Roll no:" << this->rolno << endl;
//         cout << "Name:" << this->name << endl;

//     }
// };

// int main()
// {

//     stdc obj1[2];

//     for (int i = 0; i < 2; i++)
//     {
//         cin >> obj1[i].rolno;
//         cin.ignore(); // To consume the newline character left in the buffer
//         getline(cin, obj1[i].name);
//         obj1[i].setmarks();
//     }

//     int mx=INT_MIN;
//     int idx=-1;
//     for (int i = 0; i < 2; i++)
//     {
//         int totalmrks=obj1[i].countmarks();
//         if (totalmrks > mx){
//             mx=totalmrks;
//             idx=i;
//         }
//     }

//     cout<<obj1[idx].name<<" "<<mx<<endl;

//     return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// class Student
// {
// public:
//     int rollNumber;
//     char name[20];
//     int marks[5];

//     void input()
//     {
//         cin >> rollNumber;
//         cin.ignore(); // Consume the newline character left in the buffer
//         cin.getline(name, 20);

//         for (int j = 0; j < 5; j++)
//         {
//             cin >> marks[j];
//         }
//     }

//     int calculateTotalMarks()
//     {
//         int total = 0;
//         for (int j = 0; j < 5; j++)
//         {
//             total += marks[j];
//         }
//         return total;
//     }
// };

// int main()
// {
//     Student students[4];

//     for (int i = 0; i < 4; i++)
//     {
//         students[i].input();
//     }

//     int maxTotal = INT_MIN;
//     int indexOfMaxTotal = -1;

//     for (int i = 0; i < 4; i++)
//     {
//         int totalMarks = students[i].calculateTotalMarks();
//         if (totalMarks > maxTotal)
//         {
//             maxTotal = totalMarks;
//             indexOfMaxTotal = i;
//         }
//     }

//     cout << "Student with the highest marks:\n";
//     cout << students[indexOfMaxTotal].name << " " << maxTotal << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class stdc
// {

// private:
//     int phone;
//     char health;

// public:
//     int rolno;
//     string name;
//     int age;
//     int marks[3];
//     int total;

//     // setters
//     void setrolno(int rolno)
//     {
//         this->rolno = rolno;
//     }

//     void setname(const string &name)
//     {
//         this->name = name;
//     }

//     void setage(int age)
//     {
//         this->age = age;
//     }

//     void setmarks(const int marks[3])
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             this->marks[i] = marks[i];
//         }
//     }

//     void setphone(int n)
//     {
//         phone = n;
//     }

//     void sethealth(char ch)
//     {
//         health = ch;
//     }

//     // getters
//     char gethealth()
//     {
//         return health;
//     }

//     int getphone()
//     {
//         return phone;
//     }

//     // constructors
//     stdc() : phone(0), health(' '), rolno(0), age(0), name("") {}

//     stdc(int phone, char health, int rolno, int age, const string &name) : phone(phone), health(health), rolno(rolno), age(age), name(name) {}

//     stdc(int rolno, int age, const string &name) : phone(0), health(' '), rolno(rolno), age(age), name(name) {}
// };

// int main()
// {
//     stdc obj1;

//     obj1.setrolno(21);
//     string name1 = "saksham garg";
//     obj1.setname(name1);
//     obj1.setage(12);
//     obj1.sethealth('A');
//     obj1.setphone(1234);

//     char healthans = obj1.gethealth();
//     int phoneans = obj1.getphone();
//     cout << healthans << " " << phoneans << endl;
//     cout << obj1.name << " " << obj1.age << " " << obj1.rolno << endl;

//     return 0;
// }

// code stdio
// question
// #include<iostream>
// #include <bits/stdc++.h>

// using namespace std;

// class Person {

//     // Complete the class
//     private:
//     char name[100];
//     int age;

//     public:
//     void setname(char name[]){
//         strcpy(this->name,name);
//     }

//     void setage(int ag){
//         this->age=ag;
//     }

//     char *getname(){
//         return name;
//     }

//     int getage(){
//         return age;
//     }
// };

// int main() {

//     //Write your code here
//     Person p1;

//     char nme[100];
//     cin>>nme;
//     p1.setname(nme);

//     int ag;
//     cin >> ag;
//     p1.setage(ag);

//     cout<<"The name of the person is "<<p1.getname()<<" and the age is "<<p1.getage()<<".";

//     return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// class Car {
//     // Write your constructor and printCarInfo method here.
//     public:
//     int n;
//     string clr;
// };

// class RaceCar: public Car {
//     // Write your constructor and printRaceCarInfo method here.
//     public:
//     int mxspd;
//     RaceCar(int n,string &clr,int mxspd){
//         this->n=n;
//         this->clr=clr;
//         this->mxspd=mxspd;
//     }
//     void printInfo(){
//         cout<<"noOfGear: "<<this->n<<endl;
//         cout<<"color: "<<this->clr<<endl;
//         cout<<"maxSpeed: "<<this->mxspd<<endl;
//     }
// };

// int main() {
//     int noOfGear, maxSpeed;
//     string color;
//     cin >> noOfGear >> color >> maxSpeed;
//     RaceCar raceCar(noOfGear, color, maxSpeed);
//     raceCar.printInfo();
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Create the classes here
// class grndfather
// {
// public:
//    string grndname;
// };

// class father : public grndfather
// {
// public:
//    string fathername;
// };

// class son : public father
// {
// public:
//    string sonname;

// //    const keyword is important
//     son(const string& sonname, const string& fathername, const string& grndname)
//     {
//         this->sonname = sonname;
//         this->fathername = fathername;
//         this->grndname = grndname;
//     }

//     void printnames()
//     {
//         cout << "sonname: " << this->sonname << endl;
//         cout << "fathername: " << this->fathername << endl;
//         cout << "grandfather: " << this->grndname << endl;
//     }
// };

// int main()
// {
//     son obj("Saurabh", "Ramesh", "Suresh");

//     obj.printnames();

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Grandfather {
// public:
//     char grndname[50];
// };

// class Father : public Grandfather {
// public:
//     char fathername[50];
// };

// class Son : public Father {
// public:
//     char sonname[50];

//     Son(const char* sonname, const char* fathername, const char* grndname) {
//         strncpy(this->sonname, sonname, sizeof(this->sonname) - 1);
//         strncpy(this->fathername, fathername, sizeof(this->fathername) - 1);
//         strncpy(this->grndname, grndname, sizeof(this->grndname) - 1);

//         // Ensure null-terminated strings
//         this->sonname[sizeof(this->sonname) - 1] = '\0';
//         this->fathername[sizeof(this->fathername) - 1] = '\0';
//         this->grndname[sizeof(this->grndname) - 1] = '\0';
//     }
//     Son() {}

//     void printNames() {
//         cout << "Son's Name: " << this->sonname << endl;
//         cout << "Father's Name: " << this->fathername << endl;
//         cout << "Grandfather's Name: " << this->grndname << endl;
//     }
// };

// int main() {
//     char sonname[50], fathername[50], grndname[50];

//     cout << "Enter son's name, father's name, and grandfather's name: ";
//     cin >> sonname >> fathername >> grndname;

//     Son obj(sonname, fathername, grndname);
//     obj.printNames();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class GrandFather
// {
// public:
//     string grandFatherName;

//     GrandFather(string grandFatherName)
//     {
//         this->grandFatherName = grandFatherName;
//     }
// };

// class Father : public GrandFather
// {
// public:
//     string fatherName;

//     Father(string fatherName, string grandFatherName) : GrandFather(grandFatherName)
//     {
//         this->fatherName = fatherName;
//     }
// };

// class Son : public Father
// {
// public:
//     string sonName;

//     Son(string sonName, string fatherName, string grandFatherName) : Father(fatherName, grandFatherName)
//     {
//         this->sonName = sonName;
//     }
//     void printName()
//     {

//         cout << "sonname: " << this->sonName << endl;
//         cout << "fathername: " << this->fatherName << endl;
//         cout << "grandfather: " << this->grandFatherName << endl;
//     }
// };

// int main()
// {
//     Son s1("Saurabh", "Ramesh", "Suresh");
//     s1.printName();
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class chkno{
//     public:
//     double vale;
//     chkno(double num){
//         vale=num;
//         if (vale>0){
//             cout<<vale<<" is a positive no."<<endl;
//         }
//         else if (vale==0){
//             cout<<vale<<" is a neutral."<<endl;
//         }
//         else{
//             cout<<vale<<" is a negtive."<<endl;
//         }
//     }
// };
// int main()
// {
//     double num;
//     cin>>num;
//     chkno ob1(num);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// c5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class chkst{
//     public:
//     string s;

//     chkst(string st){
//         s=st;
//     }

//     int cntvow(){
//         int c=0;
//         for (int  i = 0; i < s.size(); i++)
//         {
//             if (s[i]=='a' || s[i] == 'e' || s[i]=='i' || s[i]=='o' || s[i] == 'u' || s[i]=='A' || s[i]=='E' || s[i] =='I' || s[i]=='U' || s[i]=='O'){
//                 c++;
//             }
//         }
//         return c;
//     }
// };
// int main()
// {
//     string s;
//     cin>>s;

//     chkst obj1(s);
//     int ans=obj1.cntvow();
//     cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// bool isArmstrong(int n)
// {

//     int sum = 0, val = n;

//     while (val)
//     {

//         int x = val % 10;

//         sum += x * x * x;

//         val /= 10;
//     }

//     return sum == n;
// }

// int main()
// {

//     int n;

//     cin >> n;

//     cout << 1 << " ";

//     int first = 1;

//     for (int i = 1; i <= (n - 1); i++)
//     {

//         for (int j = first + 1;; j++)
//         {

//             if (isArmstrong(j))
//             {

//                 cout << j << " ";

//                 first = j;

//                 break;
//             }
//         }
//     }
// }

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int arr[] = {4, 3, 6, 2, 1, 1};
//     int ans=0;
//     for (int i = 0; i < 6; i++)
//     {
//         ans^=arr[i];
//     }

//     for (int i = 1; i <6; i++)
//     {
//         ans=ans^i;
//     }

//     cout<<ans<<endl;

//     return 0;
// }

// c8
// #include<iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void printTwoElements(int arr[], int n)

// {

//     int temp[n] = {}; // Creating temp array of size n with  // initial values as 0.

//     int repeatingNumber = -1;

//     int missingNumber = -1;

//     for (int i = 0; i < n; i++)
//     {

//         temp[arr[i] - 1]++;

//         if (temp[arr[i] - 1] > 1)
//         {

//             repeatingNumber = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {

//         if (temp[i] == 0)
//         {

//             missingNumber = i+1;

//             break;
//         }
//     }

//     cout << repeatingNumber << " " << missingNumber;
// }

// int main()

// {

//     int n;

//     cin >> n;

//     int arr[n];

//     for (int &i : arr)
//         cin >> i;

//     printTwoElements(arr, n);

//     return 0;
// }