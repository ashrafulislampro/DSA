#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min, pivot, min_index;
    cin >> n;
    int *arr = new int[n]();
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        min = INT_MAX;
        pivot = arr[i];
        min_index = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        if (pivot > min)
        {
            int temp = arr[i];
            arr[i] = min;
            arr[min_index] = temp;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}