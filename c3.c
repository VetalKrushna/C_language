#include<stdio.h>
int main()
{
    float u,v,s,a,t;
    printf("enter initial velocity");
    scanf("%f",&u);
     printf("enter acceleration");
    scanf("%f",&a);
     printf("enter time");
    scanf("%f",&t);
    v=u+a*t;
    s=u+a*t*t;
    printf("final velocity is =%f\n",v);
    printf("distance travelled is=%f\n",s);
}

// Write a ‘C’ program to accept a character and check if it is uppercase or lowercase


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