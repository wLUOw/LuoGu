#include<bits/stdc++.h>
using namespace std;

int n, ans;
string a, b;
map<string,int> m;

int main()
{
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		a = a.substr(0,2);
		if (a != b) 
		    ans += m[a + b];
		m[b + a]++;
	}
	cout << ans;

	return 0;
}