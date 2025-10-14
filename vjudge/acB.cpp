#include<iostream>
using namespace std;
int main()
{
    int h[10],sh=30,hh;
    for(int i=0;i<10;i++)
    {
        cin >> h[i];
    }
    cin >> hh;
    //for(int i=0;i<10;i++){cout << h[i];}
    
    for (int i=0;i<9;i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            int temp;
            if (h[j]>h[j+1])
            {
                temp = h[j];
                h[j] = h[j+1];
                h[j+1] = temp;
            }
            
        }
        
    }
    //for(int i=0;i<10;i++){cout << h[i];}
    int k=0;
    while (h[k]<=(hh+sh))
    {
        k++;
    }
    cout << k;
    return 0;
    
    
}