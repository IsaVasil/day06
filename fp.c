#include <stdio.h>
double sum(double num1,double num2){
    return num1+num2;
}
double sub(double num1,double num2){
    return num1+num2;
}
double mult(double num1,double num2){
    return num1*num2;
}
double div(double num1,double num2){
    return num1/num2;
}
int main(){
    double(*calcFunc[4])(double,double)= {sum,sub,mult,div};
    //calcFunc=sum;
    int num;
     scanf("%d",&num);
     printf("%.2lf\n",calcFunc[num](5.1,3));
   // printf("%.2lf\n",calcFunc[0](5.1,3));
     //calcFunc=sub;
    //printf("%.2lf\n",calcFunc[1](5.1,3));
    // calcFunc=mult;
    //printf("%.2lf\n",calcFunc[2](5.1,3));
     //calcFunc=div;
    //printf("%.2lf\n",calcFunc[3](5.1,3));
    return 0;
}