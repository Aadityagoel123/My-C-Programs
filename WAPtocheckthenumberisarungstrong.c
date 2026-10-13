#include<stdio.h>
#include<math.h>
int main()
{
    int n, counter=0, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int n1=n;
    while(n1 != 0)
    {
        n1 /= 10;
        counter++;
    }
    
    while(temp != 0)
    {
        rem = temp % 10;
        sum += round(pow(rem, counter));
        temp /= 10;
    }
    
    if(sum == n)
        printf("%d is a strong number.", n);
    else
        printf("%d is not a strong number.", n);

    return 0;
}