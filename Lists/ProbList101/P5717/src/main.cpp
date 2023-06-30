#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[1] >> arr[2] >> arr[3];
    sort(arr+1, arr+4);
    int a = arr[1];
    int b = arr[2];
    int c = arr[3];
    if (a + b <= c) {
        cout << ("Not triangle") << endl;
        return 0;
    }
    cout << (a*a + b*b == c*c ? "Right triangle" : (a*a + b*b < c*c ? "Obtuse triangle" : "Acute triangle")) << endl;
    if (a == b || b == c) cout << ("Isosceles triangle") << endl;
    if (a == b && b == c) cout << ("Equilateral triangle") << endl;

    return 0;
}