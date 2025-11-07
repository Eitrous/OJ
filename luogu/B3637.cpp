#include<bits/stdc++.h>
using namespace std;
const long long N = 5005;
long long num[N],freq[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }

    for (int i = 1; i <= n; i++)
    {
        freq[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if(num[i] > num[j]) freq[i] = (freq[i] > freq[j]+1 ? freq[i] : freq[j]+1);
        }
    }
    int max = freq[1];
    for (int i = 2; i <= n; i++)
    {
        if(freq[i] > max) max = freq[i];
    }
    cout << max;
    return 0;
}