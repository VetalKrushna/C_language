#include<stdio.h>
void main()
{
    float a,b,peri,area;
    printf("Enter inner radius,outer radius");
    scanf("%f%f",&a,&b);
    peri=2*3.14*a+b;
    area=3.14*a*a-b*b;
    printf("perimeter of ring is=%f\n",peri);
    printf("area of ring is =%f\n",area);
}