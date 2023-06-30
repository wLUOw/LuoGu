#include<bits/stdc++.h>
using namespace std;

struct stu
{
    string s;
    int a, b, c;
} student[1010];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].s >> student[i].a >> student[i].b >> student[i].c;
    }
    for (int i = 0; i < n; i++)
    {
		for (int j = i + 1; j < n; j++)
        {
			int ans1 = abs(student[i].a - student[j].a);
			int ans2 = abs(student[i].b - student[j].b);
			int ans3 = abs(student[i].c - student[j].c);
			int ans = abs(student[i].a + student[i].b + student[i].c - student[j].a - student[j].b - student[j].c);
			if(ans1 <= 5 && ans2 <= 5 && ans3 <= 5 && ans <= 10){
				if(student[i].s > student[j].s)
				    cout << student[j].s << " " << student[i].s << endl;
				else 
                    cout << student[i].s << " " << student[j].s << endl;
			}
		}
	}

	return 0;
}