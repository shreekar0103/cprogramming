//•	Write a program to find the remainder when one integer is divided by another (modulo operation).
#include <stdio.h>
int main(){
    int x, y,z ; 
    printf("Enter two numbers : ");
    scanf ("%d",&x);
    scanf ("%d", &y);
    if (y==0){
        printf("IT IS NOT A VALID NUMBER ");
    }
   else {
   z = x%y;
     printf("%d", z );
   }
    
    return 0 ; 
}