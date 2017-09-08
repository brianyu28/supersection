// shows calcualting a max with ternary operator

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int max = x > y ? x : y;
    printf("maximum is %i\n", max);
}
