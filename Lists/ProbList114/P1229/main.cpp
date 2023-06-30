#include<bits/stdc++.h>
using namespace std;

int ans;
char s1[1000], s2[1000];
int main()
{
    scanf("%s", s1);
    scanf("%s", s2);
    for (int i = 0; i < strlen(s1); i++)
        for(int j = 1; j < strlen(s2); j++)
            if(s1[i]==s2[j] && s1[i + 1] == s2[j - 1])
                ans++;
    printf("%d", 1 << ans);

    return 0;
}