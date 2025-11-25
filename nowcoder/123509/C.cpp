#include<bits/stdc++.h>
using namespace std;
stack<int> bracket;
int main()
{
    int n;cin >> n;
    long long count = 0,cnt = 0;
    string str;cin >> str;
    
    for (int i = 0; i < n; i++){
        if(str[i] == '(') count++;
        else if(str[i] == ')'){
            if(count > 0) count--;
            else cnt++;
        }
    }
    
    if(abs(cnt+count)%2) cout << -1;
    else cout << cnt/2 + count/2 + 2*(cnt%2);
    return 0; 
}