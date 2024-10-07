
// (Mortgage Calculator) Develop a C program to calculate the interest
// accrued on a bank customer’s mortgage
#include <stdio.h>
#include <math.h>

int main() {
    double mortgageAmount, interestRate, totalInterest,
           totalAmountPayable, monthlyPayment;

    int mortgageTerm, months;

    // Enter the mortgage amount: 200000
    printf("Enter the mortgage amount: ");
    scanf_s("%lf", &mortgageAmount);

    //Enter the mortgage term(in years) : 30
    printf("Enter the mortgage term (in years): ");
    scanf_s("%d", &mortgageTerm);

    //Enter the annual interest rate(as a decimal) : 0.05
    // 5% interest rate 5/100 = 0.05
    printf("Enter the annual interest rate (as a decimal): ");
    scanf_s("%lf", &interestRate);

    // Calculate total interest payable
    totalInterest = mortgageAmount * interestRate * mortgageTerm;

    // Calculate total amount payable
    totalAmountPayable = mortgageAmount + totalInterest;

    // Calculate the number of months in the mortgage term
    months = mortgageTerm * 12;

    // Calculate the required monthly payment
    monthlyPayment = totalAmountPayable / months;

    // Round off the monthly payment to the nearest dollar
    monthlyPayment = round(monthlyPayment);

    // Display the required monthly payment
    printf("The required monthly payment is: $%.0f\n", monthlyPayment);

    return 0;
}