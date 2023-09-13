
extern int x;                             //extern keyword

int prime(int n)
{
int i,count=0;                      //local variables
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("prime\n");
else
printf("not prime\n");
return n;
}

