#include<bits/stdc++.h>
#define PI 3.141593
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "I love Luogu!";
        break;

    case 2:
        cout << 2+4 << ' ' << 10-2-4;
        break;

    case 3:
        cout << 14/4 << endl << 14-14%4 << endl << 14%4;
        break;

    case 4:
        cout << fixed << setprecision(3) << 500.0/3.0;
        break;

    case 5:
        cout << (260+220)/(12+20);
        break;

    case 6:
        cout << sqrt(6*6+9*9);
        break;

    case 7:
        cout << 100+10 << endl;
        cout << 100+10-20 << endl;
        cout << 0 << endl;
        break;

    case 8:
        cout << 2*5*PI << endl << PI*5*5 << endl << 4*PI*5*5*5/3;
        break;

    case 9:
        cout << (((1+1)*2+1)*2+1)*2;
        break;

    case 10:
        cout << 9;
        break;

    case 11:
        cout << 100/3.0;
        break;

    case 12:
        cout << 'M'-'A'+1 << endl << char('A'+18-1);
        break;

    case 13:
        cout << fixed << setprecision(0) << pow(4*PI*(4*4*4+1000)/3.0,1.0/3);
        break;

    case 14:
        cout << 50;
        break;
    }
    return 0;
}