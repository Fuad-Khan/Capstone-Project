// read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include <stdio.h>
int main()
{
    int a;

    // input age
    printf("Enter the age of the person: ");
    scanf("%d", &a);

    // check voting eligibility
    if (a >= 18)
    {
        printf("\nEigibal for voting");
    }
    else
    {
        printf("\nNot eligibal for voting\n");
    }

    return 0;
}