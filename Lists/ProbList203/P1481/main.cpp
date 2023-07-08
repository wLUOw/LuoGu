#include<bits/stdc++.h>
using namespace std;

const int MAXN=2010;

struct edge{
    int link[27];
    int s;
} t[MAXN];

int n, m, cnt;
int ans;

void getAns(char *c)
{
    int tempAns = 0;
    int p = 0;
    int len = strlen(c);
    for (int i = 0; i < len; i++)
    {
        int num = c[i] - 'a' + 1;
        if (t[p].link[num] == 0) t[p].link[num] = ++cnt;
        p = t[p].link[num];
        tempAns += t[p].s;
    }
    if (tempAns >= ans) ans = tempAns + 1;
    t[p].s++;
}

int main()
{
    char c[110];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", c);
        getAns(c);
    }
    printf("%d\n", ans);
    
    return 0;
}