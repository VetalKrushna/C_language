#include<stdio.h>
void main()
{
    int w,t,f,o;
    printf("enter amount for withdral");
    scanf("%d",&w);
    t=w/10;
     printf("total no of 10 rupees notes= %d\n",t);
    w=w%10;
    f=w/5;
     printf("total no of 5 rupees notes=%d\n",f); 
    w=w%5;
    o=w/1;  
    printf("total no of 1 rupees notes= %d\n",o);
}