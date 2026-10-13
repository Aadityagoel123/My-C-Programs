#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
      printf("A\n  ");
      for(j=1; j<=5; j++)
       {
         printf("B\n");
       }
       for(k=1; k<=5; k++)
       {
         printf("C\n");
       }   
    }
    return 0;
}