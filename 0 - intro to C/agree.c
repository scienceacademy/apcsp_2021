#include <stdio.h>
#include <cs50.h>

// Demonstration of *conditional statements*
int main(void)
{
    char choice = get_char("Do you agree? ");
    if (choice == 'y' || choice == 'Y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not agreed.\n");
    }
}