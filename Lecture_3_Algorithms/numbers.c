#include <stdio.h>

int main(void)
{
    int num[] = {3,2,1,5,6,8,0};
    for (int i = 0; i < 7; i++)
    {
        if (num[i] == -1)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}