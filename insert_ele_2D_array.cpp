#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter Row and Column: ";
    cin >> r >> c;
    int arr[r][c];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "Data[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // c = c + 1;
    int r_ind, c_ind, value;
    cout << "Enter insert data pos and value" << endl;
    cin >> r_ind >> c_ind >> value;
    for (int i = 1; i <= r; i++)
    {
        
        for (int j = 1; j <= c; j++)
        {
            cout << "Data[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nAccess Element From 2D array: " << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "Data[" << i << "][" << j << "]: " << arr[i][j] << endl;
        }
    }

    return 0;
}
