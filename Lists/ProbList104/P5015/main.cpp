#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') cnt++;
		if(s[i] >= 'a' && s[i] <= 'z') cnt++;
		if(s[i] >= '0' && s[i] <= '9') cnt++;
    }
    printf("%d", cnt);

    return 0;
}