#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char name[1005][10];
    int grdc[1005],grdm[1005],grde[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> grdc[i] >> grdm[i] >> grde[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int sum1 = grdc[i] + grdm[i] + grde[i];
        for (int j = i+1; j < n; j++)
        {
            int sum2 = grdc[j] + grdm[j] + grde[j];
            if (abs(sum1-sum2) <= 10 && abs(grdc[i]-grdc[j]) <= 5 && abs(grdm[i]-grdm[j]) <= 5 && abs(grde[i]-grde[j]) <= 5)
            {
                cout << name[i] << ' ' << name[j] << endl;
            }
            
        }
        
    }
    return 0;
}



/*字符串长度要+1！！！*/