#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << 0 << " ";
    for (int i = 1; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < i; j++)
        {
            cnt += a[i] > a[j];
        }
        cout << cnt << " ";
    }
    
    return 0;
}