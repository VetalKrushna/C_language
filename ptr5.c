#include<stdio.h>
int main()
{
    __int16 a[]={10,20,30,40,50},*p,*p1;
    p=a;
    p1=&a[1];
    printf("value of a[0]=%d",*p);
    printf("\nvalue of a[1]=%d",a[1]);
    printf("\naddress of a[0]=%u",p);
    printf("\naddress of a[1]=%u",p1);
    printf("\ndifference =%u",p1-p);
}