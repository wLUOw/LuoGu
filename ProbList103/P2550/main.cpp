#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,e,f,g;
    int ans[8] = {0};
    cin >> n;
    unordered_set<int> set;
    cin >> a >> b >> c >> d >> e >> f >> g;
    set.insert({a,b,c,d,e,f,g});
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e >> f >> g;
        int arr[] = {a,b,c,d,e,f,g}, cnt = 0;
        for (int j = 0; j < 7; j++)
        {
            if (set.count(arr[j]))
            {
                cnt ++;
            }
        }
        ans[cnt]++;
    }
    for (int i = 7; i >= 1; i--)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}