#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum = 0;
    string str = "";
    cin >> N;
    bool isZero = true;
    while (sum < N * N)
    {
        int temp;
        cin >> temp;
        sum += temp;
        if (isZero)
        {
            for (int i = 0; i < temp; i++) 
                str += "0";
        } 
        else 
        {
            for (int i = 0; i < temp; i++) 
                str += "1";
        }
        isZero = !isZero;
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
        {
            cout << str[i*N + j];
        }
        cout << endl;
    }

    return 0;
}