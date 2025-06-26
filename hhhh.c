#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Assume 'a' is the largest
    largest = a;

    // Compare with 'b' and 'c'
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
