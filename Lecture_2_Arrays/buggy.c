#include <stdio.h>

int get_negative_int(void);

int main(void){
        int ret = get_negative_int();
        printf("%i \n",ret);
}

int get_negative_int(void){
    return -100;
}