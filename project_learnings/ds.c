#include<stdio.h>
int n;
create_ll()
{
printf("please implement this task");
}
linked_list()
{
 printf("##################linked list related programs ################\n");
 printf("selest below option which kind of programs\n \
 1.create linked list \n \
 2.display linked list \n \
 3.linkedlist node deletion\n \
 4.loop detection \n \
 5.reverse linked list\n");

 scanf("%d",&n);

 switch(n)
 {

   case 1:create_ll();

   case 2:printf("not implemented yet");
   
   case 3:printf("not implemented yet");

   case 4:printf("not implemented yet");

 }
}
datastructures()
{

printf("##################datastrucures related programs ################\n");
printf("selest below option which kind of programs\n \
1.stack \n \
2.queue\n \
3.linkedlist\n \
4.searching\n \
5.sorting\n");

scanf("%d",&n);

switch(n)
{

case 1:printf("not implemented yet");

case 2:printf("not implemented yet");

case 3:linked_list();

case 4:printf("not implemented yet");

default : printf("choose proper option");
}


}
