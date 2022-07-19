#include <stdio.h>
#include <stdlib.h>
#include "ramdoms.h"
#define count 10

int comparient1(const void*num1,const void*num2){
return *(double*)num1-*(double*)num2;

}
int compareint2(const void*num1,const void*num2){
return *(double*)num2-*(double*)num1;

}

int main(){
    int num;
     scanf("%d",&num);
int(*calcFUnction[2])(const void*,const void*)= {comparient1,compareint2};
//int (*myComparator) (const void*,const void*);
//myComparator =&compareint2;

    int numbers[10];
    for (int i=0;i<count;i++){
        numbers[i]=randint(-100,100);
    }
    qsort(numbers,count,sizeof(numbers[0]),calcFUnction[num]);
    for (int i=0;i<count;i++){
       printf("%d\n",numbers[i]);
    }
    return 0;
}