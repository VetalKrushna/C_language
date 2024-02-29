#include<stdio.h>
int show(int*s,int*c,int*n)
{
    *s=*n* *n;
    *c=*n* *n* *n;
}
int main()
{
    __int16 *n,s,c;
    printf("Enter no");
    scanf("%d",&n);
     show(&s,&c,&n);
      printf("%d,%d",s,c);
}