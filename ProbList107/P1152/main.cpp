#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int id = abs(a[i+1] - a[i]);
        if (id == 0 || id >= n || b[id] == 1)
        {
            cout << "Not jolly";
            return 0;
        }
        else
        {
            b[id] == true;
        }
    }
    cout << "Jolly";
    
    return 0;
}