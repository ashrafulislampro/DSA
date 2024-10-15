#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i < num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int arr[20], n, root, i, sum = 0, oddsum = 0, evensum = 0, len;
    cout << "How many data: ";
    cin >> n;
    vector<int> prime_arr;
    for (i = 1; i <= n; i++)
    {
        cout << "Data Elements[" << i << "]:";
        cin >> arr[i];
    }

    for (i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (isPrime(arr[i]))
        {
            prime_arr.push_back(arr[i]);
        }
    }
    cout << "Printing Array Elements Summation: " << sum << endl
         << endl;
    cout << "Printing Array Odd Elements: ";
    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
            oddsum += arr[i];
        }
    }
    cout << endl
         << endl;
    cout << "Printing Array Odd Elements Summation: " << oddsum << endl
         << endl;

    cout << "Printing Array Even Elements: ";
    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
            evensum += arr[i];
        }
    }
    cout << endl;
    cout << "Printing Array Even Elements Summation: " << evensum << endl
         << endl;
    cout << "Printing Array Prime Elements: ";

    len = prime_arr.size();
    for (int i = 0; i < len; i++)
    {
        cout << prime_arr[i];
        if (i < len - 1)
            cout << ", ";
    }
    cout << endl
         << endl;

    return 0;
}