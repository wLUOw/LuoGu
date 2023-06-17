#include<bits/stdc++.h>
using namespace std;

struct student
{
    string s;
    int a, b, c;
};


int main()
{
    string s;
    int n, a, b, c, maxS = -1, maxI = -1;
    cin >> n;
    student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].s >> stu[i].a >> stu[i].b >> stu[i].c;
        if (stu[i].a + stu[i].b + stu[i].c > maxS)
        {
            maxS = stu[i].a + stu[i].b + stu[i].c;
            maxI = i;
        }
    }
    cout << stu[maxI].s << " " << stu[maxI].a << " " << stu[maxI].b << " " << stu[maxI].c;

    return 0; 
}