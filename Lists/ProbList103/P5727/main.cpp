#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
        string str = to_string(n) + " " + s;
        s = str;
    }
    cout << s;

    return 0;
}