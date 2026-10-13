#include<stdio.h>
int main()
{
    int x, y, temp=0
    printf("enter the value of x and y");
    scanf("%d %d" ,&x,&y);
    printf("the value x is %d and value of y is %d, before swapping",x,y);
    temp=x
    x=y
    y=temp
    printf("after swaping the value of x is %d and value y is %d", x,y);
    return 0;
}