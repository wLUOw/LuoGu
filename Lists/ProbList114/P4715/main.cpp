#include<bits/stdc++.h>
using namespace std;

int n, num, l, r, a[(1<<7) + 1], maxL = INT32_MIN, maxR = INT32_MIN;

int main()
{
    cin >> n;
    for (int i = 1; i <= (1 << (n-1)); i++) 
    {
        cin >> num;
        if (num > maxL) 
        {
            l = i;
            maxL = num;
        }
    }
    for (int i = (1 << (n-1)) + 1; i <= (1 << n); i++) 
    {
        cin >> num;
        if (num > maxR) 
        {
            r = i;
            maxR = num;
        }
    }
    cout << (maxL > maxR ? r : l);

    return 0;
}