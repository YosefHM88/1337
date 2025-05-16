#include <unistd.h>
// dest is length and src is string and n is the number we typed 
char *ft_strncpy(char *dest, char *src, unsigned int n){

    unsigned int i;
    i = 0;
    while(  src[i] != '\0' && i < n ) // 2 things the ending of the string and the number n that ends in n - 1
    {
        dest[i] = src[i]; // copying the string based on the numbers giving
        i++;
    }

    while(  i < n) // if the number is bigger than the string itself
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}