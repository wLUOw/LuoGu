#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int m = max(x, y);
    int n = min(x, y);
    int p = m % n;
    if (p == 0) return n;
    else return gcd(n, p);
}

int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    int a = arr[0];
    int c = arr[2];
    int p = gcd(a, c);
    cout << a/p << "/" << c/p;

    return 0;
}