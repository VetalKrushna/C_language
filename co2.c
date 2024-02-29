#include<stdio.h>
int main()
{
   int m;
   printf("Enter month:");
   scanf("%d",&m);
          if(m==1)   printf("Jan");
     else if(m==2)   printf("Feb");
     else if(m==3)   printf("Mar");
     else if(m==4)   printf("April");
     else if(m==5)   printf("May");
     else if(m==6)   printf("june"); 
     else if(m==7)   printf("July");  
     else if(m==8)   printf("aug"); 
     else if(m==9)   printf("sept"); 
     else if(m==10)  printf("oct"); 
     else if(m==11)  printf("nov"); 
     else if(m==12)  printf("dec"); 
        else         printf("invalid Month");
}