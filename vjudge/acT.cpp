#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int lena,lenb,tmp = 0;
    string a,b;
    cin >> a >> b;
    if(a == "0" || b == "0"){
        cout << 0;
        return 0;
    }
    lena = a.length();
    lenb = b.length();
    int rst[4010];
    for (int i = 0; i < 4010; i++)
    {
        rst[i] = 0;
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for (int i = 0; i < lenb ; i++)
    {
        for (int j = 0; j < lena; j++)
        {
            rst[i+j] = rst[i+j]+((a[j]-'0')*(b[i]-'0'))%10;
            rst[i+j+1] = rst[i+j+1]+((a[j]-'0')*(b[i]-'0'))/10;
        }
    }
    for (int k = 0; k < 4010; k++)
            {
                if(rst[k] > 9){
                    rst[k+1] += rst[k]/10;
                    rst[k] %= 10;
                }
            }
    if(rst[lena+lenb-1] != 0) cout << rst[lena+lenb-1];
    for(int i = lena+lenb-2 ; i >= 0 ; i--)
    {
        cout << rst[i];
    }
    return 0;
}