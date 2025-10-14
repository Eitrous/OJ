#include<iostream>
using namespace std;
int main()
{
    int x,y,z,n;
    cin >> n;
    if(n == 1){
        cout << -1;
    }
    else{
        x = n;
        y = n+1;
        z = n*(n+1);
        printf("%d %d %d",x,y,z);
    }
   
    return 0;
}