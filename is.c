#include<stdio.h>
int main()
{
    int x;

    printf("enter the number you want to check:");
    scanf("%d", &x);

    if(x>0)
    {
        printf("the x = %d is a positive number", x);
    }
    else is ( x == 0 )
    {
        printf("the x = %d entered number is zero", x);
    }
    else
    {
        printf("the x = %d is a negative number", x);
    }
    return 0;


}