#include<iostream>
using namespace std;
int main()
{
    int t,n;
    char grd1[100],grd2[100];
    bool valid = true;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> grd1 >> grd2;
        for (int j = 0; j < n; j++)
        {
            if((grd1[j] != 'R' && grd2[j] != 'R') || (grd1[j] == grd2[j])){
                valid = true;
            }
            else{
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
    
}