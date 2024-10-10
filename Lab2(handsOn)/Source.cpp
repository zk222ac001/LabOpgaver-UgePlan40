/*
Lab 2 – hands-on: Write for statements that print the following 
                  sequences of values:

a) 1, 2, 3, 4, 5, 6, 7
b) 3, 8, 13, 18, 23
c) 20, 14, 8, 2, –4, –10
d) 19, 27, 35, 43, 51

*/

#include <stdio.h>

// Function Prototype

void Print1t7();
void Print3to23();
void Print20toMinus10();
void Print19to51();

int main() {
    
    // Print a) 1, 2, 3, 4, 5, 6, 7
    Print1t7();
    // Print b) 3, 8, 13, 18, 23
    Print3to23();
    // Print c) 20, 14, 8, 2, –4, –10
    Print20toMinus10();
    // Print d) 19, 27, 35, 43, 51 
    Print19to51();

    return 0;
}
// Function declaration : Actual function implementation 
void Print1t7() {

    for (int i = 1; i <= 7; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");
}

void Print3to23() {

    for (int i = 3; i <= 23; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
}

void Print20toMinus10() {

    for (int i = 20; i >= -10; i -= 6) {
        printf("%d ", i);
    }
    printf("\n");
}
void Print19to51() {

    for (int i = 19; i <= 51; i += 8) {
        printf("%d ", i);
    }
    printf("\n");
}


