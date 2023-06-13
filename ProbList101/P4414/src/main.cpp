#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    char ch;
    for(int i = 0; i < 3; i++)
	{
		cin >> ch;
		if(ch == 'A') cout << arr[0] << ' ';
		if(ch == 'B') cout << arr[1] << ' ';
		if(ch == 'C') cout << arr[2] << ' ';
	}

    return 0;
}