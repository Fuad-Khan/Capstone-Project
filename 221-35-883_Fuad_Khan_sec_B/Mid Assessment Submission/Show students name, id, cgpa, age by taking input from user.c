#include <stdio.h>
struct student {
    char name[50];
    int id,age;
    float cgpa;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter ID number: ");
    scanf("%d", &s.id);
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);
    printf("enter age: ");
    scanf("%f", &s.age);

    printf("Displaying Information:\n");
    printf("Name:%s", s.name);
    printf("ID number: %d\n", s.id);
    printf("CGPA: %.1f\n", s.cgpa);
    printf("Age: %.1f\n", s.age);

    return 0;
}