#include<bits/stdc++.h>
using namespace std;

int L, N, K;
int a[100010];

bool check(int m)
{
	int y = K;
	int size = 0;
	for (int i = 1; i < N; i++)
	{
		if (y < 0) break;
		if(a[i] - size <= m) size=a[i];
		else
		{
			size += m;
			i--;
			y--;
		}
	}
	if (y >= 0) return true;
	else return false;
}

int main()
{
    scanf("%d%d%d", &L, &N, &K);
    for (int i = 0; i < N; i++) scanf("%d", &a[i]);
    int le = 0, ri = L + 1, ans;
    while(le <= ri)
	{
		int mid = le + (ri - le) / 2;
		if (check(mid))
        {
            ans = mid;
            ri = mid - 1;
        } 
		else le = mid + 1;
	}
    printf("%d", ans);

    return 0;
}
