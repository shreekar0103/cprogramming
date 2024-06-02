/*
write different functions for 
- addition
- substraction
- multiplication
- division
- area of l and b
*/
#include <stdio.h>

int multiply(int a,int b){
    int result ; 
    result = a * b;
    return result;

}

   
int addition  (int a , int b ) {
    int result ;
    result = a  + b;
    return result;
}

int subtraction (int a , int b) {
     int result ;
     result = a - b ;
     return result ;
}    

float division (int a , int b ){
    float result;
    result  = (float) a / b;
    return result ;
}   



int main(){

    int a,b ;

    scanf("%d", &a);
    scanf("%d", &b);
    int c;
    float d;

    c = multiply(a,b);
    printf("multiply %d \n", c);

    c = addition(a,b);
    printf("addition %d \n", c);

    c = subtraction(a,b);
    printf("subtraction %d \n", c);

    d = division(a,b);
    printf("division %f \n", d);

    c = multiply(a,b);
    printf("multiply %d \n", c);

    return 0;
}