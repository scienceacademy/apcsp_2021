#include <stdio.h>
#include <cs50.h>

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