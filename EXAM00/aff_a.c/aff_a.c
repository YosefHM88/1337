#include <unistd.h>



int main( int argc , char **argv){

  
// first if the string counters a
int i = 0;
if (argc == 2){

  while( argv[1][i]){

    if(argv[1][i]=='a'){
        write(1,"a",1);
        write(1,"\n",1);
        return 0;
         
    }
    i++;
    
  } 
  // second if the string didnt count a
write( 1, "\n", 1);
}
// third if there's only one argument
 else{
  write(1,"a",1);
  write(1,"\n",1);
 }



}