#include<bits/stdc++.h>
using namespace std;

int a[101];
int main()
{
    int cnt = 0;
    while (true)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            break;
        }
        a[cnt++] = num;
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << a[cnt-1-i] << " ";
    }
    
    return 0;
}