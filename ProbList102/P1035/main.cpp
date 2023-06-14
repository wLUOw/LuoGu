#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n = 1;
    double sum = 0;
    cin >> k;
    while (true)
    {
        sum += 1.0/n;
        if (sum > k)
        {
            cout << n;
            return 0;
        }
        n++;
    }

    return 0;
}