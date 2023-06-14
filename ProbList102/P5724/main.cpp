#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ma = -1, mi = INT32_MAX, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < mi)
        {
            mi = num;
        }
        if (num > ma)
        {
            ma = num;
        }
    }
    cout <<  ma - mi;

    return 0;
}