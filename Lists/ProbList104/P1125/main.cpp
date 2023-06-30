#include<bits/stdc++.h>
using namespace std;

int cnt[26] = {0};
const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main()
{
    string s;
    cin >> s;
    int ma = 0, mi = 110;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i]-'a';
        cnt[x]++;
    }
    for(int i=0;i<26;i++){
		if(cnt[i] > ma) ma = cnt[i];
		if(cnt[i] > 0 && cnt[i] < mi) mi = cnt[i];
	}
    int num = ma - mi;
    bool b = false;
    for (size_t i = 0; i < 25; i++)
    {
        if (num == prime[i])
        {
            b = true;
            break;
        }
    }
    cout << (b ? "Lucky Word" : "No Answer") << endl;
    cout << (b ? num : 0);
    
    return 0;
}