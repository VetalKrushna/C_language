#include<stdio.h>
int main()
{
    char ch; int a,b,n;
    printf("\n1-Equality\n2-less than\n3-Q&R\n4-Range\n5-swap");
    printf("\nEnter choice:");
    scanf("%c",&ch);
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
    case 1:if(a==b)printf("Equal"); else printf("not equal");break;
    case 2:if(a<b)printf("a is less than b");break;
    case 3:printf("Quotient=%d",a/b);
           printf("Reminder=%d",a%b);break;
    case 4:printf("Enter no:");scanf("%d",&n);
         if(n>=a && n<=b)
         printf("in range");
         else printf("out of range");break;
    case 5:a=a+b;b=a-b;a=a-b;
           printf("\n%d",a);
           printf("\n%d",b);break;
   
    
    default:printf("invalid choice");
        break;
    }
}