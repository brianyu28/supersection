// demos floating point imprecision, use 0.1, 2.8

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float n = get_float("number: ");

    printf("%f\n", n);
    printf("%.8f\n", n);
    printf("%.30f\n", n);
}
