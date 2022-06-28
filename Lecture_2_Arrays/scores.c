#include <stdio.h>

int main(void)
{
    int total_scores = 3;
    int scores[total_scores];
    for (int i = 0; i < total_scores; i++)
    {
        scores[i] = 99;
    }

    printf("average score is %f \n", (scores[0] + scores[1] + scores[2]) / (float)total_scores);
}