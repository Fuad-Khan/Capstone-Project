//add first seven terms of the following series using a for loop:
//1/1! + 2/2! + 3/3! + .............
#include <stdio.h>
#include <math.h>

int main()
{
    int i, fact = 1, a;
    float sum = 0;
    for (i = 1; i <= 7; i++)
    {
        for (a = i; a > 0; a--)
        {
            fact = fact * a; //for finding factorial of i
        }
        printf("factorial of %d is %d\n", i, fact);
        sum = sum + (float)i / fact;
        fact = 1;
    }
    printf("\nsum of series ;(1/1!+2/2!+3/3!+4/4!+.......) up to seven term =%f\n", sum);
    return 0;
}