#include <stdio.h>
#include <cs50.h>

// Gets two integers from the user
// and prints the sum
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}