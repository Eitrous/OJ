#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bool u = 1;
        cin >> n;
        long long a[105]={};
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a,a+n);
        for (int k = 0; k < n; k++)
        {
            
            if(a[k] == a[k+1])
            {
                cout << "NO" << endl;
                u = 0;
                break;
            }
        }
        if(u){
            cout << "YES" << endl;
        } 
    }
    return 0;
}