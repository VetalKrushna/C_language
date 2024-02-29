//Write a ‘C’ program to accept three dimensions length (l), breadth(b)
//and height(h) of cuboid and print surface area (surface area=2(lb+lh+bh)
#include<stdio.h>
int main()
{
    int l,b,h,area;
    printf("Enter length , breadth  , height :");
    scanf("%d%d%d",&l,&b,&h);
    area=2*l*b+l*h+b*h;
    printf("surface area of cuboid=%d",area);
}