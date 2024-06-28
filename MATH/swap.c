/*
a, b 

a + b - a

a + b - b 

a = 3, b = 4 

    3 + 4
a = a + b
    3 + 4 - 4
b = a - b
    3 + 4 - 3 
a = a - b

a = 4 b = 3
*/
#include <stdio.h>
int main (){
    int a,b;
    printf("Enter a number :");
    scanf("%d %d", &a, &b);
    a = a+b;
    b=a-b;
    a=a-b;
    printf ("%d %d",a,b);
    return 0 ;
}