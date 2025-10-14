#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    float a,b,c,p;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}