#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Input Row:";
    cin >> row;
    cout << "Input Col:";
    cin >> col;
    int arr[row][col], i, j, item, data;
    cout << "Enter data element" << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "Data[" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }

    cout << "Which data update: ";
    cin >> item;
    cout << "By Which data: ";
    cin >> data;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (arr[i][j] == item)
            {
                arr[i][j] = data;
            }
            cout << "Element[" << i << "][" << j << "]:" << arr[i][j] << endl;
        }
    }

    // cout << "Access data element" << endl;
    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < col; j++)
    //     {
    //         cout << "Element[" << i << "][" << j << "]:" << arr[i][j] << endl;
    //     }
    // }

    return 0;
}