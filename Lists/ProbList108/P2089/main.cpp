#include<bits/stdc++.h>
using namespace std;

int arr[10010][10];

int main()
{
    int a, b, c, d, e, f, g, h, i, j, in, ans = 0;  
    cin >> in;  
    for (a = 1; a <= 3; a++)  
    {  
        for (b = 1; b <= 3; b++)  
        {  
            for (c = 1; c <= 3; c++)  
            {  
                for (d = 1; d <= 3; d++)  
                {  
                    for (e = 1; e <= 3; e++)  
                    {  
                        for (f = 1; f <= 3; f++)  
                        {  
                            for (g = 1; g <= 3; g++)  
                            {  
                                for (h = 1; h <= 3; h++)  
                                {  
                                    for (i = 1; i <= 3; i++)  
                                    {  
                                        for (j = 1; j <= 3; j++)  
                                        {  
                                            if (a + b + c + d + e + f + g + h + i + j == in)  
                                            {  
                                                ans++;
                                                arr[ans][0] = a;
                                                arr[ans][1] = b;
                                                arr[ans][2] = c;
                                                arr[ans][3] = d;
                                                arr[ans][4] = e;
                                                arr[ans][5] = f;
                                                arr[ans][6] = g;
                                                arr[ans][7] = h;
                                                arr[ans][8] = i;
                                                arr[ans][9] = j;
                                            }  
                                        }  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  
    cout << ans << endl;
    for (int i = 1; i <= ans; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}