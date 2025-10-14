#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    float num;
    cin >> num;
    a = num/100;
    b = (num-a*100)/10;
    c = (num-a*100-b*10)/1;
    d = int(num*10)%10;
    cout << d << '.' << c << b << a;
    return 0;
}