#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 1;
    while (i <= n)
    {
        cout << "Data[" << i << "]: ";
        cin >> arr[i];
        i++;
    }
    int item, index;
    cin >> index >> item;
    n = n + 1;
    int j = n;
    while (j > index)
    {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j+1] = item;
    int k = 1;
    while (k <= n)
    {
        cout << "Element[" << k << "]: " << arr[k] << endl;
        k++;
    }

    return 0;
}