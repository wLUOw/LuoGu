#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    string s1 = "", s2 = "", s3 = "", s4 = "", s5 = "";
    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '0':
            s1 += "XXX.";
            s2 += "X.X.";
            s3 += "X.X.";
            s4 += "X.X.";
            s5 += "XXX.";
            break;
        case '1':
            s1 += "..X.";
            s2 += "..X.";
            s3 += "..X.";
            s4 += "..X.";
            s5 += "..X.";
            break;
        case '2':
            s1 += "XXX.";
            s2 += "..X.";
            s3 += "XXX.";
            s4 += "X...";
            s5 += "XXX.";
            break;
        case '3':
            s1 += "XXX.";
            s2 += "..X.";
            s3 += "XXX.";
            s4 += "..X.";
            s5 += "XXX.";
            break;
        case '4':
            s1 += "X.X.";
            s2 += "X.X.";
            s3 += "XXX.";
            s4 += "..X.";
            s5 += "..X.";
            break;
        case '5':
            s1 += "XXX.";
            s2 += "X...";
            s3 += "XXX.";
            s4 += "..X.";
            s5 += "XXX.";
            break;
        case '6':
            s1 += "XXX.";
            s2 += "X...";
            s3 += "XXX.";
            s4 += "X.X.";
            s5 += "XXX.";
            break;
        case '7':
            s1 += "XXX.";
            s2 += "..X.";
            s3 += "..X.";
            s4 += "..X.";
            s5 += "..X.";
            break;
        case '8':
            s1 += "XXX.";
            s2 += "X.X.";
            s3 += "XXX.";
            s4 += "X.X.";
            s5 += "XXX.";
            break;
        case '9':
            s1 += "XXX.";
            s2 += "X.X.";
            s3 += "XXX.";
            s4 += "..X.";
            s5 += "XXX.";
            break;
        default:
            break;
        }
    }
    s1 = s1.substr(0,4*n-1);
    s2 = s2.substr(0,4*n-1);
    s3 = s3.substr(0,4*n-1);
    s4 = s4.substr(0,4*n-1);
    s5 = s5.substr(0,4*n-1);
    cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl;

    return 0;
}