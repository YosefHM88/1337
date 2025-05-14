#include <unistd.h>

void ft_sort_int_tab(int *tab, int size){

  // declaration of variables
  int a;
  int b;
  int temp;

  // loop from the start of the array to the before ending 
  a = 0;
  while( a < size - 1){
  // loop b from the start + 1 to the ending of the array
  b = a + 1;
  while ( b <= size - 1){
    // if statement if tab[a] > tab[b] we swap them cause we want the smallest first
    if ( tab[a] > tab[b]){
     // we swap here
     temp = tab[a];
     tab[a]= tab[b];
     tab[b]= temp;

    }

    b++;
  }
    a++;
  }

