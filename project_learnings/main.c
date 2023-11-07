
#include<stdio.h>


main()
{
int n;
printf("##################welcome to learnings tutorilas ################\n");
printf("selest below option which kind of programs\n \
1.bitwise operater \n \
2.strings\n \
3.misclinious \n \
4.datastructres\n");

scanf("%d",&n);
switch(n)
{
case 1:printf("not implemented yet");

case 2:str_prog_list();

case 3:printf("implement later");

case 4:datastructures();
default : printf("choose proper option from given list");
}
}
