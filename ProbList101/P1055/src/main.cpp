#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[14], mod[12] = "0123456789X";
    scanf("%s", a); //输入字符串
    int i, j = 1, t = 0;
    for(i = 0; i < 12; i++) {
        if(a[i] == '-') continue; //字符串为分隔符‘-’时跳过此次循环进入下一次循环
        t += (a[i]-'0')*j++;
    }
    if(mod[t%11] == a[12]) printf("Right");
    else {
        a[12] = mod[t%11]; //若识别码错误，则赋正确的识别码，然后输出
        printf("%s", a);
    }

    return 0;
}