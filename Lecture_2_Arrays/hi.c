#include <stdio.h>
#include <string.h>

int main(void)
{
    char hi[100] = "HI!";

    printf("%i %i %i %i \n", hi[0], hi[1], hi[2], hi[3]);

    printf("%s \n",hi);

    printf("length : %lu\n", strlen(hi));
}