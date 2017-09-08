// shows calculating a max with conditions

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    printf("maximum is %i\n", max);
}
