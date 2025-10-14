#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tmp,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int i = 1,flag = 1;
        string s = "";
        cout << "? 0" << endl;
        cin >> tmp;
        s += (tmp?'0':'1');
        if(n == 2){
            cout << "? " << s+'1' << endl;
            cin >> tmp;
            if(tmp) s += '1';
            else{
                cout << "? " << s+'0' << endl;
                cin >> tmp;
                if(tmp) s += '0';
                else{
                    cout << "? " << '1'+s << endl;
                    cin >> tmp;
                    if(tmp) s = '1'+s;
                    else s = '0'+s;
                }
            }
        }
        else{
            while (flag && (i != n))
            {
                cout << "? " << s+'0' << endl;
                cin >> tmp;
                if(tmp){
                    s += '0';
                    i++;
                }
                else{
                    cout << "? " << s+'1' << endl;
                    cin >> tmp;
                    if(tmp) {
                        s += '1';
                        i++;
                    }
                    else flag = 0;
                }


            }
            while (i != n)
            {
                cout << "? " << '0'+s << endl;
                cin >> tmp;
                if(tmp){
                    s = '0'+s;
                    i++;
                } 
                else{
                    s = '1'+s;
                    i++;
                }
            }
        }
        cout << "! " << s << endl;
    }
    return 0;
}