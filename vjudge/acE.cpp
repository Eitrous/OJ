#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int n,s[1005],temp,i = 0;
    float sum = 0;
    cin >> n;
    for( ; i < n ; i++ ){
        cin >> s[i];
    }
    for( int j = 0 ; j < i ;j++){
        for( int k = 0 ; k < i-j-1 ; k++){
            if(s[k]>s[k+1]){
                temp = s[k];
                s[k] = s[k+1];
                s[k+1] = temp;
            }
        }
    }
    for( i = 1 ; i < n-1 ; i++){
        sum += s[i];
    }
    cout << fixed << setprecision(2) << sum/(n-2);
    return 0;
    
}