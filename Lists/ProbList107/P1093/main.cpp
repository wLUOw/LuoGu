#include<bits/stdc++.h>
using namespace std;

struct node
{
    int id, a, b, c, sum;
};

bool cmp(node n1, node n2)
{
    if (n1.sum > n2.sum)
    {
        return true;
    } 
    else if (n1.sum < n2.sum)
    {
        return false;
    }
    else if (n1.a != n2.a)
    {
        return n1.a > n2.a;
    }
    else
    {
        return n1.id < n2.id;
    }
}

int main()
{
    int n;
    cin >> n;
    node arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].id = i + 1;
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
        arr[i].sum = arr[i].a + arr[i].b + arr[i].c;
    }
    sort(arr, arr+n, cmp);
    for (int i = 0; i < min(n, 5); i++)
    {
        cout << arr[i].id << " " << arr[i].sum << endl;
    }
    
    return 0;
}