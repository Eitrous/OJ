#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
//____qcodep____

char *checkSubstr(char *s1,char *s2)
{
    int len1 = strlen(s1),len2 = strlen(s2);
    if(len1 > len2) return NULL;
    qsort(s1,len1,sizeof(char));

}

int main()
{
    char s1[220], s2[220];
    char *pRes = NULL;

    scanf("%s%s", s1, s2);
    pRes = checkSubstr(s1, s2);

    if ( pRes == NULL )
        printf("false\n");
    else{
        pRes[ strlen(s1) ] = '\0';
        printf("%s", pRes);
    }
    return 0;
}