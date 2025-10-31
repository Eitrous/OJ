#include<bits/stdc++.h>
using namespace std;
int num[200005];

int main()
{
    int t,n,times,temp;
    cin >> t;
    while (t--)
    {
        num[200005] = {0};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += num[i]%2;
        }
        if(sum == 0 || sum == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << num[i] << ' ';
            }
            cout << endl;
        }
        else
        {
            sort(num,num+n);
            for (int i = 0; i < n; i++)
            {
                cout << num[i] << ' ';
            }
            cout << endl;
            
        }
        

        
        
    }
    
    return 0;
}