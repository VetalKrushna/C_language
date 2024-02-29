#include<stdio.h>
int main()
{
    int r,a,c,v,ch;
    printf("enter radius :"); scanf("%d",&r);
     printf("\n 1-Area of circle \n 2- Circumference of circle \n 3-Volume of sphere \nEnter choice :");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1: a=3.14*r*r; printf("Area of circle=%d",a); break;
        case 2: c=2*3.14*r; printf("Circumference of circle=%d",c); break;
        case 3: v=4/3*3.14*r*r*r; printf("Volume of sphere =%d",v); break;
        default : printf("invalid choice");
     }
}