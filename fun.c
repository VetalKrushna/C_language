// call by reference
#include<stdio.h>
int main()
{
    int  swap(int *a,int *b); // *== pointer
    int a,b;
    printf("a,b :"); scanf("%d%d",&a,&b);
    printf("\n before swap a=%d",a);  // a=25
    printf("\n before swap b=%d",b);  //b=10
    swap(&a,&b);     // &==address
    printf("\n after swap a=%d",a); //a=10
    printf("\n after swap b=%d",b); //b=25
   
}
   int swap(int *a, int *b){
   int t=*a;*a=*b;*b=t;
    printf("\n swap a=%d",*a);  //a=10
    printf("\n swap b=%d",*b);  //b=25
    


}