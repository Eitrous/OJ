#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,n;
    string s;
    cin >> t;
    while (t--)
    {
        
        cin >> n;
        getchar();
        if(n == 1){
            cout << "? 0" << endl;
            c = getchar();
            getchar();
            if(c == '1') cout << "! 1" << endl;
            else cout << "! 0" << endl;
        }
        else if(n == 2){
            cout << "? 00" << endl;
            c = getchar();
            getchar();
            if(c == '1') cout << "! 00" << endl;
            else{
                cout << "? 01" << endl;
                c = getchar();
                getchar();
                if(c == '1') cout << "! 01" << endl;
                else{
                    cout << "? 10" << endl;
                    c = getchar();
                    getchar();
                    if(c == '1') cout << "! 10" << endl;
                    else cout << "! 11" << endl;
                }
            }
        }
        else{
            string s;
            cout << "? 00" << endl;
            c = getchar();
            getchar();
            if(c == '1') s = "00";
            else{
                cout << "? 01" << endl;
                c = getchar();
                getchar();;
                if(c == '1') s = "01";
                else{
                    cout << "? 10" << endl;
                    c = getchar();
                    getchar();
                    if(c == '1') s = "10";
                    else s = "11";
                }
            }//确定了其中两位
            cout << "? " << s+'0' << endl;
            c = getchar();
            getchar();
            if(c == '1') s += '0';
            else{
                cout << "? " << s + '1' << endl;
                c = getchar();
                getchar();
                if(c == '1') s += '1';
                else{
                    cout << "? " << '0'+s << endl;
                    c = getchar();
                    getchar();
                    if(c == '1') s = '0'+s;
                    else s= '1'+s;
                }
            }//确定了其中三位
            int i = 3,flag = 1;
            while (i != n)
            {
                while (flag == 1&& (i != n))
                {
                    cout << "? " << s+'0' << endl;
                    c = getchar();
                    getchar();
                    if(c == '1') {s += '0';i++;}
                    else{
                        cout << "? " << s+'1' << endl;
                        c = getchar();
                        getchar();
                        if(c == '1') {s += '1';i++;}
                        else flag = 0;
                    }
                }
                while (i != n)
                {
                    cout << "? " << '0'+s << endl;
                    c = getchar();
                    getchar();
                    if(c == '1') {s = '0'+s;i++;}
                    else{s = '1'+s;i++;}     
                }   
            }
            cout << "! " << s << endl;
        }
    }
    
}