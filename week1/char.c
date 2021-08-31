#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    char c = get_char("Type a char: ");
    if (c >= 'A' && c <= 'Z')
    {
        printf("lower: %c\n", c + 32);
    }
    printf("%i\n", c);
    printf("Next: %c\n", c + 1);
    
    
    
    
}