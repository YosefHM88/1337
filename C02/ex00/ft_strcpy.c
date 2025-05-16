#include <unistd.h>

char *ft_strcpy(char *dest, char *src){ // dest is the length of the string and src is the string itself

        int i;
        i = 0; // from the start of the string 
        while( src[i]!='\0'){  // the end of the string
            *(dest+i) = *(src+i);// we copy the string from src to dest
            i++; 
        }
        dest[i] = '\0'; // the ending of the string equal the ending of the string which is '\0'
        return dest;



}