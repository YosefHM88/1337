#include <unistd.h>

void ft_putchar(char c){

    write (1,&c,1);
}

//00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

void ft_print_comb2(void){

    //declaration of variable
 int first;
 int second;
 //loop 
 first = 0;
 while ( first <= 98){
   second = first + 1;
   while( second <= 99){
    //print the first number 
    ft_putchar( first / 10 + '0');
    ft_putchar( first % 10 + '0');
    //print the space
    ft_putchar(' ');
    //print the second number 
    ft_putchar( second / 10 + '0');
    ft_putchar( second % 10 + '0');
  
    //if the number is 99 or 98 stop the comma and space
    if ( first != 98 || second != 99){
        ft_putchar(',');
        ft_putchar (' ');
    }
    

    second++;
   }

    first++;
 }
 
  




}

