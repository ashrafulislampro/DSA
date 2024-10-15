#include <iostream>
using namespace std;

int main()
{
    int n, pos, item;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    cout << endl;
    cout << "Insert Data at the beginning: ";
    cin >> item;
    int j = n;
    while (j > -1)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[0] = item;
    n = n + 1;
    cout << "Insert Data at the end: ";
    cin >> item;
    arr[n] = item;
    n = n + 1;

    cout << endl;
    cout << "Insert Data before the position : ";

    cin >> pos;
    cout << "Data : ";
    cin >> item;
    int k = n;
    while (k >= pos - 1)
    {
        arr[k + 1] = arr[k];
        k--;
    }
    arr[pos - 1] = item;
    n = n + 1;
    cout << endl;
    cout << "Insert Data after the position : ";

    cin >> pos;
    cout << "Data : ";
    cin >> item;
    int l = n;
    while (l >= pos + 1)
    {
        arr[l + 1] = arr[l];
        l--;
    }
    arr[pos + 1] = item;
    n = n + 1;
    cout << endl;
    cout << "Print All element of the array: ";
    int p = 0;
    while (p < n)
    {
        cout << arr[p] << " ";
        p++;
    }
    cout << endl
         << endl;
    return 0;
}