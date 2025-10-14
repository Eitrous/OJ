#include<stdio.h>
using namespace std;
int main()
{
    //unsigned long long num;
    char str[12],num[105];
    fgets(num,105,stdin);
    //getchar();
    fgets(str,12,stdin);
    printf("%s%s", num ,str);
    return 0;
}