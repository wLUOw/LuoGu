#include<bits/stdc++.h>
using namespace std;

int mul(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * mul(x - 1);    
}

int main()
{
    int n;
    cin >> n;
    cout << mul(n);

    return 0;
}