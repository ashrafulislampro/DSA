#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row, col, h, l, avg, H[3], L[3], max = 0, min = 100, total = 0;
    float average, AVG[3];

    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        h = 0;
        l = 100;
        avg = 0;
        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
            total += x;

            if (x > max)
            {
                max = x;
            }
            if (x < min)
            {
                min = x;
            }

            if (x > h)
            {
                h = x;
                H[i] = h;
            }
            if (x < l)
            {
                l = x;
                L[i] = l;
            }
            avg += x;
        }
        AVG[i] = avg * 1.0 / col;
    }

    average = total * 1.0 / (row * col);
    cout << "Max = " << max << endl
         << "Min = " << min << endl
         << fixed << setprecision(2) << "Average = " << average << endl;

    cout << "Highest Value =";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << H[i];
    }
    cout << endl;
    cout << "Lowest Value =";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << L[i];
    }
    cout << endl;
    cout << "Average Value = ";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << AVG[i];
    }
    cout << endl;
    return 0;
}