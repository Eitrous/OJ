#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 10;

void solve()
{
    int n,k,s = 0;
    //string lessons;
    char lessons[505];
    cin >> n >> k >> lessons;
    for(int i = n-1; i >= 0 ; i--){
        if(lessons[i] == '1') memset(lessons+i,'1',sizeof(char)*(i+k+1 > n-1 ? n-i : k+1));
    }
    for(int i = 0; i < n; i++) s += lessons[i]-'0';
    cout << n-s << '\n';
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}