
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        goto Vote;
    }
    else
    {
        goto Novote;
    }

Vote:
    printf("You are eligible to vote\n");
    goto End;

Novote:
    printf("You are not eligible to vote\n");

End:
    return 0;
}
