// for the Class of Life

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "mainstart.h" // header file, contains all declerations

int Life::varminus(){ // all the random minuses up to 20

    //srand(time(NULL)); 

    return (rand() % 20 + 1) * (-1); 
}

int Life::varplus(){ // all the random pluses, up to 20

    //srand(time(NULL));

    return (rand() % 20 + 1);   
}