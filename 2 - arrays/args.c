#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Invalid command\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
}