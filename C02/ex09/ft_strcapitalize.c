#include <unistd.h>


// I still have an issue understanding this exercice

char *ft_strcapitalize(char *str)
{
    // first switch all the letters in to lowercase 
    int i;
    int index;

    i = 0;
    while( str[i] != '\0')
    {
        if ( str[i]>= 65 && str[i] <= 90)
        {
            str[i]= str[i] + 32;
        }

        i++;



    }

    // switch to only first letters to uppercase and not if we have a comma or space

    index = 1;
    i = 0;

    while ( str[i] != '\0')
    {
        if ( str[i] >= 97 && str[i]<= 122 && index == 1)
        {
            str[i] = str[i] - 32;
            index = 0; // the index becomes 0 after we capitalize
        }

        else if ( !(str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i]<= 90 || str[i] >= '0' && str[i]<= '9')){
            index = 1; // the index becomes 1 to look for other words 
        }
        else
    {
        index = 0;  // in the middle of the word
    }
        i++;

    }
    



    return str;




}