#include <unistd.h>

// we want to copy src into dest then return dest

char *ft_strcat(char *dest, char *src)
{
    int i; // for the dest string 
    int j; // for the src string

    i = 0; // the start of the dest string
    while( dest[i] != '\0') // to the end of the dest string
    {
        i++;
    }

    j = 0 ; // the start of the src string
    while( src[j] != '\0') // the end of the src string
    {
        dest[i+j] = src[j]; // add src into dest
        j++;
    }

    dest[i+j]='\0'; // make the last of character  of the string is \0
    return dest; // return dest 
}