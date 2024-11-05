#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 20)
    {
        cout << round((random() * 100) + 10) << endl;
        i++;
    }

    return 0;
}