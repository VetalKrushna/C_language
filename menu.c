#include<stdio.h>
int main()
{
    float l,s,b,h,a; int ch;
    printf("\n 1-Area of square \n 2-Area of rectangle \n 3-Area of triangle \n Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter length:");
               scanf("%f",&s);
               printf("Area of square=%f",a=s*s); break;
        case 2:printf("Enter length and breadth:");
               scanf("%f%f",&l,&b);
               printf("Area of rectangle=%f",a=l*b); break;
        case 3:printf("Enter base and height:"); 
               scanf("%f%f",&b,&h);
               printf("Area of triangle=%f",a=0.5*b*h); break;
    }

}