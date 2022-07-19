#include <stdio.h>
#include <stdlib.h>
#include "ramdoms.h"
#define count 10

int compareint1(const void*num1,const void*num2){
return *(int*)num1-*(int*)num2;

}
int compareint2(const void*num1,const void*num2){
return *(int*)num2-*(int*)num1;

}

int main(){

int (*myComparator) (const void*,const void*);
myComparator =&compareint2;

    int numbers[10];
    for (int i=0;i<count;i++){
        numbers[i]=randint(-100,100);
    }
    qsort(numbers,count,sizeof(numbers[0]),myComparator);
    for (int i=0;i<count;i++){
       printf("%d\n",numbers[i]);
    }
    return 0;
}