#include<bits/stdc++.h>
using namespace std;

struct data {
    int x, y, v;
    bool operator <(const data &y) const {
        return v > y.v;
    }
};

int n, a[100010], b[100010];
priority_queue<data> pq;

int main()
{
    scanf("%d", &n);
    data x, y, k;
    int tot = n;
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
    for (int i = 1; i <= n; i++) k.x = k.y = i, k.v = a[i] + b[i], pq.push(k);
    for (int i = 1; i <= n; i++) {
        k = pq.top(); pq.pop();
        printf("%d ", k.v);
        if(k.x == k.y)
        {
            x.x = k.x; x.y = k.y + 1; x.v = a[x.x] + b[x.y]; pq.push(x);
            y.x = k.x + 1; y.y = k.y; y.v = a[y.x] + b[y.y]; pq.push(y);
        }
        else
        {
            if(k.x > k.y) y.x = k.x + 1, y.y = k.y, y.v = a[y.x] + b[y.y], pq.push(y);
            else x.x = k.x, x.y = k.y + 1, x.v = a[x.x] + b[x.y], pq.push(x);
        }
    }
    return 0;
}