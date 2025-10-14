#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    cout << 100 << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << a << " ";
    }
    for (int i = 0; i < 45; i++)
    {
        cout << a+1 << " ";
    }
    for (int i = 0; i < 4; i++)
    {
        cout << b+1 << " ";
    }
    cout << c+1;
    return 0;
}