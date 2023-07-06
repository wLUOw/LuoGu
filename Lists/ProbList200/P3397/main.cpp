#include<bits/stdc++.h>
using namespace std; 

int a[1010][1010];

int main()
{
	int n, m, x1, x2, y1, y2;
	scanf("%d%d", &n, &m);
	for (int k = 1; k <= m; k++)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for (int i = x1; i <= x2; i++)
			for (int j = y1; j <= y2; j++)
				a[i][j]++;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}

    return 0;
}