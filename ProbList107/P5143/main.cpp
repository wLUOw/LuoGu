#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x, y,z;
};

bool cmp(point p1, point p2)
{
    return p1.z < p2.z;
}

int main()
{
    int n;
    cin >> n;
    point arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].x >> arr[i].y >> arr[i].z;
    }
    sort(arr, arr+n, cmp);
    double ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        ans += sqrt((arr[i+1].x - arr[i].x)*(arr[i+1].x - arr[i].x) + (arr[i+1].y - arr[i].y)*(arr[i+1].y - arr[i].y) + (arr[i+1].z - arr[i].z)*(arr[i+1].z - arr[i].z));
    }
    printf("%.3lf", ans);

    return 0;
}