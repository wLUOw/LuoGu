#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, p;

ll fast(ll r, ll s)
{
	ll x = 1, y = r;
	while (s > 0)
	{
		if (s % 2 == 1) {
			x *= y;
			x %= p;
		}
		y *= y;
		y %= p;
		s /= 2;
	}
	return x;
}

int main()
{
	cin >> a >> b >> p;
	cout << a << "^" << b << " mod " << p << "=" << fast(a, b) % p << endl;

	return 0;
}