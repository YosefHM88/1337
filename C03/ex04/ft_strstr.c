char *ft_strstr(char *str, char *to_find)
{


    int i; // for the str
    int j; // for the to_find
    if (*to_find == '\0')//if the string to find is empty
    {
        return str;
    }

    i = 0; // start the string str
    while( str[i] != '\0') // to the end  of the string str
    {
        j = 0; // inside the loop we loop through the to_find to look up for the string str
        while( to_find[j]!='\0' && str[i+j] == to_find[j])
        {
            j++;
        }

        if (to_find[j]=='\0')
        {
            return (&str[i]);
        }

        i++;
    }



    return 0; // if nothing found
}