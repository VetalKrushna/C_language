//i. Write a ‘C’ program to check whether the given year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4==0)
     printf("Leap Year=%d",year);
     else
     printf("%d=Not Leap Year",year);
}