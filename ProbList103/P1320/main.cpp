#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int N = str.size();
    for (int i = 0; i < N - 1; i++) {
        string s;
        cin >> s;
        str += s;
    }
    printf("%d ", N);

    int sum = 0;
    while (sum < N * N){
        int cnt = 1;
        char c = str[sum];
        if (sum == 0 && c == '1'){
            printf("0 ");
        }
        while (sum + cnt < N * N && str[sum + cnt] == c){
            cnt++;
        }
        sum += cnt;
        printf("%d ", cnt);
    }

    return 0;
}