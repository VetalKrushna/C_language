#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf(" + - * / type any one operator:");
    scanf("%s",&ch);
     printf(" Enter two nos:");
    scanf("%d%d",&a,&b);
         switch(ch)
        {
            case '+':c=a+b;
             printf("\n addtion=%d",c);      break;
              case '-':c=a-b;
             printf("\n substraction=%d",c); break;
              case '*':c=a*b;
             printf("\n multiply=%d",c);     break;
              case '/':c=a/b;
             printf("\n division=%d",c);     break;
             default:printf("Invalid choice.");
        }
}