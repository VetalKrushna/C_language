//o accept real number x and integer n and calculate 
//the sum of first n terms of the series x+ x/3!+ x/5!+ x/7!+… 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum,avg,ch,i;
    printf("enter  no:");
    scanf("%d",&n);
    do{
        printf("1-even or odd\n2-last digit \n3- \n4-exit");
        scanf("%d",&ch);
        switch(ch)
         {
            case 1:if(n%2==0)
                   printf("even\n");
                   else printf("odd\n");
                   break;
            case 2:
                    printf("last digit =%d",n%10);break;
            case 3:for(i=1;i<n;i++)
                   printf("%d",i);break;
           case 4:exit(0);
        }
    }while(ch!=4);
    
}