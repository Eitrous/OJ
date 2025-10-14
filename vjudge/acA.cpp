#include<iostream>
using namespace std;
int main()
{
    float abc[3],temp;
    cin >> abc[0] >> abc[1] >> abc [2];
    
    for(int j=0; j<=2;j++)
    {
        for(int i=0;i<2;i++)
        {
            if(abc[i]>abc[i+1])
            {
                temp = abc[i];
                abc[i] = abc[i+1];
                abc[i+1] = temp;
            }

        }
    }
    //cout << abc[0] << abc[1] << abc[2];
    if(abc[0]+abc[1]<=abc[2])
    {
        cout << "Not triangle";
        return 0;
    }
    else
    {
        float det = abc[0]*abc[0]+abc[1]*abc[1]-abc[2]*abc[2];
        if(det == 0)
        {
            cout << "Right triangle" << endl;
        }
        else if(det > 0)
        {
            cout << "Acute triangle" << endl;
        }
        else 
        {
            cout << "Obtuse triangle" << endl;
        }
        if(abc[0] == abc[1] || abc[1] == abc[2] || abc[0] == abc[2])
        {
            cout << "Isosceles triangle" << endl;
            if(abc[0] == abc[1] && abc[1] == abc[2])
            {
                cout << "Equilateral triangle" << endl;
            }
        }
        return 0;
    }
    //return 0;
    
}