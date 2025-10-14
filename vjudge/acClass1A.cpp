#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if((t>=0&&t<=7)||(t>=19&&t<=23))
    {
        cout << "night";
    }
    else if(t>=8&&t<=12)
    {
        cout << "morning";
    }
    else if(t>=13&&t<=14)
    {
        cout << "noon";
    }
    else
    {
        cout << "afternoon";
    }
    return 0;
}