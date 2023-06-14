#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 1;
    int res = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] == 1){
            cnt++;
        } else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    
    cout << max(res, cnt) << endl;

    return 0;
}