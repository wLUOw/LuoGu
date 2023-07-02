#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
ull base = 97;
ull a[10010];
char s[1510];
int n, ans = 1;
int prime = 664579; 
ull mod = 32049417508023117ll;

ull hashcode(char s[])
{
    int len = strlen(s);
    ull hash = 0;
    for (int i = 0; i < len; i++)
        hash = (hash * base + (ull)s[i]) % mod + prime;
    return hash;
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
 	    scanf("%s", s);
 	    a[i] = hashcode(s);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++)
    {
 	    if (a[i] != a[i + 1]) ans++;
    }
    printf("%d", ans);

    return 0;
} 