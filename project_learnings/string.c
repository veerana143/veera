#include<stdio.h>
int str_prog_list();
int s;
char str[100];
str_len()
{
    printf("enter string\n");
    scanf("%s",str);
    string_length(str);
  }

 int string_length( char str[])
   {
       int i=0;
    while(str[i]!='\0')
    i++;
    printf("%d",i);
   }
int  str_prog_list()
{

printf("########################strings related pograms################\n");
printf("select below option which kind of programs\n \
1.string length \n \
2.string copy \n \
3.string reverse\n \
4.string  len using pointers\n \
5.string rev using pointers\n \
6.string copy using pointers\n");

scanf("%d",&s);
switch(s)
{
case  1:string_length(str_len());

       break;
case 2:printf("not implemented yet");
       break;
case 3:printf("not implemented yet");
      break;
case 4:printf("not im implemented yet");
      break;
case 5:printf("not implemented  yet");
      break;
case 6:printf("not implemented yet\n");
      break;
}
}
