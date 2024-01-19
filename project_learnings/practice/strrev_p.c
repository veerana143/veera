#include <stdio.h>
#include<string.h>
void strrev_n(char* str);
int main()
{
    char s[100];
    printf("enter your string\n");
    scanf("%s",s);
    strrev_n(s);
    printf("%s\n",s);
}
void strrev_n(char* str)
{
    int i=0,len=strlen(str);
    char* t=str+len-1;
    while(i<len/2)
    {
        char temp=*str;
        *str=*t;
        *t=temp;
        str++;
        t--;
        i++;
    }
}


