#include<iostream>
using namespace std;
int main()
{
    long long n,k,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if(n<k){
            cout << "NO" << endl;
        }
        else if(n == k){
            cout << "YES" << endl;
            for (int j = 0; j < k; j++)
            {
                cout << 1 << ' ';
            }
            cout << endl;
            
        }
        else{
            if(n%2){
                if(k%2){
                    cout << "YES" << endl;
                    for (int j = 0; j < k-1; j++)
                    {
                        cout << 1 << ' ';
                    }
                    cout << n-k+1 << endl;
                    
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                if( (2*k)<=n ){
                    cout << "YES" << endl;
                    for (int j = 0; j < k-1; j++)
                    {
                        cout << 2 << ' ';
                    }
                    cout << n-2*(k-1) << endl;
                }
                else if((n-k+1)%2){
                    cout << "YES" << endl;
                    for (int j = 0; j < k-1; j++)
                    {
                        cout << 1 << ' ';
                    }
                    cout << n-k+1 << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
    
}