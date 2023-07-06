#include<bits/stdc++.h>
using namespace std;

int t, n, f[1000010], book[2000010];

struct node {
    int x, y, e;
} a[1000001]; 

bool cmp(node a, node b) {
    return a.e > b.e;
}

inline void first(int k) {
    for (int i = 1; i <= k; i++) f[i] = i;
}

int get(int x) {
    if (x == f[x]) return x;
    return f[x] = get(f[x]);
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        int tot = -1;
        memset(book, 0, sizeof(book));
        memset(a, 0, sizeof(a));
        memset(f, 0, sizeof(f));
        bool flag = true;
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++) {
            scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].e);
            book[++tot] = a[i].x;
            book[++tot] = a[i].y;
        }
        sort(book, book + tot); 
        int reu = unique(book, book + tot) - book;  // 去重 
        for (int i = 1; i <= n; i++) {
           a[i].x = lower_bound(book, book + reu, a[i].x) - book;
           a[i].y = lower_bound(book, book + reu, a[i].y) - book;   
        } 
        first(reu);   // 初始化 
        sort(a + 1, a + n + 1, cmp); 
        for (int i = 1; i <= n; i++) {
            int r1 = get(a[i].x);
            int r2 = get(a[i].y);
            if (a[i].e) {
                f[r1] = r2; 
            } else if (r1 == r2) {
                printf("NO\n");
                flag = false;
                break;
            }
        }
        if (flag) printf("YES\n");
    }

    return 0;
}