#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
unsigned int i;
i = 0; // the start of the 2 strings
while( ( s1[i]!= '\0' || s2[i]!= '\0' )&& n > i   ) // the end of either the 2 strings
{
    if(   s1[i] != s2[i]) // if the characters are not matchable
    {
        return (s1[i] - s2[i]); // we return their difference
    }
    i++; // increment one by one
}
return 0; // we return 0 here means they are identical

}