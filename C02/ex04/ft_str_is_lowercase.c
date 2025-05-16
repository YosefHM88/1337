#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;
    while( str[i] != '\0')
    {
        if ( str[i] >= 97 && str[i] <= 122){

        }
        else{
            return 0; // if doesnt have lowercases
        }

        i++;
    }

    return 1; // if it does have lowercases or its empty



}