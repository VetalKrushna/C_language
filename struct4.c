#include<stdio.h>
   struct Emp
    {
        int eno;
        float sal;
        char ename[20];
    } e1[100];
int main()
{
    int i,n,s=0;
    printf("How many Employee info you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Eno , Ename and salar:");
        scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
    } 
     printf("**Sum of salary**");
    printf("\n-----------------\n");     
    for(i=0;i<n;i++)
     s=s+e1[i].sal;
     printf("Rs:%d/-",s);

}