/*Write a program to declare a structure person (name, address) which 
contains another structure birthdate (day, month, year). Accept the details 
of n persons and display them. 
*/
#include<stdio.h>
int main()
{
    struct person
    {
        char name[20],addr[20];
         struct birthdate
         {
            int dd,mm,yy;
         }b;
    } p1[100];

    int i,n;
    printf("How many person info you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter   name and Address:\n");
        scanf("%s%s",&p1[i].name,&p1[i].addr);
        printf("\nEnter  Birthdate:\n");
        scanf("%d%d%d",&p1[i].b.dd,&p1[i].b.mm,&p1[i].b.yy);
    } 
    printf("\nName\t Address\tBirthdate");
    printf("\n-------------------------"); 
    for(i=0;i<n;i++)
    {
        printf("\n%s\t %s\t %d-%d-%d",p1[i].name,p1[i].addr,p1[i].b.dd,p1[i].b.mm,p1[i].b.yy);
    } 
}