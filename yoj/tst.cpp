#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N],cnt,mx;
int t[N];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _;cin >> _;
	while(_--)
	{
		int n;cin >> n;
		cnt = 0;mx = 0;
		memset(t,0,sizeof(t));
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
			if(!t[a[i]])
			{
				cnt++;
				t[a[i]]++;
			}
			else
			{
				cnt = 1;
				memset(t,0,sizeof(t));
				t[a[i]]++;
			}
			mx = max(mx,cnt);
		}
		cout << mx << '\n';
	}
	return 0;
}