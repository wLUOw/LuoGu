#include<bits/stdc++.h>
using namespace std;

int n, a[130][130], sum[130][130], pre[130][130];  // pre[i][j]指的是第i行到j的前缀和

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            pre[i][j] = pre[i][j - 1] + a[i][j];
            sum[i][j] = pre[i][j] + sum[i - 1][j];
        }
    }
    int ans = INT32_MIN;
    for (int x1 = 1; x1 <= n; x1++) {
    	for (int y1 = 1; y1 <= n; y1++) {
    		for (int x2 = 1; x2 <= n; x2++) {
    			for (int y2 = 1; y2 <= n; y2++) {
    				if (x2 < x1 || y2 < y1) continue;
    				ans = max(ans, sum[x2][y2] + sum[x1 - 1][y1 - 1] - sum[x2][y1 - 1] - sum[x1 - 1][y2]);
    			}
    		}
    	}
    }
    printf("%d", ans);

	return 0;
}