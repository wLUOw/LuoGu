#include<bits/stdc++.h>
using namespace std;

map<string, long> m;
long n, p, sc;
char s[25];

int main()
{
    scanf("%ld", &n);
    while (n--)
    {
        scanf("%ld", &p);
        if (p == 1) {
            scanf("%s%ld", s, &sc);
            m[s] = sc;
            printf("OK\n");
        }
        else if (p == 2)
        {
            scanf("%s", s);
            if (m.count(s)) printf("%ld\n", m[s]);
    		else printf("Not found\n");
        }
        else if (p == 3)
        {
            scanf("%s", s);
            if (m.count(s)) {
    		m.erase(s);
            printf("Deleted successfully\n");
    	    }
    		else printf("Not found\n");
        }
        else
        {
            printf("%d\n", m.size());
        }
    }
    
    return 0;
}