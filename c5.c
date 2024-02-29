#include<stdio.h>
int main()
{
     int x,y;
     printf("Enter coordinate of x axis:");
     scanf("%d",&x);
     printf("Enter coordinate of y axis:");
     scanf("%d",&y);
           if(x>=0 && y>=0)   printf("Coordinate lies in I qudrant");
      else if(x<=0 && y>=0)   printf("Coordinate lies in II qudrant"); 
      else if(x<=0 && y<=0)   printf("Coordinate lies in III qudrant");
      else if(x>=0 && y<=0)   printf("Coordinate lies in IV qudrant");
}