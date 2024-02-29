/*Accept two numbers and perform the following operations till the user
selects Exit. 
i. Maximum 
ii. Display all numbers between the two 
iii. Sum and average 
iv. EXIT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ch,i;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    do{
        printf("1=maximum\n2=no between the two \n3=sum & avg\n4=exit\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(a>b)
                   printf("     a is max\n\n");
                   else 
                   printf("     b is max\n\n");
                   break;
            case 2:for(i=a;i<=b;i++){
                   printf("     %d\n",i);}
                   break;
            case 3:printf("     sum=%d\n\n",a+b);
                   printf("     average=%d\n\n",(a+b)/100);
                   break;
            case 4:exit(0);
        }
    }while(ch!=4);
}