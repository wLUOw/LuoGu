#include<bits/stdc++.h>
using namespace std;

bool isZhiShu(int x);

int main()
{
    int n;
    cin >> n;
    cout << ("4=2+2") << endl;
    for (int i = 6; i <= n; i+=2) {
        for (int j = 3; j <= n / 2; j+=2) {
            if (isZhiShu(j) && isZhiShu(i - j)){
                cout << i << "=" << j << "+" << (i - j) << endl;
                break;
            }
        }
    }

    return 0;
}

bool isZhiShu(int x)
{
    if (x == 2)
    {
        return true;
    } 
    else if (x % 2 == 1)
    {
        bool flg = true;
        for (int i = 3; i <= sqrt(x); i += 2) {
            if (x % i == 0){
                flg = false;
            }
        }
        return flg;
    } 
    else 
    {
        return false;
    }
}