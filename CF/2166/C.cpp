#include<bits/stdc++.h>
using namespace std;
#define int long long
int num[200005];
list<int> ring;
signed main()
{
    int t;cin >> t;
    int n,ltmp,rtmp,cost;
    while (t--){
        cost = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> num[i];
            ring.push_back(num[i]);
        }
        sort(num+1,num+1+n);
        for(int i = 1; i < n; i++){
            if(i <= n-2){
                for(list<int>::iterator it = ring.begin(); it != ring.end(); ++it){
                    if(*it == num[i]){
                        if(++it != ring.end()){
                            ltmp = *it,rtmp = *(--(--it));
                            ++it;
                            if(ltmp > rtmp) cost += rtmp;
                            else cost += ltmp;
                        } 
                        else{
                            ltmp = *(--(--it)),rtmp = ring.front();
                            ++it;
                            if(ltmp > rtmp) cost += rtmp;
                            else cost += ltmp;
                        }
                        ring.erase(it);
                        it--;
                    }
                }
            }
            else cost += num[n];
        }
        cout << cost << '\n';
        ring.clear();
    }
    return 0;
}