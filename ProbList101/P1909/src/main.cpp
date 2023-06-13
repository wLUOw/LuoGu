#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int price = INT32_MAX;
    for (int i = 0; i < 3; i++) {
        int p;
        int x, y;
        cin >> x >> y;
        if (n % x == 0) p = y * (n / x);
        else p = y * (n / x + 1);
        if (p < price) price = p;
    }
    cout << (price);

    return 0;
}