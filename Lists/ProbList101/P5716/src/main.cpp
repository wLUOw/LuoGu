#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, m;
    cin >> y >> m;
    if (m <= 7 && m % 2 == 1 || m >= 8 && m % 2 == 0) cout << (31);
    else if (m != 2) cout << (30);
    else cout << (y % 4 == 0 && y % 100 != 0 || y % 400 == 0 ? 29 : 28);

    return 0;
}