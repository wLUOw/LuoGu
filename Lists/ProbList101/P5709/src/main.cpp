#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, t, s;
    cin >> m >> t >> s;
    if(t == 0){
        cout << 0;
        return 0;
    }
    int x = s / t;
    if (s % t == 0) cout << (m - x < 0 ? 0 : m - x);
    else cout << (m - x - 1 < 0 ? 0 : m - x - 1);

    return 0;
}