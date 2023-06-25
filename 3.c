#include <stdio.h>

int main() {
    char name[50];
    float basicSalary, increment, newSalary;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 5000) {
        increment = 0.05 * basicSalary;
    } else if (basicSalary >= 5000 && basicSalary < 10000) {
        increment = 0.10 * basicSalary;
    } else {
        increment = 0.15 * basicSalary;
    }

    newSalary = basicSalary + increment;

    printf("\nEmployee Name: %s\n", name);
    printf("New Salary: %.2f\n", newSalary);

    return 0;
}
