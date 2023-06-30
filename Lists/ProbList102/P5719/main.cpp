#include<bits/stdc++.h>
using namespace std;

int main()
{
    int as = 0, an = 0, bs = 0, bn = 0, n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            as += i;
            an++;
        }
        else
        {
            bs += i;
            bn++;
        }
    }
    printf("%.1lf %.1lf", as*1.0/an, bs*1.0/bn);
    
    return 0;
}