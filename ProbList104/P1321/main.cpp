#include<bits/stdc++.h>
using namespace std;

int main() {
	int boy = 0, girl = 0;
	string s;
	cin >> s; 
	for (int i = 0; i <= s.length(); i++) 
    {
		if (s[i] == 'b' || s[i+1] == 'o' || s[i+2] == 'y') 
			boy++;
		if (s[i] == 'g' || s[i+1] == 'i' || s[i+2] == 'r' || s[i+3] == 'l') 
			girl++;
	}
	cout << boy << endl; 
	cout << girl << endl; 
    
	return 0; 
}