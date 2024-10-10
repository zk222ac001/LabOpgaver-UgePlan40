
// Program Lab1(b)
//  Print the value 333.546372 in a field width of 15 characters 
// with precisions of 1, 2, 3, 4 //and 5.// Left - align the output.What are the five values that print ?#include <stdio.h>

int main() {
    double value = 333.546372;

    printf("%-15.1f\n", value);
    printf("%-15.2f\n", value);
    printf("%-15.3f\n", value);
    printf("%-15.4f\n", value);
    printf("%-15.5f\n", value);

    return 0;
}/*  Output  333.5
  333.55
  333.546
  333.5464
  333.54637*//*The format specifier %-15.5f is used in programming, 
particularly in languages like C, C++, and Python, 
to format floating-point numbers. Here’s a breakdown of what each part means:

%: Indicates the start of the format specifier.
-: Left-aligns the output within the specified field width.
15: Specifies the minimum field width. The output will be at least 15 characters wide.
.5: Specifies the precision. The number will be rounded to 5 decimal places.
f: Indicates that the number is a floating-point number.
So, %-15.5f will format a floating-point number to be left-aligned within a 15-character wide field, with 5 digits after the decimal point. For example, if you have the number 123.456789, it would be formatted as 123.45679        (with spaces to make up the 15-character width).*/