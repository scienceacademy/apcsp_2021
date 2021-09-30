#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int factorial(int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./factorial <num>");
        return 1;
    }
    printf("%i\n", factorial(atoi(argv[1])));
}

int factorial(int n)
{
    // Your *recursive* code here
}
// check50 scienceacademy/problems/2021ap/factorial