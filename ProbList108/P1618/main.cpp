#include<bits/stdc++.h>
using namespace std;

int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    do
    {
        int x = 100*arr[1] + 10*arr[2] + arr[3];
        int y = 100*arr[4] + 10*arr[5] + arr[6];
        int z = 100*arr[7] + 10*arr[8] + arr[9];
        if (x*b == y*a && x*c == z*a) 
        {
            ans++;
            cout << x << " " << y << " " << z << endl;
        }
    } while (next_permutation(arr + 1, arr + 10));
    if (ans == 0) cout << "No!!!";

    return 0;
}