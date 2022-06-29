#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 2;
    int b = 3;
    printf("a:%i, b:%i\n", a, b);
    swap(&a, &b);
    printf("a:%i, b:%i\n", a, b);
}
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}