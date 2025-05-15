#include <unistd.h>

int main(int argc , char **argv){
int i;
// start of the argument
i = 0;
if (argc > 1){

    while( argv[1][i]){
        write(1,&argv[1][i], 1);
        i++;
    }
    write(1,"\n",1);


}


else if( argc == 1){
    write(1,"\n",1);
}


}