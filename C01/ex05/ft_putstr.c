#include <unistd.h>

void ft_putstr(char *str){

   // declaration of the variable
   int i;
  // to start the loop 
  i = 0;
  // to loop from the start to the end of the string which is '\0'
   while( str [i] != '\0' ){
   
    // print one character at the time  cause we loop one by one
    write(1, &str[i], 1);
    i++;
   }

}

