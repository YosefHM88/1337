// okay so strlcat this function means we copy the src into dest based on the size we got
// also we need to return in this function the size of the length of the strings

    //  we need first to use the function strlen to know the size of both the dest and src
    int ft_strlen(char *str)
    {
        int i;
        i = 0;
        while(str!='\0')
        {
            i++;
        }
        return i;
    }


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i; // for the string dest
    unsigned int j; // for the string src
    unsigned int len_dest; // for the length of the string dest
    unsigned int len_src; // for the length of the string src

    len_dest = ft_strlen(dest); // to know the size of the string dest
    len_src = ft_strlen(src); // to know the size of the string src


    // if the size equal or smaller than dest we don't copy anything but we return the length of the size + src
    if(len_dest >= size)
    {
        return (size + len_src);
    }

    // alright now we gonna start the string dest from the start to the end
    i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }

    // now the string src
    j = 0; // the start of the string

    // we gonna loop from the start of the string src to the end
    while(src[j] != '\0' && j < size - len_dest - 1 ) // and not forgetting size - dest - 1 ( 1 means '\0' ) and j should be smaller cause once it became equal we stop copying
    {
        dest[i+j] = src[j]; // means copying the exact character from src to dest

        j++; // add character by character
    }

    dest[i+j] = '\0'; // last character equal '\0'

    return (len_dest + len_src);
}
