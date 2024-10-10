/*
Calculating the Sum of Even Integers) Write a program C langauge that
calculates and prints the sum of the even integers from 2 to 30.
*/

#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 2; i <= 30; i += 2) 
    {
        sum += i;
    }
    printf("The sum of even integers from 2 to 30 is: %d\n", sum);
    return 0;
}