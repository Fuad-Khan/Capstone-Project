//program to accept the height of a person in centimeter and categorize the person according to their height
#include <stdio.h>

void main() {
  float ht;
  printf("Enter  the Height (in centimeters)\n");
  scanf("%f", & ht);
 /* using if we compare the heights */
  if (ht < 150)
    printf("This person is Short\n");
  else if ((ht >= 150) && (ht <= 165.0))
    printf("This person is Average Height\n");
  else if ((ht >= 165.0) && (ht <= 195.0))
    printf("This person is Taller\n");
  else
    printf("This person is of Abnormal height\n");
}