#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    while (n < 0)
    {
        n += 26;
    }
    n %= 26;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] + n > (int)'z')
        {
            s[i] -= 26;
        }
        s[i] += n;
    }
    cout << s;

    return 0;
}