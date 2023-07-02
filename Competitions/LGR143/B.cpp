#include<bits/stdc++.h>
#define ll long long
using namespace std;

int T, n, q;

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &q);
        if (q == 0) 
        {
            ll ans = 0;
            for (int i = 1; i < n; i++) ans += i;
            printf("%d\n", ans);
            continue;
        }
        int x, y, x0 = 0, y0 = 0;
        int arr[n+1] = {0};
        bool b = false;
        while (q--)
        {
            scanf("%d%d", &x, &y);
            arr[x] = y;
            if (x0 == 0 && y0 == 0 && x + 1 < y) {
                x0 = x, y0 = y;
                b = true;
            }
            if (x0 != 0 && y0 != 0 && x + 1 < y) {
                printf("0\n");
                continue;
            }
        }
        /*code*/
        int le = 0, ri = n;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == i) le = i;
            else if (arr[i]) {
                /*code*/
            }
        }
    }
    
    return 0;
}