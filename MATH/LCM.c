/*•	Write a program to find the Least Common Multiple (LCM) of two numbers.*/
#include <stdio.h>
int main (){
    // declare variables
    int a,b, k = 2 ;
    int ans = 1;

    // reading variables 
    printf("Enter a number : ");
    scanf("%d %d", &a, &b);
    // 90 17
    while (a!=1 || b!=1){
        printf("%d %d\n", a , b);
        if(a%k==0 && b%k==0){
            a=a/k;
            b=b/k;
            ans = ans*k;
        } else if(a%k==0 && b%k!=0){
            // 47 17
            a= a/k;
            ans = ans*k;
        } else if (b%k==0 && a%k!=0){
            b=b/k;
            ans = ans*k;
        } else if (a%k!=0 && b%k!=0){
            ans = ans*a*b;
            break;
        } 
        //printf("%d\n", ans );
    }
    printf("%d\n", ans );

    return 0 ;
}