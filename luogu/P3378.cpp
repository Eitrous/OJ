#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
int heap[N],n,cnt = 0;

void swiftdown(int pos)
{
    if(pos <= n/2) 
}

void init()
{
    for(int i = n/2 ; i > 0 ; --i) swiftdown(i);
}

signed main()
{
    int n;cin >> n;
    int op;
    while (n--)
    {
        cin >> op;
        switch (op)
        {
        case 1:
            cin >> heap[++cnt];
            break;
        
        case 2:
            cout << heap[1] << '\n';
            break;

        case 3:
            swap(heap[cnt],heap[1]);
            --cnt;
            break;
        }
    }
    
    return 0;

    
}