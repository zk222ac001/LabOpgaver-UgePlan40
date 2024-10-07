// Simple C program that calculates the sum of integers from 1 to 10 
// using a while loop:

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("The sum of integers from 1 to 10 is: %d\n", sum);
    return 0;
}
