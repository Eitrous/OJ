#include<bits/stdc++.h>

std::string code,decode;
int len;
int ket[20000],pen = 0;
std::stack<int> bracket;

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

    std::cout << len;
    return 0;
}