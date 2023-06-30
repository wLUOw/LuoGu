#include<bits/stdc++.h>
using namespace std;

bool isprime(int x){
	if (x <= 1) return false;
	for (int i = 2; i <= sqrt(x); i++)
    {
		if(x % i == 0) return false;
	}
	return true;
}

int main()
{
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (isprime(num))
        {
            cout << num << " ";
        }
    }

    return 0;
}