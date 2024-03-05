
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2;
    char ch,s[50];
    printf("Enter file name:");
    scanf("%s",&s);
    f1=fopen(s,"r");
    f2=fopen("f2.txt","w");
    if(f1==NULL)
    {
        printf("File does not exist !");
        exit(0);

    }
    while(!feof(f1))
    {
        ch=fgetc(f1);

        if(islower(ch))
           {
            toupper(ch);
            printf("%s",ch);
            fputc(ch,f2);
           }
        else if(isupper(ch))
           {
            tolower(ch);
            printf("%s",ch);
            fputc(ch,f2);
           }
    }
    fclose(f1);
    fclose(f2);

}