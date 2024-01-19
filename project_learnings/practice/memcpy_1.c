/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
   char src[20];
   char dst[20]="veera";
   printf("enter a string\n");
   scanf("%s",src);
   //strcpy
   strncpy(dst, src, 10);
    memcpy(dst,src,sizeof(src));
    memset(src,'s',5);
    memmove(src, dst, sizeof(dst)); 
    
    printf("dst = %s\n", dst);
   
    return 1;
}