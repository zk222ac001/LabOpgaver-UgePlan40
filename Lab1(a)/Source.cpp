
#include <stdio.h>
int main() {

    // Program # 1(a) :

    // Sum the odd integers between 1 and 99 using a for statement.
    // Use the integer variables sum and count

    int sum = 0;
    int count;

    // Use a for loop to iterate through odd numbers from 1 to 99
    for (count = 1; count < 100; count += 2) {
        sum += count;
    }

    // Print the result
    printf("The sum of odd integers between 1 and 99 is: %d\n", sum);

    return 0;
}