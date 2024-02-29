/*Write a ‘C’ program to perform the following operations on a character 
till user selects Exit. 
1. Display its ASCII value 
2. Check if it is vowel 
3. Check if it is uppercase 
4. Display its next 5 characters 
5. Exit 
*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int c,i;
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    do{
        printf("\n1=ASCII value\n2=vowel or not\n3=uppercase or not\n4=next 5 characters\n5=exit\n\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("\nASCII value=%d\n\n",ch);
                   break;
            case 2:if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'
                             ||ch=='O'||ch=='u'||ch=='U')
                   printf("\nvowel\n\n");
                   else
                   printf("\nnot vowel\n\n");
                   break;
            case 3:if(ch>='A' && ch<='Z')
                   printf("\ncharacter is uppercase\n\n");
                   else
                   printf("\ncharacter is not uppercase\n\n");
                   break;
            case 4:printf("\nnext 5 character\n\n");
                   for(i=1;i<=5;i++)
                   {
                    printf("%c\t",ch++);
                   }
                   break;
            case 5:exit(0);
        }
    }while(ch!=5);

}