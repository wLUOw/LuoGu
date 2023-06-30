#include<bits/stdc++.h>
using namespace std;

struct node
{
    int id;
    int s1, s2;
    int sum;
    int wei;
};

int main()
{
    int n;
    cin >> n;
    node stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].id >> stu[i].s1 >> stu[i].s2;
        stu[i].sum = stu[i].s1 + stu[i].s2;
        stu[i].wei = 7*stu[i].s1 + 3*stu[i].s2;
        if (stu[i].sum > 140 && stu[i].wei >= 800)
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }
    
    return 0;
}
