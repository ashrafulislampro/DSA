#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Data[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\nAccessing Element from the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element[" << i << "]:" << arr[i] << endl;
    }

    return 0;
}