#include<stdio.h>
void main()
{
    float l,b,h,surfacearea,volume;
    printf("enter length,breadth,height");
    scanf("%f%f%f",&l,&b,&h);
    surfacearea=2*l*b+l*h+b*h;
    volume=l*b*h;
    printf("surfacearea of cuboid is-%f\n",surfacearea);
    printf("volume of cuboid is-%f\n",volume);

}