#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n-i-1; j++)
        {
            cout << ' ';
        }   
        for (j = 0; j < i+1; j++)
        {
            cout << char('A'+j);
        }
        for ( ; j > 1; j--)
        {
            cout << char('A'+j-2);
        }
        cout << endl;
        
        
    }
    
}