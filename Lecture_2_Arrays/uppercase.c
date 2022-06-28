#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = 100;
    char s[100] = "abcdEFgh";
    printf("Before: %s\n",s);

    for (int i = 0; i < len; i++)
    {
        if ( s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        
    }
    
    printf("After: %s\n",s);
}