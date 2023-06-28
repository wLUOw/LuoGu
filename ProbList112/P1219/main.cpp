#include<bits/stdc++.h>
using namespace std;

int a[100], b[100], c[100], d[100], ans, n;

int print()
{
    if (ans < 3)
    {
        for(int i = 1; i <= n; i++) printf("%d ", a[i]);
        printf("\n");
    }
    ans++;
}

void queen(int i)
{
    if (i > n)
    {
        print();
        return;
    }
    
    for (int j = 1; j <= n; j++)
    {
        if (!b[j] && !c[i+j] && !d[i-j+n])
        {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+n]=1;

            queen(i+1);

            b[j]=0;
            c[i+j]=0;
            d[i-j+n]=0;
        }
    }
}

int main()
{    
    cin >> n;
    queen(1);
    cout << ans;

    return 0;
}