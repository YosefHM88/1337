#include <unistd.h>


int main(int argc , char **argv)
{
    int i; // for the string argv
    int repeat; // for repeating

    i = 0; // the start of the string or the argument


    if(argc == 2) // this line means the first argument 
    {
        while(argv[1][i]) // to the end of the argument
        {

            if(argv[1][i] >= 'a' && argv[1][i] <= 'z') // this line means if we found a lowercase alphabet
            {
                repeat = argv[1][i] - 'a' + 1 ; // this line right here means we do minus a to give us how many letters left then plus one to repeat it one more time
            }
            else if(argv[1][i] >='A' && argv[1][i] <= 'Z') // this line here means if we found an uppercase alphabet
            {
                repeat = argv[1][i] - 'A' + 1;
            }
            else 
            {
                repeat = 1; // to repeat non alphabets just one time  
            }

            while(repeat > 0) 
            {
                write(1,&argv[1][i],1); // write the argument while repeating the letters
                repeat --; // loop to the end  of the number, for example if we have 5 we start from 5,4,3,2,1 to the end of 0
            }


            i++; // add character by character
        }

        write(1,"\n",1); // if there's no argument just a newline as requested


    }









}