#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 10;
int n, m;
struct Node 
{
    int l, r;
	bool d;
} t[mx] = {0};

void add(int i,int k,int p) 
{
    if(p == 1)
    {
        t[k].r = t[i].r;
        t[k].l = i; 
        t[i].r = k;
        t[t[k].r].l = k;
    }
    else
    {
        t[k].r = i;
        t[k].l = t[i].l;
        t[i].l = k;
        t[t[k].l].r = k;
    }
}

int main()
{
    int x, k, p;
    cin >> n;
    t[0].r = 0, t[0].l = 0;
    add(0, 1, 1);
    for (int i = 2; i <= n; i++)
    {
        cin >> x >> p;
        add(x, i, p);
    }
    cin >> m;
    while (m--)
    {
        cin >> x;
        t[x].d = 1; 
    }
    for (int i = t[0].r; i ; i=t[i].r)
    {
        if (t[i].d == 0) cout << i << " ";
    }
    
    return 0;
}