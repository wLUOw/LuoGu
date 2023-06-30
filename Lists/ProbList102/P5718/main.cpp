#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < res)
        {
            res = num;
        }
    }
    cout << res;

    return 0;
}