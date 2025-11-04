#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,m,min;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        m = b*(n/a + (n%a ? 1 : 0));
        if(i == 0) min = m;
        else if(min > m) min = m;
    }
    
    cout << min;

    return 0;
}