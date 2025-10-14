#include<iostream>
using namespace std;
int main()
{
    char isbn[13];
    int k;
    scanf("%s",&isbn);
    k = (isbn[0]-48) + (isbn[2]-48)*2 + (isbn[3]-48)*3 + (isbn[4]-48)*4 + (isbn[6]-48)*5 + (isbn[7]-48)*6 + (isbn[8]-48)*7 + (isbn[9]-48)*8 + (isbn[10]-48)*9;
    if(((k%11) == isbn[12]-48) || ((k%11 == 10) && isbn[12] == 'X'))
    {
        cout << "Right";
    }
    else
    {
        for(int i = 0 ; i <=11 ; ++i)
        {
            cout << isbn[i];
        }
        int j = k%11;
        if(j == 10)
        {
            cout << 'X';
        }
        else
        {
            cout << j;
        }
    }
    return 0;
}