#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = s.size();
    for (int i = a - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}