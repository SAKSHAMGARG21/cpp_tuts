#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        // If opening bracket, push onto the stack
        // If closing bracket, check stack top and pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // For closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    // If stack is empty, all brackets matched
    return s.empty();
}

int main()
{
    string expression1 = "{[()]}"; // Balanced parentheses
    string expression2 = "{[(])}"; // Unbalanced parentheses

    cout << "Expression 1 is " << (isValidParenthesis(expression1) ? "valid" : "invalid") << endl;
    cout << "Expression 2 is " << (isValidParenthesis(expression2) ? "valid" : "invalid") << endl;

    return 0;
}
