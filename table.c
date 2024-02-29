#include<stdio.h>
int main()
{
  int i,n,m=0;
  printf("\t\t\t\t10 to 20 Table\n\n");
  for(n=1;n<=10;n++) 
  {
    for(i=10;i<=20;i++)
    {
      m=n*i;
      printf("%d\t",m);
    }
    printf("\n");
  }
}
