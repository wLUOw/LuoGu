#include<bits/stdc++.h>
using namespace std;

int a[21][21] = {0};
int main()
{
    int n;
    cin >> n;
    for (size_t i = 1; i < n+1; i++)
    {
        a[i][i] = 1;
        a[i][1] = 1;
    }
    for (size_t i = 3; i < n+1; i++)
    {
        for (size_t j = 2; j < i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < i+1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
    
}