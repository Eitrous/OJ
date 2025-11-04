#include<bits/stdc++.h>
using namespace std;
const long long N = 200005;


int main()
{
    long long n,sum,a,max;
    cin >> n >> sum;
    max = sum;
    for (int i = 2; i <= n; i++)
    {
        cin >> a;
        sum += a;
        if(sum < 0){
            max = (max > a ? max : a);
            sum = 0;
        }
        else max = (max > sum ? max : sum);
    }

    cout << max;

    return 0;
}