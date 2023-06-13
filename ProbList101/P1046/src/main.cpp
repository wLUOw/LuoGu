#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cin >> arr[i];
    }
    int h;
    cin >> h;
    int cnt = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] - h <= 30) cnt++;
    }
    cout << (cnt);

    return 0;
}