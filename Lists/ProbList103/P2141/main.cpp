#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    unordered_set<int> set;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        set.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (set.count(a[i]+a[j]))
            {
                set.erase(a[i]+a[j]);
            }
        }
    }
    cout << n - set.size();
    
    return 0;
}