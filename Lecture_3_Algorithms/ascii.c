#include <stdio.h>

int main(void)
{
    int cnt = 128;
    for (int i = 0; i < cnt; i++)
    {
        printf("%i:%c\t",i,i);
    }
    printf("\n");
}