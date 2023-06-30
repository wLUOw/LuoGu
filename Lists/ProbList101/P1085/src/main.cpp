#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    int maxT = -1;
    for (int i = 1; i <= 7; i++) {
        int a, b;
        cin >> a >> b;
        int t = a + b;
        if (t > 8 && t > maxT) {
            maxT = t;
            x = i;
        }
    }
    cout << (x);
    
    return 0;
}