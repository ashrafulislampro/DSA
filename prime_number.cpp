#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i < num; i++)
    {
        if (num % i != 0)
        {
            return true;
        }
    }
    return true;
}

int main()
{
    int row, col;
    cout << "Enter Row and Col: ";
    cin >> row >> col;
    int arr[row][col];

    cout << "\nInsert Data into 2D array" << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "Data[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nPrint Prime Number with Position." << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (isPrime(arr[i][j]))
            {
                cout << "Element[" << i << "][" << j << "]: " << arr[i][j] << endl;
            }
        }
    }
    return 0;
}