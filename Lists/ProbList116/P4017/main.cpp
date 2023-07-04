#include<bits/stdc++.h>
using namespace std;

const int mod = 80112002;
int n, m, h[5005], ru[5005], chu[5005], f[5005], ans;
// f[i] 表示到达 i 时的路径数
// h[i] 表示在可以直接吃掉 i 的所有关系中最后的一条的编号
// ru[i] 表示 i 的入度
// chu[i] 表示 i 的出度
queue<int> q;

struct AB{
   int a, b, n;
} d[5000005];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
   	    int a, b;
        scanf("%d%d", &a, &b);
        d[i].a = a, d[i].b = b, d[i].n = h[a], h[a] = i;
        chu[a]++, ru[b]++;
    }

    for (int i = 1; i <= n; i++) {
        if (ru[i] == 0) {
            f[i] = 1;
            q.push(i);
        }
    }
    while (!q.empty()) {
        int a = q.front();
        q.pop();
        for (int k = h[a]; k; k = d[k].n) {
            int b = d[k].b;
            f[b] += f[a];
            f[b] %= mod;
            ru[b]--;
            if (ru[b] == 0) {
                if (chu[b] == 0) {
                    ans += f[b];
                    ans %= mod;
                }  // 出度为0的点为食物链终点，记录答案，并且不必入队
                else q.push(b);
           }
        }
    }
    cout << ans;

    return 0; 
}