#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("enter date(DD/MM/YYYY):"); scanf("%d%d%d",&DD,&MM,&YYYY);
    if(YYYY>=1900 && YYYY<=3000)
     {   
       if(MM>=1 && MM<=12)
            {        
               if((DD>=1 && DD<=31) && (MM==1||MM==3||MM==5||MM==7||MM==8||MM==10||MM==12))
                  printf("Date is valid"); 
                else if((DD>=1 && DD<=30) && (MM==4||MM==6||MM==9||MM==11))  
                 printf("Date is valid");
                else if((DD>=1 && DD<=29) && (MM==2)&&(YYYY%4==0))
                  printf("Date is valid\n");
               else printf("invalid day\n"); 
            }
       else     printf("INValid month\n")  ;
     }
    else printf("invalid year\n");
}