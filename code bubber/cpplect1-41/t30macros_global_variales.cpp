// greeks for greeks reference

// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Macro definition
// #define LIMIT 5

// // Driver Code
// int main()
// {
// 	// Print the value of macro defined
// 	cout << "The value of LIMIT"
// 		<< " is " << LIMIT;

// 	return 0;
// }

// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Macro definition
// #define AREA(l, b) (l * b)

// // Driver Code
// int main()
// {
// 	// Given lengths l1 and l2
// 	int l1 = 10, l2 = 5, area;

// 	// Find the area using macros
// 	area = AREA(l1, l2);

// 	// Print the area
// 	cout << "Area of rectangle"
// 		 << " is: " << area;

// 	return 0;
// }

// object like macros
// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Macro definition
// #define DATE 31

// // Driver Code
// int main()
// {
// 	// Print the message
// 	cout << "Lockdown will be extended"
// 		<< " upto " << DATE
// 		<< "-MAY-2020";

// 	return 0;
// }

// C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Multi-line Macro definition
// #define ELE 1, \
// 			2, \
// 			3

// // Driver Code
// int main()
// {
// 	// Array arr[] with elements
// 	// defined in macros
// 	int arr[] = { ELE };

// 	// Print elements
// 	printf("Elements of Array are:\n");

// 	for (int i = 0; i < 3; i++) {
// 		cout << arr[i] << ' ';
// 	}

// 	return 0;
// }

// // C++ program to illustrate macros
// #include <iostream>
// using namespace std;

// // Function-like Macro definition
// #define min(a, b) (((a) < (b)) ? (a) : (b))

// // Driver Code
// int main()
// {

// 	// Given two number a and b
// 	int a = 18;
// 	int b = 76;

// 	cout << "Minimum value between"
// 		<< a << " and " << b
// 		<< " is: " << min(a, b);

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// #define PI 3.1416
// #define AREA(r) (PI*(r)*(r))

// int main() {

// 	float r = 7; // radius of circle

// 	cout<<"Area of Circle with radius " << r <<": "<< AREA(r);

// 	return 0;
// }

// This code is contributed by balbiriitbombay3602

// _____________________________________________love bubber_____________________________________________________

// counting
// #include<iostream>
// using namespace std;

// void print(int n) {
//     //base case
//     if(n == 0) {
//         return ;
//     }

//     //Recursive relation
//     print(n-1);

//     cout << n << endl;
// }

// int main() {

//     int n;
//     cin >> n;
//     cout << endl;
//     print(n);

//     return 0;
// }

// default args

// #include<iostream>
// using namespace std;

// void print(int arr[], int n  , int start = 0) {

//     for(int i = start; i<n; i++) {
//         cout << arr[i] << endl;
//     }

// }

// int main() {

//     int arr[5] = {1,4,7,8,9};
//     int size = 5;

//     print(arr, size);
//     cout << endl;
//     print(arr, size, 2);

//     return 0;
// }

// global variable

// #include<iostream>
// using namespace std;

// int score = 15;

// void a(int& i) {

//     cout << score << " in a" << endl;
//     score++;
//     char ch = 'a';
//     cout << i << endl;
// }

// void b(int& i) {
//     cout << score << " in b" << endl;
//     cout << i << endl;
// }

// int main() {
//     cout << score << " in main" << endl;
//     int i = 5;
//     a(i);
//     b(i);

//     return 0;
// }

// inline function

// #include<iostream>
// using namespace std;
// inline int getMax(int& a, int& b) {
//     return (a>b) ? a : b;
// }

// int main() {

//     int a = 1, b = 2;
//     int ans = 0;

//     ans = getMax(a,b);
//     cout << ans << endl;

//     a = a + 3;
//     b = b + 1;

//     ans = getMax(a,b);
//     cout << ans << endl;

//     return 0;
// }

// macros

// #include<iostream>
// using namespace std;

// #define PI 3.14

// int main() {

//     int r = 5;
//     //double pi = 3.14;

//     double area = PI * r * r;

//     cout << "Area is " << area << endl;

//     return 0;
// }