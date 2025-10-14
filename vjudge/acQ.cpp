#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a>=b) return b;
    else return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < min(n,i+10); j++)
            {
                if(j-i < s[j]-s[i]){
                    int tmp;
                    tmp = s[j];
                    for (int k = j; k > i ; k--)
                    {
                        s[k] = s[k-1];
                    }
                    s[i] = char(tmp - j + i);
                }
            }
            
        }
        cout << s << endl;
    }
    return 0;
}