#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Assume num1 as the largest and smallest initially
    largest = num1;
    smallest = num1;

    // Compare with num2
    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    // Compare with num3
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
