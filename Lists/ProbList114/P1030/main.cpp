#include<bits/stdc++.h>
using namespace std;

void method(string in, string aft)
{
    if (in.size() > 0)
    {
        char ch = aft[aft.size() - 1];
        cout << ch;
        int k = in.find(ch);
        method(in.substr(0, k), aft.substr(0, k));
        method(in.substr(k + 1), aft.substr(k, in.size() - k - 1));
    }
}

int main()
{
    string in, aft;
    cin >> in >> aft;
    method(in, aft);

    return 0;
}