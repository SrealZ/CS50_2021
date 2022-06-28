#include <stdio.h>
#include <string.h>

int main(void)
{
    char* names[] = {"Bill","Charlie","Phile","Sreal","Walson"};
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i],"Sreal") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}