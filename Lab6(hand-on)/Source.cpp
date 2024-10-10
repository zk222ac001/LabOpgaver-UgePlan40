/*
(Calculating the Product of Odd Integers) 
Write a program that calculates and prints the product of the 
odd integers from 1 to 15.
*/

#include <stdio.h>
int main() {
    int product = 1;
    for (int i = 1; i <= 15; i += 2)
    {
        product *= i;
        printf("%d = %d * %d\n" , product, product ,i);
    }
    printf("Product of the odd integers from 1 to 15: %d\n", product);
    return 0;
}