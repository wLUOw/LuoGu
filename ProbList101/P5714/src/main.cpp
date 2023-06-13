#include<bits/stdc++.h>
using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;
    double bmi = w / (h * h);
    if (bmi < 18.5){
        cout << ("Underweight");
    } else if (bmi < 24){
        cout << ("Normal");
    } else {
        if (bmi < 100){
            printf("%.4f\n", bmi);
        } else {
            printf("%.3f\n", bmi);
        }
        cout << ("Overweight");
    }

    return 0;
}