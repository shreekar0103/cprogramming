/*Write a program to find the Greatest Common Divisor (GCD) of two numbers.*/
#include <stdio.h>
int main (){
    int a,b,c, rem ;
    printf("Enter a number :");
    scanf("%d %d", &a, &b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }

    while (rem = b%a) {
        b=a;
        a=rem;
    }
    printf("%d",a);
    
    return 0;
}