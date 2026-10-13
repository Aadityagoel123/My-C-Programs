#include<stdio.h>
int main()
{
    int x, y, sum, sub, mul, div, mod;

    printf("enter the integer");    
    scanf("%d %d", &x, &y);
    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    mod=x%y;

    printf("The sum is:%d",sum);
    printf("The sub is:%d",sub);
    printf("The mul is:%d",mul);
    printf("The sum is:%d",div);
    printf("The mod is:%d",mod);

   return 0; 
}