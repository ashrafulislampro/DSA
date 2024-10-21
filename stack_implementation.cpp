#include <iostream>
#include <stack>

using namespace std;

void showstack(stack<char> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    stack<char> s;
    s.push('B');
    s.push('C');
    s.push('X');
    s.push('Y');

    cout << "The stack is : " << endl;
    showstack(s);

    cout << "Stack size is " << s.size() << endl;
    cout << "Top element is " << s.top() << endl;

    s.pop();
    s.pop();

    cout << "After 2(Two) pop Operations the stack is: " << endl;
    showstack(s);

    cout << "Stack size is " << s.size() << endl;
    cout << "Top element is " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Stack is not Empty\n";
    }
    cout << endl;
    return 0;
}