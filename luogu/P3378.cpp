#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
int heap[N],n,cnt = 0,minpos;

void siftdown(int pos,int len)
{
    int child = pos * 2;
    while (child <= len)
    {
        if(child+1 <= len && heap[child+1] < heap[child]) child++;
        if(heap[pos] <= heap[child]) return ;
        else{
            swap(heap[pos],heap[child]);
            pos = child;
            child = pos*2;
        }
    }
}

void siftup(int pos)
{
    int parent = pos/2;
    while (parent >= 1)
    {
        if(heap[pos] >= heap[parent]) return ;
        else{
            swap(heap[pos],heap[parent]);
            pos = parent;
            parent = pos/2;
        }
    }
    
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
            siftup(cnt);
            break;
        
        case 2:
            cout << heap[1] << '\n';
            break;

        case 3:
            swap(heap[cnt],heap[1]);
            --cnt;
            siftdown(1,cnt);
            break;
        }
    }
    
    return 0;

    
}