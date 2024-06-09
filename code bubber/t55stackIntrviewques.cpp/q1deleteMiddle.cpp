
// void solve(stack<int>&inputStack, int count, int size) {
//     //base case
//     if(count == size/2) {
//         inputStack.pop();
//         return ;
//     }
    
//     int num = inputStack.top();
//     inputStack.pop();
    
// 	//RECURSIVE CALL
//     solve(inputStack, count+1, size);
    
//     inputStack.push(num);
    
// }

// void deleteMiddle(stack<int>&inputStack, int N){
	
//   	int count = 0;
//     solve(inputStack, count, N);
   
// }

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& inputStack, int count, int size) {
    // Base case: When half of the elements have been removed
    if (count == size / 2) {
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
    // Recursive call
    solve(inputStack, count + 1, size);
    
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> myStack;
    int N; // Number of elements in the stack
    
    cout << "Enter the number of elements in the stack: ";
    cin >> N;
    
    cout << "Enter the elements of the stack:\n";
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        myStack.push(num);
    }
    
    // Delete the middle element(s)
    deleteMiddle(myStack, N);
    
    cout << "Stack after deleting middle element(s):\n";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    
    return 0;
}