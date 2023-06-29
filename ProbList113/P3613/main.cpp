#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, q, p, i, j, k;
map<ll, int> m;

int main()
{
    scanf("%d%d", &n, &q);
	while(q--)
	{
		scanf("%d", &p);
		if (p==1)
		{
			scanf("%d%d%d", &i, &j, &k);
			m[i*100000 + j] = k;
		}
		else
        {
            scanf("%d%d", &i, &j);
            printf("%d\n", m[i*100000 + j]);
        } 
	}

	return 0;
}