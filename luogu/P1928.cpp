#include<bits/stdc++.h>

std::string code,decode;
int ket[20000],pen = 0;
int len;
std::stack<int> bracket;

void unzip(int begin,int end)
{
    for (int j = begin; j <= end ; j++)
    {
        if(code[j] != '[')
        {
            decode.push_back(code[j]);
        }
        else
        {
            int right = ket[j];
            int times = 0;
            int k = j+1;
            while ('0' <= code[k] && code[k] <= '9')
            {
                times = times*10 + (code[k] - '0');
                k++;
            }
            for (int l = 0; l < times; l++)
            {
                unzip(k,right-1);
            }
            j = right;
        }
    }
    return;
}

int main()
{
    std::cin >> code;

    len = code.length();

    for (int i = 0; i < len; i++)
    {
        if(code[i] == '[') bracket.push(i);
        else if(code[i] == ']')
        {
            int left = bracket.top();
            bracket.pop();
            ket[left] = i;
        }
    }

    unzip(0,len-1);

    std::cout << decode;

    return 0;

}


/*

luogu神解，学着点

#include<bits/stdc++.h>
using namespace std;
string f()
{
    string s1="",s2;
    char ch;
    while(cin>>ch)
    {
        if(ch=='\n')break;
        if(ch=='[')
        {
            int t;
            scanf("%d",&t);
            s2=f();
            while(t--)s1+=s2; 
        }
        else if(ch==']')return s1;
        else s1+=ch;
    }
}
int main()
{
    cout<<f();
    return 0;
}

*/


/*

luogu大神解

#include<iostream>
#include<string>
using namespace std;
struct stack{
    int t;
    string s;
}st[20]; //t来存之后找到时要循环的次数，s就是之后的字符串
int x;
string s;
int main(){
    cin>>s;
    int lens=s.size(),len=0;
    for (int i=0;i<lens;i++){
        if (s[i]<='Z'&&s[i]>='A')
            st[len].s+=s[i];
        else if (s[i]=='['){
            st[++len].s="";
            st[len].t=0; //记得清零，防止出现[xxxx][xxxx]的情况 
        }
        else if (s[i]<='9'&&s[i]>='0')
        st[len].t=st[len].t*10+s[i]-'0';  
        else if (s[i]==']'){
            for (int j=1;j<=st[len].t;j++)
                st[len-1].s+=st[len].s;
            len--;
        }
    }
    cout<<st[0].s<<endl;//直接输出最开始的字符串 
    return 0;//标准的退出，记得写 
}
···


*/