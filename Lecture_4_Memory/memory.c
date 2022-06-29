#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * p = malloc(3 * sizeof(int));
    if (p == NULL)
    {
        return 1;
    }
    // for valgrind memory bug detection.
    // p[1] = 72;
    // p[2] = 73;
    // p[3] = 33;

    // this is the right way to use this the alloced memory.
    p[0] = 72;
    p[1] = 73;
    p[2] = 33;
    
    // free the alloced memory after use.
    free(p);
    return 0;
}