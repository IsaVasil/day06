#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ramdoms.h"

int main (){
    srand(time(NULL));
    for(int i=0; i<10;i++){
printf("%f\n",randreal(-50,6));
    }
    printf("%c\n",randint('a','z'));
    return 0;
}
