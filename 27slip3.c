/* Write a ‘C’ program to perform the following operations on an integer till 
user chooses EXIT. 
1. Check if it is even or odd. 
2. Display its last digit 
3. Display all positive numbers below the number 
4. EXIT 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ch,i;
    printf("enter no:");
    scanf("%d",&n);
    do
     {
        printf("\n1=even or odd\n2=last digit\n3=all positive numbers below the number\n4=exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:if(n%2==0)
                    printf("\nno is even\n\n");
                    else
                    printf("\nno is odd\n\n");
                    break;
            case 2:printf("\nlast digit=%d\n\n",n%10);
                    break;
            case 3:for(i=0;i<=n;i++)
                   {
                    printf("%d\t",i);
                   }
                   break;
            case 4:exit(0);
        }
     }while(ch!=4);
}