#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y')
    {
        priintf("Agreed.\n");
    }
    else if (c == 'n')
    {
        priintf("Not agreed.\n");
    }
}





#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree?");
    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        priintf("Not agreed.\n");
    }
    else if (c == 'N')
{
    printf("Not agreed.\n");
}
}





#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == "N")
    {

    }
}