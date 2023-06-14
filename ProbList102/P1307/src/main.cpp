#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size() - 1;
    //cout << "n = " << n << endl;
    int i = 0;
    if (s[0] == '-')
    {
       cout << '-';
       i++; 
    }
    bool b = true;
    while (n >= i)
    {
        if (b && s[n] != '0')
        {
            cout << s[n];
            b = false;
        }
        else if (!b)
        {
            cout << s[n];
        }
        n--;
    }
    
    return 0;
}