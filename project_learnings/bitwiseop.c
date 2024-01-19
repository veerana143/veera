 #include<stdio.h>
bitwise_operator();
int m;
int bitset()
{
int  num,pos;
printf("enter num and pos\n");
scanf("%d,%d",&num,&pos);
bit_set(num,pos);
}
int bit_set(int num,int pos)
{
num=num|(1<<(pos-1));
printf("after bitset %d\n",num);
}


bitclear()
{
int  num,pos;
printf("enter num and pos\n");
scanf("%d,%d",&num,&pos);
bit_clear(num,pos);
}
int bit_clear(int num,int pos)
{
num=num&(~(1<<pos-1));
printf("after bitclear %d\n",num);
}


bittoggle()
{
int  num,pos;
printf("enter num and pos\n");
scanf("%d,%d",&num,&pos);
bit_toggle(num,pos);
}
int bit_toggle(int num,int pos)
{
num=num^(1<<(pos-1));
printf("after bittoggle %d\n",num);
}

bitcheck()
{
int  num,pos;
printf("enter num and pos\n");
scanf("%d,%d",&num,&pos);
bit_check(num,pos);
}
int bit_check(int num,int pos)
{
num=num & (1<<(pos-1));
printf("after bitcheck %d\n",num);
}



bitwise_operater()
{
 printf("##################bitwise operator related programs################\n");
 printf("selest below option which kind of programs\n \
 1.bitset\n \
 2.bitclear\n \
 3.bittoggle\n \
 4.bitcheck\n");

  scanf("%d",&m);
  switch(m)
{

case 1:bitset();
     break;
case 2:bitclear();
     break;
case 3:bittoggle();
      break;
case 4:bitcheck();
     break;
default : printf("choose proper option");
     break;
}
}