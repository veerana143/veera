#include<stdio.h>
int main()
{
  int m, n;
  printf("Enter the number of rows and columns ");
  scanf("%d %d", &m, &n);
  int  array[m][n], find, count=0;
  //printf("Enter the number of rows and columns ");
  //scanf("%d %d", &m, &n);
  printf("Enter elements " );
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }
  printf("Enter the find  element ");
  scanf("%d", &find);
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(array[i][j] == find)
      {
         printf("element find this position at  [%d %d]",i,j); 
          count++;
      }
      
    }
  }
  if(count==0)
    printf(" Not find");

}
