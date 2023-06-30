#include<bits/stdc++.h>
using namespace std;

int q, n;
stack<int> st;

void method(int a[], int b[], int n);

int main()
{
    cin >> q;
    while (q--)
    {
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
        method(a, b, n);
    }
    
    return 0;
}

void method(int a[], int b[], int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
	{
		st.push(a[i]); 
		while(st.top() == b[p]) 
		{
			st.pop();
            p++;
			if (st.empty()) break;
		}
	}
	if (st.empty()) cout << "Yes" << endl;
	else cout << "No" << endl;
	while (!st.empty()) st.pop();
}