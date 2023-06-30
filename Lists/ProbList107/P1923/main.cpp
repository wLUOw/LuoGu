#include<bits/stdc++.h>
using namespace std;

int k;

void qsort(int a[], int l,int r)
{
	int i = l, j = r, mid = a[(l + r) / 2];
	do
	{
		while (a[j] > mid) j--;
		while (a[i] < mid) i++;
		if (i <= j) swap(a[i++], a[j--]);	
	}
	while(i <= j);

	if(k <= j) qsort(a, l, j);
	else if(i <= k) qsort(a, i, r);
	else 
	{
		cout << a[j + 1];
        return;
	}
}

int main()
{
	int n;
	cin >> n >> k;
    int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, 0, n - 1);

    return 0;
}