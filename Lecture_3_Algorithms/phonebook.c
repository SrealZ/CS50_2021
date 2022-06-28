#include <stdio.h>
#include <string.h>

// better design
typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{
    person people[] = {{"Arson", "13111111111"}, {"Bob", "13222222222"}, {"Charlie", "13333333333"}};
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, "Bob") == 0)
        {
            printf("Found %s : %s\n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}