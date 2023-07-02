#include<bits/stdc++.h>
using namespace std;

set<int> s;
set<int>::iterator it;
int n, p, l;

int main()
{
    s.insert(0);
    s.insert(INT32_MAX);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &p, &l);
        if (p == 1) {
            if (s.count(l)) printf("Already Exist\n");
            else s.insert(l);
        }
        else
        {
            if (s.size() == 2) {
                printf("Empty\n");
                continue;
            }
            if (s.count(l)) {
                printf("%d\n", l);
                s.erase(l);
            }
            else
            {
                it = s.lower_bound(l);
                int num2 = *it;
                it--;
                int num1 = *it, ans;
                //cout << "num1 " << num1 << "  num2 " << num2 << endl;
                if (num1 == 0) ans = num2;
                else if (num2 == INT32_MAX) ans = num1;
                else
                {
                    if (l - num1 > num2 - l) ans = num2;
                    else ans = num1;
                }
                printf("%d\n", ans);
                s.erase(ans);
            }
        }
    }
    
    return 0;
}