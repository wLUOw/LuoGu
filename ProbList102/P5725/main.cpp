#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (num < 10 ? "0" : "") << num;
            num++; 
        }
        cout << endl;
    }

    cout << endl;

    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << (num < 10 ? "0" : "") << num;
            num++;
        }
        cout << endl;
    }
    
    return 0;
}