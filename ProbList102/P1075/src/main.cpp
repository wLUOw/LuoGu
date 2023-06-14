#include<bits/stdc++.h>
using namespace std;

bool isZhiShu(int x)
{
    if (x == 2){
        return true;
    } else if (x % 2 == 1){
        bool flg = true;
        for (int i = 3; i <= sqrt(x); i += 2) {
            if (x % i == 0){
                flg = false;
            }
        }
        return flg;
    } else {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << (n / 2) << endl;;
    } else {
        for (int i = 3; i < sqrt(n); i+=2) {
            if (isZhiShu(i) && n % i == 0){
                cout << (n / i) << endl;
            }
        }
    }
}