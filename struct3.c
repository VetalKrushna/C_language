#include<stdio.h>
   struct stud
    {
        int rno;
        float per;
        char sname[20];
    } s1[100];
int main()
{
    int i,n;
    printf("How many student info you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter roll no and name and percentage:");
        scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
    } 
     printf("**First & Last Student**");
    printf("\nRoll no\t Name\t Percentage");
    printf("\n----------------------------"); 
    printf("\n%d\t %s\t %f",s1[0].rno,s1[0].sname,s1[0].per);
    printf("\n%d\t %s\t %f",s1[n-1].rno,s1[n-1].sname,s1[n-1].per);
}