#include<stdio.h>
int main()
{
    int even=0, odd=0;
    for(int i = 11; i<=50; i++)
    {
    if(i % 2 == 0)
        { 
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers is: %d\n", even);
    printf("Odd numbers is: %d\n", odd);
    return 0;
}