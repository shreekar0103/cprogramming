/*4. *Inverted Pyramid of Stars*
   
   *********
    *******
     *****
      ***
       *
*/
#include <stdio.h>

int main () {    
    int n ; 
    printf("enter a number : ");
    scanf("%d",&n);
    for (int l = 1 ; l <= n ; l++){
        /*
        for (int space = 1 ; space <=n-l ; space++)
        1 2 3 4 .. 

        4 3 2 1 .. 
        */
        for (int space = 1 ; space<=l-1 ; space++ ){
            printf (" ");
        }
        //printf("startcount %d\n", 2*(n-l)+1);
        for (int star = 1; star <= 2*(n-l)+1; star ++){
            printf("*");
        }

            printf("\n");
    }

    return 0;
}
