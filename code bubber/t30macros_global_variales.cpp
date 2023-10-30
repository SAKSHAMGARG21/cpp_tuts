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
// 		<< " is: "<<
// 		area;

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
#include <iostream>
using namespace std;

// Multi-line Macro definition
#define ELE 1, \
			2, \
			3

// Driver Code
int main()
{
	// Array arr[] with elements
	// defined in macros
	int arr[] = { ELE };

	// Print elements
	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}

// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Driver Code
int main()
{

	// Given two number a and b
	int a = 18;
	int b = 76;

	cout << "Minimum value between"
		<< a << " and " << b 
		<< " is: " << min(a, b);

	return 0;
}

#include <iostream>
using namespace std;
#define PI 3.1416
#define AREA(r) (PI*(r)*(r))

int main() {
	
	float r = 7; // radius of circle
	
	cout<<"Area of Circle with radius " << r <<": "<< AREA(r);

	return 0;
}

// This code is contributed by balbiriitbombay3602
