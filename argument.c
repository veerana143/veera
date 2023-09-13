//this  program is  for covering  all args types
#include <stdio.h>
#include<pthread.h>
void even_odd();
int prime();
void name();
int add();
int  palindrome();
int factorial();
static int n;                         //global variables                  //static global variables
void main()
{
    int x=20;
    int i,count=0,p,k;
    int n,r,sum=0,temp;
    int fact,number;          //local variables                         //automatic variables
    printf("enter a number\n");
    scanf("%d",&n);
    even_odd(n,&x);                           //with argument  without return
     printf("the x value:%d\n",x);
     printf("enter a number\n");
    scanf("%d",&n);
     p=prime(n);                            //with argument    with return
    printf("%d is given prime\n",p);
    name();                                 //without argument   without return
    k=add();                                 //without  argument   with return
   printf("k=%d\n",k); 
   printf("enter a number:");
   scanf("%d",&n);
   printf("enter the number");
   scanf("%d",&n);
   fact=factorial(number);
   printf("factorial of %d is %d\n",number,fact);

   pthread_t  thread1,thread2;
   pthread_create(&thread1,NULL,palindrome,n);
   pthread_create(&thread2,NULL,factorial,n);
}
void even_odd( int n,int* p)
 {
    *p=40;
    if(n%2==0)
    printf("%d is even\n",n);
    else
    printf("%d is odd\n",n);
}
void name()
{
    printf("my name is prasanthi\n");

}
int add()
{
    static int a,b;                           //local variables
    printf("enter a and b\n");
    scanf("%d %d" ,&a,&b);
    return a+b;
    
}

