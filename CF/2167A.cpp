#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}