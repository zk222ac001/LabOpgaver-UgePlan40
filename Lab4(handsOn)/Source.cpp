#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;

    printf("Enter integers (9999 to end): ");

    while (scanf_s("%d", &num) && num != 9999) {
        sum += num;
        count++;
    }

    if (count > 0)
    {
        printf("Average: %.2f\n", (float)sum / count);
    }
    else 
    {
        printf("No numbers entered.\n");
    }

    return 0;
}