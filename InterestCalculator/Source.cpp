#include <stdio.h>
int main() {
    double principal, rate, interest;
    int days;

    // Sentinel value to end the loop
    int sentinel = -1;

    // Input the first principal amount such as 1000 , 2000
    printf("Enter loan principal amount (-1 to end): ");
    scanf_s("%lf", &principal);

    // Loop until the sentinel value is entered
    while (principal != sentinel) {
        // Input the interest rate (0.05 , 0.04)
        printf("Enter annual interest rate (as a decimal): ");
        scanf_s("%lf", &rate);

        // // Input the days such as 60 days or 30 days
        printf("Enter loan period in days: ");
        scanf_s("%d", &days);

        // Calculate the simple interest
        interest = principal * rate * days / 365;

        // Display the simple interest
        printf("The simple interest is: $%.2f\n\n", interest);

        // Input the next principal amount such as 3000 0r 4000
        printf("Enter loan principal amount (-1 to end): ");
        scanf_s("%lf", &principal);
    }

    printf("Program ended.\n");

    return 0;
}

