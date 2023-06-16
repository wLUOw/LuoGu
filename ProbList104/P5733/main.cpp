#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << s;

    return 0;
}