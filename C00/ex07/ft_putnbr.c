#include <unistd.h>

void ft_putchar (char c){
  write(1, &c, 1);
}

void ft_putnbr(int nb){

  // we start with the first number which is the minimum number in an int
  if ( nb == -2147483648){
    ft_putchar('-');
    ft_putchar('2');//we put 2 here as a trick for the program to print this number then print the rest
    ft_putnbr(147483648);//we didnt put putchar here cause it's multiple numbers
  }
  //we start with negative numbers to avoid issues with the program
  if ( nb < 0){ 
    ft_putchar('-');
    nb = -nb;
    ft_putnbr(nb);
  }
  else if(nb> 9){
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else{
    ft_putchar(nb+'0');
  }
}
