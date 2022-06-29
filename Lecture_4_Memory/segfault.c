#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[3];
    printf("s: ");
    // input long encough string will get you a segfault.
    scanf("%s",s);
    printf("s: %s\n",s);
}