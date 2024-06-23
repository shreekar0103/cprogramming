/*
read an array 
print an array

read a char array
print char array

print char array using %s

*/

/* #include <stdio.h>

int main() {

    int a[5] = {0,1,2,3,4}; 

    for (int i = 0 ; i < 5 ; i++ ){

        printf("%d ", a[i]);
    }
    return 0;
} */

//factorial of the number 
#include <stdio.h>

int main()
{

    
    int n ; 
    printf ("enter aa number ");
    scanf ("%d", &n);
    int fact  = 1;
    
    for (int i=1; i<=n; i++){
        
        fact  = fact * i ;
    }

    printf("Your fractorial value is : %d ", fact);
    return 0;
}