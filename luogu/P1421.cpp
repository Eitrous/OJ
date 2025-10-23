#include<bits/stdc++.h>

int main()
{
    double sumprice,a,b,sprice = 1.9;
    std::cin >> a >> b;
    sumprice = a+b/10;
    std::cout << (long long)(sumprice / sprice);
    return 0;
}