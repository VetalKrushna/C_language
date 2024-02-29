/*n line of pattern 
1
2 3
4 5 6*/
#include<stdio.h>
int main()
{
    int i,j,k=1,n;
    printf("enter limit:"); scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k++);
        }printf("\n\n");
    }
}