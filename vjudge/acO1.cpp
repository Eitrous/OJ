#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string ctst;
    cin >> t;
    while (t--)
    {
        cin >> ctst;
        sort(ctst.begin(),ctst.end());
        reverse(ctst.begin(),ctst.end());
        cout << ctst << endl;
    }
    return 0;
}
