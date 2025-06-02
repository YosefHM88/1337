char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    // start of the string dest
    i = 0;
    //end of the string
    while(  dest[i] != '\0')
    {
        i++;
    }
    // start of the string src
    j = 0;
    while ( src[j] != '\0' && nb > j) // to the end of the string and also nb should be bigger than j
    {
        dest[i+j]= src[j]; // copying src to dest
        j++;
    } 
    dest[i+j]= '\0'; // last character should be '\0'
    return dest; // returning dest



}