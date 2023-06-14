#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num)
{
    if (num == 2)
    {
        return true;
    } 
    else if (num % 2 == 1)
    {
        int x = 3;
        while (x < num)
        {
            if (num % x == 0)
            {
                return false;
            }
            x += 2;
        }
        return true;
    }
    return false;
}

int main()
{
    int l;
    cin >> l;
    int sum = 0;
    int num = 2;
    int cnt = 0;
    if (l < 2)
    {
        cout << 0 << endl;
        return 0;
    }
    
    while (sum <= l)
    {
        if (is_prime(num))
        {
            cnt++;
            sum += num;
            cout << num << endl;
        }
        num++;
        if (num > l - sum)
        {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}