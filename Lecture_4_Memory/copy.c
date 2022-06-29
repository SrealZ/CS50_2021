#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define string char *

int main(void)
{
    char s[10] = {'A', 'b'};
    // t and s are pointed to the same memory address, as a result the have the same content.
    string t = s;
    if (strlen(s) > 0)
    {
        t[0] = tolower(t[0]);
    }

    printf("pointer s and t pointed to the same memory address, so they have the same content.\n");
    printf("%s\n", s);
    printf("%s\n", t);

    // copy data of a string
    char *c = malloc(strlen(s) + 1);
    if (c == NULL)
    {
        return 1;
    }

    strcpy(c, s);
    printf("content of malloced and copied c:%s\n", c);

    // print pointer s and t each address
    printf("print pointer s, t and c self address\n");
    printf("%p\n", &s);
    printf("%p\n", &t);
    printf("%p\n", &c);

    // print pointer s and t pointed to
    printf("print pointer s, t and c pointed to\n");
    printf("%p\n", s);
    printf("%p\n", t);
    printf("%p\n", c);

    free(c);
    return 0;
}