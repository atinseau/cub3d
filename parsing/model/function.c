#include "../parsing.h"

int has_letter(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(ft_isalpha(str[i]))
            return (1);
        i++;
    }
    return (0);
}