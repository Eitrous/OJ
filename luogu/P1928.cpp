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