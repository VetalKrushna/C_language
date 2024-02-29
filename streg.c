
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100]; int i;
    printf("enter string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        
       else if(islower(s[i]))
            s[i]=toupper(s[i]);
        
       else if(isdigit(s[i])) 
            s[i]='?';
        
        else if(isspace(s[i]))
            s[i]='*';
    }
      printf("%s",s);
}