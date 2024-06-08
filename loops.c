/*
for loop 
while loop 
do while loop

break
continue
*/

// for loop 
#include <stdio.h>

int main (){
//interator or counter 
/*for(int i = 10 ; i>=1 ; i = i-1){
    printf("%d \n", i);
} */


// sum of first n natural numbers 
int n ;
    printf("enter your number :");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1 ; i<=n ; i++){
        sum = sum + i;
    }
    printf ("sum is %d", sum );
   /*/ while (i <= n )

    {
        printf("%d \n", i);
        i++;
    }
    */
return 0 ;
}