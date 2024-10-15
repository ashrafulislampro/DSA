#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Data[" << i << "][" << j << "]:";
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << "Print Array Element Sum: " << endl;
    cout << sum << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] % 2 == 0)
            {
                cout << "Position Row and Col: " << i << ", " << j << " == " << "Even : " << arr[i][j] << endl;
            }
            else
            {
                cout << "Position Row and Col: " << i << ", " << j << " == " << "Odd : " << arr[i][j] << endl;
            }
        }
    }

    return 0;
}