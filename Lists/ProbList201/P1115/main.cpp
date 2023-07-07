#include<bits/stdc++.h>
using namespace std;

int n, a, b, ans=INT32_MIN;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
   	    scanf("%d", &a);
   	    if (i == 1) b = a;
   	    else b = max(a, a + b);
   	    ans = max(ans, b);
    }
    printf("%d", ans);

    return 0;
}