/*
Print the integers from 1 to 20 using a while loop and the counter variable x. 
Print only five integers per line. [Hint: Use the calculation x % 5.
When this is 0, print a newline character, otherwise print a tab character.]
*/

#include <stdio.h>
int main() 
{
    int x = 1;
    while (x <= 20) 
    {
        printf("%d", x);        
        if (x % 5 == 0) {
            printf("\n");
        }
        else 
        {
            printf("\t");
        }
        x++;
    }
    return 0;
}
/*
In this code:

The while loop runs as long as x is less than or equal to 20.
printf("%d", x); prints the current value of x.
The condition if (x % 5 == 0) checks if x is a multiple of 5. If true, it prints a newline character (\n), otherwise it prints a tab character (\t).
The counter variable x is incremented by 1 in each iteration.
This will produce the following output:

1	2	3	4	5
6	7	8	9	10
11	12	13	14	15
16	17	18	19	20

*/