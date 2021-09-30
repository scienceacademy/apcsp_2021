#include <stdio.h>
#include <cs50.h>

void pyramid(int h);

int main(void)
{
    int h = get_int("Height: ");
    pyramid(h);
}

/* The non-recursive version
void pyramid(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

// The recursive version
void pyramid(int h)
{
    if (h == 0)
    {
        return;
    }
    pyramid(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}