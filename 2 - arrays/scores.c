#include <stdio.h>
#include <cs50.h>

// function prototype
float average(int length, int array[]);

// number of scores to use
const int NUM_SCORES = 4;

int main(void)
{
    // declare an array of the given size
    int scores[NUM_SCORES];
    // fill the array with integers
    for (int i = 0; i < NUM_SCORES; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(NUM_SCORES, scores));
}

// calculate the average of a given array of ints
float average(int length, int array[])
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;

}