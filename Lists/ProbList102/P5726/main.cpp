#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ma = -1, mi = 11;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ma = max(ma, arr[i]);
        mi = min(mi, arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%.2lf", (sum - ma - mi)*1.0/(n - 2));
    
    return 0;
}