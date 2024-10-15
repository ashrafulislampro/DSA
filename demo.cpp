#include <iostream>
using namespace std;

// With third temporary variable
void isSwap(int a, int b)
{
    int temp;

    temp = b;
    b = a;
    a = temp;
    cout << "With Temporary Variable " << endl;
    cout << "First Num = " << a << ", " << "Second Num = " << b << endl
         << endl;
};
// Without third temporary variable
void isSwap2(int a, int b)
{
    a = b + a;
    b = a - b;
    a = a - b;
    cout << "Without Temporary Variable " << endl;
    cout << "First Num = " << a << ", " << "Second Num = " << b << endl
         << endl;
};
int main()
{
    int num1, num2;
    cout << "Enter Two Random number: ";
    cin >> num1 >> num2;
    cout << endl;
    // With Temporary Variable
    isSwap(num1, num2);
    // Without Temporary Variable
    isSwap2(num1, num2);
    return 0;
}