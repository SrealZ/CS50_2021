#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // open a file with append operation.
    FILE * file = fopen("phonebook.csv","a");
    char* name = "Sreal";
    char* number = "18999999999";
    // print content to file.
    fprintf(file,"%s,%s\n",name,number);
    // close file.
    fclose(file);
}