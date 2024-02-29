

//Write a ‘C’ program to calculate area and perimeter of a rectangle. a=l*w,,p=l+w*2
#include<stdio.h>
int main()
{
    int l,w,area,peri;
    printf("Enter length and width : ");
    scanf("%d%d",&l,&w);
    area=l*w;
    peri=l*l+w*w;
    printf("\n area of rectangle=%d",area);
    printf("\n Perimeter of rectangle %d",peri);
    
}