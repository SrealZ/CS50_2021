#include <stdio.h>

void meow(int n);

float discount(float orig_price, float cur_price);

int main (void){
    meow(3);
    float discount_rate = discount(100,95);
    printf("discount rate is %.2f \n",discount_rate);
}

void meow(int n){
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

float discount(float orig_price, float cur_price){
    return cur_price / orig_price ;
}

