// gets number of digits
    // bug #1: need to change while to a do/while
    // bug #2: need to change to absolute value (maybe with ternary, or stdlib's abs)

#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Number: ");
    int digits = 0;

    while (n > 0)
    {
        digits++;
        n /= 10;
    }

    printf("Number of digits: %i\n", digits);
}
