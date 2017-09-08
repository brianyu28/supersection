// gets last digit, and second  to last digit

#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("number: ");
    printf("Last digit is %i\n", n % 10);

    n /= 10;
    printf("Second to last digit is %i\n", n  % 10);
}
