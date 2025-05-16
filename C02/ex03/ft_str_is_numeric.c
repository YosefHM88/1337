#include <unistd.h>

int ft_str_is_numeric(char *str)
{

    int i;
    i = 0;
    while( str[i] !='\0')
    {
        if( str[i]>= '0' && str[i]<= '9'){}

        else{
            return 0; // if doesnt have digits in it
        }


        i++;
    }
    return 1; // if its empty or have digits in it





}