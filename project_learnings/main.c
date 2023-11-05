
#include<stdio.h>

int n;
main()
{
printf("##################welcome to learnings tutorilas ################\n");
printf("selest below option which kind of programs\n \
1.bitwise operater \n \
2.strings\n \
3.misclinious \n \
4.datastructres\n");

scanf("%d",n);
switch(n)
{
case 1:bw_prog_list();
case 2:str_prog_list();
case 3:
case 4:
default : printf("choose proper option from given list");
}
}
