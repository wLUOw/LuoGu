#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < y; i++) {
        cnt += (x + i) % 7 <= 5 && (x + i) % 7 >= 1 ? 1 : 0;
    }
    cout << (250 * cnt);

    return 0;
}