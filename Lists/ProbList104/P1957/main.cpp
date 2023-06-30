#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,res;
    string c,temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp[0] >= 'a' && temp[0] <= 'c')
        {
            c = temp;
            cin >> a >> b;
        } 
        else
        {
            a = atoi(temp.c_str());
            cin >> b;
        }
        string s = to_string(a);
        switch (c[0])
        {
        case 'a':
            s.append("+");
            res = a + b;
            break;
        case 'b':
            s.append("-");
            res = a - b;
            break;
        case 'c':
            s.append("*");
            res = a * b;
            break;
        default:
            break;
        }
        s.append(to_string(b));
        s.append("=");
        s.append(to_string(res));
        cout << s << endl;
        cout << s.length() << endl;
    }
    
    return 0;
}