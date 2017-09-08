// for loop with no condition
//  can then break out of it
//  or continue
// can also try a for loop with no increment step; or no initialization
// compare to a while loop

#include <stdio.h>

int main(void)
{
    for (int i = 0; ; i++)
    {
        printf("%i\n", i);
    }
}
