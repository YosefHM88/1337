#include <unistd.h>



int ft_str_is_alpha(char *str){
    int i;
    i = 0;
    while( str[i] != '\0' )
    {
    if ( (str[i] >= 97 && str[i] <= 122 ) || ( str[i] >= 65 && str[i] <= 90) ){
    }
    
    else{
        return 0; // if doesnt have alphabets in it
    }


        i++;
    }
    return 1; // if empty or have alphabets in it 


}