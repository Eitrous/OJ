#include<bits/stdc++.h>
#define PI 3.14

int main()
{
    int h,r;
    std::cin >> h >> r;
    double vol = (double)h*PI*r*r;
    std::cout << ceil(20000/vol);
    return 0;
}