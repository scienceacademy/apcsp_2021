#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }
    // sort numbers
    for (int i = 0; i < n - 1; i++)
    {
        bool swaps = false;
        for (int j = 0; j < n - 1 - i; j ++)
        {
            if(values[j] > values[j + 1])
            {
                swaps = true;
                int temp = values[j];
                values[j] = values[j+1];
                values[j + 1] = temp;
            }
        }
        if (!swaps)
        {
            break
        }
    }


    //print the values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}