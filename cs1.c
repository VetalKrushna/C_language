#include<stdio.h>
 #include<stdlib.h>
int main()
{
    int a,b,c,ch;
    printf("Enter two nos:");
    scanf("%d%d",&a,&b);
    do
 {
    printf("\n 1-equal \n 2-less \n 3-Q and Rem \n 4-Range \n 5-swap \n Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:if(a==b)  printf("Nos are equal");
                      else
                       printf("Nos are not equal"); break;
    case 2:if(a<b) printf("\n less no=%d",a); 
                     else
                      printf("\n less no=%d",b); break;
    case 3:printf("Quotient=%d",a/b); 
           printf("Reminder=%d",a%b); break;
    case 4:if(a>b) printf("Range=%d",a-b);
                   else
                   printf("Range=%d",b-a); break;
    case 5:c=a;a=b;b=c;
           printf("\n first no =%d",a);
           printf("\n Second no =%d ",b);
           break;
    case 6:exit(0);
    default :printf("invalid"); 
    } 
  }while(ch!=6);
}