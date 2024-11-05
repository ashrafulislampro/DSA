#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int target, int n)
{
    int low = 1, high = n, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            high = mid - 1;
            // low = mid + 1;
        }
        else
        {
            low = mid + 1;
            // high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, target;
    cin >> n >> target;
    int *arr = new int[n]();
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int ind = binary_search(arr, target, n);
    if (ind != -1)
    {
        cout << "Target = " << arr[ind] << " : " << ind << endl;
    }
    else
    {
        cout << "Target value is not found!" << endl;
    }

    return 0;
}
// 2 4 7 9 11 13 15 19 24 26 45 90
// 90 45 26 24 19 15 13 11 9 7 4 2