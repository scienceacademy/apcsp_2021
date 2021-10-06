#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        // rand() % range + start
        int x = rand() % 6 + 1;
        // a random float between 0 and 1
        float y = (float) rand() / (float) RAND_MAX;
        printf("%i\n", x);
    }
}