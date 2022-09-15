#include<Stdio.h>
int main()
{
    int C, D, temp;
     printf("Enter the value of C: ");
     scanf("%d", &C);

     printf("Enter the value of D: ");
     scanf("%d", &D);

    temp=C;
	C=D;
	D=temp;

     printf("\n The value of C: %d", C);
     printf("\n The value of D: %d", D);
     return 0;
}