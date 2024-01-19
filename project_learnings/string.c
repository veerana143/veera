#include<stdio.h>
int str_prog_list();
int s,str2;
char str[100];
char str1[100];
char s2[100];
char s3[100];

int str_len()
 {
    printf("enter string\n");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    i++;
    printf("%d",i);
 }
  int str_rev()
 {
    printf("enter a string\n");
    scanf("%s",str);   //str holds first char address of str array
    int k=0,l=0,len=0;
    while(str[len]!='\0')
    {
    len++;
    }
    for(k=len-1;k>=0 ;k--)
    {
     str1[l]=str[k];
     l++;
   }
   str1[l]='\0';
   printf("%s",str1);
}
 int str_cpy() 
{ 

   printf("Enter any string: "); 
   scanf("%s",str2); 
   int i; 
   for(i=0;s2[i]!='\0';i++) 
   { 
      s3[i]=s2[i]; 
   } 
   s3[i]='\0'; 
   
   printf("original string s2='%s'\n",s2); 
   printf("copied string   s3='%s'",s3); 

}

  
int  str_prog_list()
{
printf("########################strings related pograms################\n");
printf("select below option which kind of programs\n \
1.string length \n \
2.string reverse \n \
3.string copy\n \
4.string  len using pointers\n \
5.string rev using pointers\n \
6.string copy using pointers\n");

scanf("%d",&s);
switch(s)
{
case 1:str_len();
       break;
case 2:str_rev();
       break;
case 3:str_cpy(); 
      break;
case 4:printf("not im implemented yet");
      break;
case 5:printf("not implemented  yet");
      break;
case 6:printf("not implemented yet\n");
      break;
}
}

