#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nb)
{

    // alright first we start with the smallest number 
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return ;
    }

    // okay now with negative numbers to avoid any issues

    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }

    // now with numbers bigger than 10
    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }

    // and if number is between 1 and 9

    else
    {
        ft_putchar(nb + '0');
    }




}

