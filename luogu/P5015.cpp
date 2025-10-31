#include<bits/stdc++.h>
using namespace std;

string str;
int main()
{
    long long pos = -1,len = 0;
    while (getline(cin,str))
    {
 
        pos = str.find(' ');
        while (pos != -1)
        {
            str.erase(pos,1);
            pos = str.find(' ');
        }
        pos = str.find('\n');
        while (pos != -1)
        {
            str.erase(pos,1);
            pos = str.find('\n');
        }
        
        len += str.length();

    }

    cout << len;

    return 0;

}


/*
想复杂了

#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    char c;
    if(cin>>c)ans++; //cin自动去除空格换行
    if(cin>>c)ans++; //cin在读不到数据时返回0
    if(cin>>c)ans++;
    if(cin>>c)ans++;
    if(cin>>c)ans++;
    cout<<ans;
}

*/