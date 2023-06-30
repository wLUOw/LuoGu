#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) arr[i] = 1001;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        bool flag = true;
        for (int j = 0; j < cnt; j++) 
        {
            if (x == arr[j]) flag = false;
        }
        if (flag)
        {
            arr[cnt] = x;
            cnt++;
        }
    }
    sort(arr, arr + n);
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) printf("%d ", arr[i]);
        
    return 0;
}