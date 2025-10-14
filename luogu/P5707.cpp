#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double s,v;
    int t,h,m;
    cin >> s >> v;
    if(s/v-(int)(s/v)>0){
        t = 11+(int)(s/v);
    }
    else{
        t = 10+(int)(s/v);
    }
    h = t/60;
    m = t%60;
    if(m>0) h++;
    if(m == 0) m = 60;
    if(h<=8) printf("0%d:",8-h);
    else if(h<=22) printf("%d:",24-h+8);
    else printf("0%d",24-h+8);
    if(m<=50) printf("%d",60-m);
    else printf("0%d",60-m);
    return 0;

}