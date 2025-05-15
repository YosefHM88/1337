#include <unistd.h>

int main( int argc ,char **argv){
 int i = 0;
//scan for z
 if ( argc == 2){
 while ( argv[1][i]){
    if(argv[1][i]=='z'){
        write(1,"z\n",2);
        return 0;// to stop
    }
    i++;
 }
 // if we didnt found z in the string but we still have an argument
 write(1,"z\n",2);
 }
// if we have only one argument which is ./a.out then print z
 else {
    write ( 1 , "z\n",2);
 }

}