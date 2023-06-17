#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    double a[n][m], ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        double s = 0;
        double ma = -1, mi = 11;
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
            ma = max(ma, a[i][j]);
            mi = min(mi, a[i][j]);
        }
        //printf("%f\n", (s-ma-mi)/(m-2));
        ans = max(ans, (s-ma-mi)/(m-2));
    }
    printf("%.2lf", ans);
    
    return 0;
}