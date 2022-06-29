#include <stdio.h>
#include <string.h>


int main(void)
{
    char* s = "HI!";
    char* t = "hi!";
    printf("%s \n",t + 1);
    // the following code will cause bus error.
    // because the s and t are in a sepcial area of memory that data not allowed to be modified.
    // t[0] = 'H';
    // t[1] = 'I';
 

    printf("%p %s\n",s,s);
    printf("%p %s\n",t,t);

    // when comparing strings,  use strcmp(a,b),  don't just directly compare the s and t,  
    // they are essentially char * pointer.
    if (strcmp(s,t) == 0)
    {
        printf("Same\n");
    }else{
        printf("Different\n");
    }
    
}