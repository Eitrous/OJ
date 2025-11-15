#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;
int pro[N],aft[N];

signed main()
{
	int n;cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> pro[i];
	int tmp,p;
	for(int i = 0 ; i<n ; i++){
		aft[i] = pro[i];
		p = i;
		while(p != 0 && aft[p] < aft[p-1] ){
			swap(aft[p],aft[p-1]);
			p--;
		}
	}
	for(int i = 0 ; i < n ; i++) cout << aft[i] << ' ';
	return 0;
}