#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0; // okay so this is the start of the string
    while (s1[i]!='\0' && s2[i]!= '\0' ) // to the  end of the string
    {
        if (s1[i] > s2[i] || s1[i] < s2[i]) // if a character bigger than or smaller than the second character 
        { 
            return (s1[i] - s2[i]); // we return the character minus the second character 
        }
        i++;
    }
    return (s1[i] - s2[i]); // means if the second string is bigger than the first string we return their sum -
}