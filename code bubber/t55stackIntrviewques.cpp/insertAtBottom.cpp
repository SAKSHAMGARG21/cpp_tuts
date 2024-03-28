// void solve(stack<int>& s, int x) {
//     //base case
//     if(s.empty()) {
//         s.push(x);
//         return ;
//     }
    
//     int num = s.top();
//     s.pop();
    
//     //recursive call
//     solve(s, x);
    
//     s.push(num);
// }


// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     solve(myStack, x);
//     return myStack;
// }


#include <iostream>
#include <stack>
using namespace std;

// Function to push an element at the bottom of the stack
void solve(stack<int>& s, int x) {
    // Base case: If the stack is empty, push the element and return
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Recursive call: Pop the top element and call solve recursively
    int num = s.top();
    s.pop();
    solve(s, x);

    // Push the previously popped element back onto the stack
    s.push(num);
}

// Function to push an element at the bottom of the stack
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}

int main() {
    // Example usage
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Push an element (42) at the bottom of the stack
    int elementToPush = 42;
    myStack = pushAtBottom(myStack, elementToPush);

    // Print the modified stack
    cout << "Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top();
        myStack.pop();
        if (!myStack.empty()) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
