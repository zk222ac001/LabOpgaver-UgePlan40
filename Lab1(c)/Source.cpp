/*
Calculate the value of 2.5 raised to the power of 3 using the pow function.
Print the result with a precision of 2 in a field width of 10 positions. 
What is the value that prints?
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    double result = pow(2.5, 3);
    printf("%10.2f\n", result);
    return 0;
}

/*
In this code:

pow(2.5, 3) calculates (2.5^3).

printf("%10.2f\n", result); prints the result with a precision of 2 
decimal places in a field width of 10 positions.

The value that prints is 15.63, right-aligned in a field width of 10 positions.
*/