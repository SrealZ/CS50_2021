#include <stdio.h>
#include <string.h>

#define string char *

int main(void)
{
    // pointer
    int a = 50;
    int *p = &a;
    printf("%i\n", a);
    printf("%i\n", *p);
    printf("%c\n", *p);
    printf("%p\n", &a);
    printf("%p\n", p);

    // string equals char *
    string s = "HI!";
    printf("%s\n", s);
    int len = strlen(s);
    for (int i = 0; i < len + 1; i++)
    {
        printf("%p\t%c\n", (s + i), *(s + i));
    }
    // segmentation fault
    // printf("%c\n",*(s + 1000000000));

    // array equals to *
    printf("array is also an address of the first element\n");
    int b[6] = {5, 4, 3, 2, 1};
    printf("%p\n", b);

    for (int i = 0; i < 6; i++)
    {
        printf("%p %i\t", (b + i), *(b + i));
    }
    printf("\n");
}