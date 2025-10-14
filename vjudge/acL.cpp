#include<iostream>
using namespace std;
int main()
{
    int t,n,k,x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl << n << endl;
            while (n--)
            {
                cout << 1 << ' ';
            }
            cout << endl;
            
        }
        else if( n%2 && k >=3 ){
            int j = n/2-1;
            cout << "YES" << endl << j+1 << endl;
            while (j--)
            {
                cout << 2 << ' ';
            }
            cout << 3 << endl;
        }
        else if( !(n%2) && k>=2 ){
            cout << "YES" << endl << n/2 << endl;
            for (int i = 0; i < n/2; i++)
            {
                cout << 2 << ' ';
            }
            cout << endl;
            
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}