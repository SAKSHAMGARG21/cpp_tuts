// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class base
// {
// public:
//     int varbase=1;
//     virtual void display()
//     {
//         cout << "1 display base cALSS variable " << varbase << endl;
//     }
// };

// class drived : public base
// {
// public:
//     int drivedvar=2;
//     void display()
//     {
//         cout << "2 drived class " << drivedvar << endl;
//     }
// };
// int main()
// {
//     base *basepointer;
//     base obj_base;
//     drived dr;

//     basepointer = &dr;

//     basepointer->display();
//     obj_base.display();
//     dr.display();

//     return 0;
// }

// example for virtual function

// -----------------------------------------------------------------------------------------------------------------
// c
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class CWH
// {
// protected:
//     string title;
//     float rating;
// public:
//     CWH(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display() {}
// };

// class CWHVideo : public CWH
// {
//     float videoLength;

// public:
//     CWHVideo(string s, float r, float vl) : CWH(s, r)
//     {
//         videoLength = vl;
//     }
//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Length of this video is: " << videoLength << " minutes" << endl;
//     }
// };

// class CWHText : public CWH
// {

//     int words;

// public:
//     CWHText(string s, float r, int wc):CWH(s,r)
//     {
//         words = wc;
//     }
//     void display()
//     {
//         cout << "This is an amazing text tutorial with title " << title << endl;
//         cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
//         cout << "No of words in this text tutorial is: " << words << " words" << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for Code With Harry Video
//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);

//     // for Code With Harry Text
//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);

//     CWH *tuts[2];
//     tuts[0] = &djVideo;
//     tuts[1] = &djText;

//     tuts[0]->display();
//     tuts[1]->display();

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class CWH
// {
// protected:
//     string title;
//     float rating;

// public:
//     CWH(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display() = 0;
// };
// class CWHVideo : public CWH
// {
//     float videoLength;

// public:
//     CWHVideo(string s, float r, float vl) : CWH(s, r)
//     {
//         videoLength = vl;
//     }
//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Length of this video is: " << videoLength << " minutes" << endl;
//     }
// };
// class CWHText : public CWH
// {
//     int words;

// public:
//     CWHText(string s, float r, int wc) : CWH(s, r)
//     {
//         words = wc;
//     }
//     void display()
//     {
//         cout << "This is an amazing text tutorial with title " << title << endl;
//         cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
//         cout << "No of words in this text tutorial is: " << words << " words" << endl;
//     }
// };
// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for Code With Harry Video
//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);

//     // for Code With Harry Text
//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);

//     CWH *tuts[2];
//     tuts[0] = &djVideo;
//     tuts[1] = &djText;

//     tuts[0]->display();
//     tuts[1]->display();

//     return 0;
// }
