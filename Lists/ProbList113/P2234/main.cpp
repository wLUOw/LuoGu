#include<bits/stdc++.h>
using namespace std;

set<int> s;
set<int>::iterator l, r;

int n, num, ans = 0;

int main()
{
    s.insert(192608170);
    s.insert(-192608170);
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &num);
        if (s.size() == 2)
        {
            ans += num;
            s.insert(num);
        }
        else
        {
            r = s.lower_bound(num);
            if(*r != num)
            {
                l = r;
                l--;
                ans += min(abs(*l - num), abs(*r - num));
                s.insert(num);
            }
        }
    }
    printf("%d", ans);

    return 0;
}