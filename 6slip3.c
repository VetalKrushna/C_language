//Write a ‘C’ program with menu to perform the following operations on a
//character.
//1. Check uppercase or lowercase
//2. Display its ASCII value
//3. Display its next and previous character
//4. Exit 
#include<stdio.h>
int main()
{
   
    char c ;printf("Enter a character:"); scanf("%c",&c);
    printf("\n 1-Check uppercase or lowercase\n 2-ASCII value\n 3-its next and previous character");
       printf(" \n 4-Exit \n enter choice:"); 
       scanf("%c",&c);
       switch(c)
       {
        case 1: if(c>='A' && c<='Z')
                   printf("Character is uppercase:%c",c);
                else printf("character is lowercase:%c",c); break;
        case 2:printf("ASCII value=%d",c);
           break;
           default :printf("invalid choice");
       }      
}