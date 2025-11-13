#include<bits/stdc++.h>
using namespace std;

long long n,step[5005];

void move(long long num)
{
    // if(num <= 2) {
    //     step[1] = 1;
    //     step[2] = 2;
    // }
    // else {
    //     move(num-1);
    //     step[num] = step[num-1] + step[num-2];
    // }
    step[0] = 1;
    step[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        step[i] = step[i-1] + step[i-2];
    }
    
}

int main()
{
    cin >> n;
    move(n);
    cout << step[n];
}