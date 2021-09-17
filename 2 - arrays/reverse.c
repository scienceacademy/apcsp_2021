#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Word: ");
    int length = strlen(s);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}