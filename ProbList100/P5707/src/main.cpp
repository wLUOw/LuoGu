#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int time = s / v + 10;
    time += s % v == 0 ? 0 : 1;
    int h = time / 60;
    int m = time % 60;
    h = 7 - h;
    if (h < 0) h += 24;
    m = 60 - m;
    cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << endl;

    return 0;
}