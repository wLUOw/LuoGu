#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int da = abs(a[i]-a[j]), db = abs(b[i]-b[j]), dc = abs(c[i]-c[j]), 
            d = abs(a[i]+b[i]+c[i]-a[j]-b[j]-c[j]);
            if (da <= 5 && db <= 5 && dc <= 5 && d <= 10)
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
    
}