#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    char c = x + '0';
    for (; n > 0; n--)
    {
        string s = to_string(n);
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            cnt += s[i] == c;
        }
    }
    cout << cnt;

    return 0;
}