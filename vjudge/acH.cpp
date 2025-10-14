#include<iostream>
using namespace std;
int ooe(int num)
{
    if(num%2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    long long t,n,a,b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;
        if( ooe(n) == 1 && ooe(b) == 1 && ( a<=b || ooe(a) == 1)){
            cout << "YES" << endl;
        }
        else if( ooe(n) == 0 && ooe(b) == 0 && ( a<=b || ooe(a) == 0 )){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
    
}