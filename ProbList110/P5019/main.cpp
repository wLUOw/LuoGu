#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+2] = {0};
    for (int i = 1; i <= n; i++) cin >> arr[i];
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
        int le = i - 1;
        int ri = i + 1;
        while (arr[le] >= arr[i]) le--;
        while (arr[ri] > arr[i]) ri++;
        cnt += arr[i] - max(arr[le], arr[ri]);
    }
    cout << cnt;

    return 0;
}