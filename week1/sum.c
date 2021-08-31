#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        int n = get_int("Integer: ");
        sum += n;
        // Combined in one line:
        // sum += get_int("Integer: ");
    }
    printf("Sum: %i\n", sum);
}