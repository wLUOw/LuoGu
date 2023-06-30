#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, op, a, b, num;
    string s, s0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        switch (op)
        {
        case 1:
            cin >> s0;
            s += s0;
            cout << s << endl;
            break;
        case 2:
            cin >> a >> b;
            s = s.substr(a, b);
            cout << s << endl;
            break;
        case 3:
            cin >> a >> s0;
            s.insert(a, s0); 
            cout << s << endl;
            break;
        case 4:
            cin >> s0;
            num = s.find(s0);
            if (num < s.length() && num >= 0)
                cout << num << endl;
            else
                cout << -1 << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}