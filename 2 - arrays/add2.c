#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Wrong number of arguments.\n");
        return 1;
    }

    printf("%i\n", atoi(argv[1]) + atoi(argv[2]));
}