#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];
    people[0].name = "Xander";
    people[0].number = "818-323-2345";

    people[1].name = "Nick";
    people[1].number = "818-384-5935";

    people[2].name = "Mary";
    people[2].number = "818-948-1234";


    string search = get_string("name: ");
    for (int i=0; i<3; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}


typedef struct
{
    int red;
    int green;
    int blue;
}
color;

typedef struct
{
    long number;
    string expiration;
    int cvv;
}
creditcard;