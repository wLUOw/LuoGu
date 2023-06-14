#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, sum = 0, n = 1;
    cin >> k;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            sum += n;
            k--;
            if (k == 0)
            {
                cout << sum;
                return 0;
            }
        }
        n++;
    }
    
    return 0;
}