#include<bits/stdc++.h>
using namespace std;

const int INF=0x7fffffff;
int cnt;
struct node
{
    int val, size, cnt, ls, rs;
} tree[1000010];
int n, opt, x;

inline void add(int x, int v)
{
    tree[x].size++;
    if (tree[x].val == v)
    {
        tree[x].cnt++;
        return;
    }
    if (tree[x].val > v)
    {
        if (tree[x].ls != 0) add(tree[x].ls, v);
        else
        {
            cnt++;
            tree[cnt].val = v;
            tree[cnt].size = tree[cnt].cnt = 1;
            tree[x].ls = cnt;
        }
    }
    else
    {
        if (tree[x].rs != 0) add(tree[x].rs, v);
        else
        {
            cnt++;
            tree[cnt].val = v;
            tree[cnt].size = tree[cnt].cnt = 1;
            tree[x].rs = cnt;
        }
    }
}

int front(int x, int val, int ans) {
    if (tree[x].val >= val)
    {
        if (tree[x].ls == 0) return ans;
        else return front(tree[x].ls, val, ans);
    }
    else
    {
        if (tree[x].rs == 0) return tree[x].val;
        else return front(tree[x].rs, val, tree[x].val);
    }
}

int next(int x, int val, int ans) {
    if (tree[x].val <= val)
    {
        if (tree[x].rs == 0) return ans;
        else return next(tree[x].rs, val, ans);
    }
    else
    {
        if (tree[x].ls == 0) return tree[x].val;
        else return next(tree[x].ls, val, tree[x].val);
    }
}

int rank_kth(int x, int k)
{
    if (x == 0) return INF;
    if (tree[tree[x].ls].size >= k) return rank_kth(tree[x].ls, k);
    if (tree[tree[x].ls].size + tree[x].cnt >= k) return tree[x].val;
    return rank_kth(tree[x].rs, k - tree[tree[x].ls].size - tree[x].cnt);
}

int rank_val(int x, int val)
{
    if (x == 0) return 0;
    if (val == tree[x].val) return tree[tree[x].ls].size;
    if (val < tree[x].val) return rank_val(tree[x].ls, val);
    return rank_val(tree[x].rs, val) + tree[tree[x].ls].size + tree[x].cnt;
}

inline int read()
{
    register int r=0;
    register char ch=getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9')
    {
        r = (r << 3) + (r << 1) + (ch ^ 48);
        ch = getchar();
    }
    return r;
}

int main()
{
    n = read();
    while (n--)
    {
        opt = read();
        x = read();
        if (opt == 1) printf("%d\n", rank_val(1, x) + 1);
        else if (opt == 2) printf("%d\n", rank_kth(1, x));
        else if (opt == 3) printf("%d\n", front(1, x, -INF));
        else if (opt == 4) printf("%d\n", next(1, x, INF));
        else
        {
            if (cnt == 0)
            {
                cnt++;
                tree[cnt].cnt=tree[cnt].size = 1;
                tree[cnt].val = x;
            }
            else add(1, x);
        }
    }

    return 0;
}