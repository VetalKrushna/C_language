#include<stdio.h>
int circle(float r)
{
    float a, p;
    a=3.14*r*r;p=2*3.14*r;
    return a, p;
}
int main()
{
    float a,p,r;
    printf("enter radius:");
    scanf("%f",&r);
    a=circle(r);
     printf("area %f",a);
     printf("perimmeter %f",circle(r));
}