/*
Lab 3 – hands-on: (Bar-Chart Printing Program)

One interesting application of computers is drawing graphs and bar charts.
Write a program that reads five numbers (each between 1 and 30). 
For each number read, your program should print a line containing 
that number of adjacent asterisks. For example, if your
program reads the number seven, it should print *******.

*/

#include <stdio.h>
int main() {
    int numbers[10];
    // Read five numbers from the user
    printf("Enter five numbers (each between 1 and 30):\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &numbers[i]);
    }
    // Print a line of asterisks for each number
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < numbers[i]; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*

This program will prompt the user to enter five numbers, 
and for each number, it will print a corresponding line of asterisks.

*/