#include<bits/stdc++.h>
using namespace std;

priority_queue<int> qMax;
priority_queue<int,vector<int>,greater<int>> qMin;
int a[200010], n, m, r = 1, q;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &q);
        for (int j = r; j <= q; j++) {
            qMax.push(a[j]);
            if(qMax.size() == i) qMin.push(qMax.top()), qMax.pop();
        }
        r = q + 1;
        printf("%d\n", qMin.top());
        qMax.push(qMin.top()), qMin.pop();
    }

    return 0;
}