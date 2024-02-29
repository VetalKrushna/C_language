#include<stdio.h>
int main()
{
    struct emp
    {
        int eno;
        float sal;
        char ename[20];
    } e1;

    printf("Enter eno ,ename  ,salary:");
    scanf("%d%s%f",&e1.eno,&e1.ename,&e1.sal);
    printf("eno=%d name=%s salary=%f",e1.eno,e1.ename,e1.sal);
    
}