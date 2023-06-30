#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a = n % 2 == 0;
    bool b = n > 4 && n <= 12;
    cout << (a && b ? 1 : 0) << " " << (a || b ? 1 : 0) << " " << (a ^ b ? 1 : 0) << " " << (!a && !b ? 1 : 0);

    return 0;
}