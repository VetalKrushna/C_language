#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
     if(ch>'A' && ch<'Z')
     printf("Character is uppercase");
     else if (ch>'a' && ch<'z')
        printf("Character is lowercase");

}