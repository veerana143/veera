#include<stdio.h>
#include<stdlib.h>
int n;

struct node
 {
    int data;          
    struct node *next;
}*head;

void createList(int n);
void traverseList();


int create_ll()
{
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in the list \n");
    traverseList();

    return 0;
}

/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


   
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;



    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;    
    }

}


void traverseList()
{
    struct node *temp;


    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
   
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;                
    }
}

int linked_list()
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
   break;
   case 2:printf("not implemented yet");
   
   case 3:printf("not implemented yet");

   case 4:printf("not implemented yet");

 }
}
 int datastructures()
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
     break;
case 2:printf("not implemented yet");
     break;
case 3:linked_list();
      break;
case 4:printf("not implemented yet");
     break;
default : printf("choose proper option");
     break;
}
}

    