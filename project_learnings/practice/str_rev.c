#include<stdio.h>
#include<string.h>
int str_rev(char str[]);
char str[100];
char str1[100];
int main()
{
    printf("enter a string\n");
    scanf("%s",str);   //str holds first char address of str array
    str_rev(str);
}

 int str_rev(char str[])
{
   int i=0,j=0,len=0;
   while(str[len]!='\0')
   {
   len++;
   }
   for(i=len-1;i>=0;i--)
   {
    str1[j]=str[i];
    j++;
   }
   str1[j]='\0';
   printf("%s",str1);
}