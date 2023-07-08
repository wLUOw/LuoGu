#include<bits/stdc++.h>
using namespace std;

int n, kmp[1000010];
char ss[1000010];

int main()
{
	scanf("%d%s", &n, ss + 1);
	int j = 0;
	for (int i = 2; i <= n; i++)
	{
		while (j && ss[i] != ss[j + 1]) j = kmp[j];
		if (ss[i] == ss[j + 1]) j++;
		kmp[i] = j;
	}
	printf("%d", n - kmp[n]);

	return 0;
}