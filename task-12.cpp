#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Array Size:";
    cin >> row;

    int arr[row], i, item, data;
    cout << "Enter data element" << endl;
    for (i = 1; i <= row; i++)
    {

        cout << "Data[" << i << "]:";
        cin >> arr[i];
    }

    cout << "Which data update: ";
    cin >> item;
    cout << "By Which data: ";
    cin >> data;

    for (i = 1; i <= row; i++)
    {

        if (arr[i] == item)
        {
            arr[i] = data;
        }
        cout << "Element[" << i << "]:" << arr[i] << endl;
    }

    return 0;
}