#include <unistd.h>

void ft_rev_int_tab(int *tab, int size){

    // first variable for the start of the array 
    int a;
    // second variable for the ending of the array
    int b;
    // third variable to swap
    int temp;

    // start the loop from the start to the end
    a = 0;
    // and do the b for the ending
    b = size - 1;
    while ( a <= b){
        // swap the values for the array
     temp = tab[a];
     tab[a] = tab[b];
     tab[b] = temp;
     // add one by one for a and minus one by one for b
     a++;
     b--;
    }



}