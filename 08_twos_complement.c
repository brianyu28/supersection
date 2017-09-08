#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("number: ");
    printf("number was: %i\n", x);
    x = ~x + 1;
    printf("two's complement is: %i\n", x);
}
