#include<stdio.h>
int main()
{
    struct stud
    {
        int rno;
        float per;
        char sname[20];
    } s1[100];

    int i,n;
    printf("How many student info you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter roll no and name and percentage:\n");
        scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
    } 
     printf("\nStudent Greater than 70 percentage:");
    printf("\nRoll no\t Name\t Percentage");
    printf("\n----------------------------"); 
    for(i=0;i<n;i++)
    {
        if(s1[i].per>=70)
        printf("\n%d\t %s\t %2.2f",s1[i].rno,s1[i].sname,s1[i].per);
    } 
}