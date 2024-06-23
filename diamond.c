
/*5. *Diamond Pattern*
   
       *
      ***
     *****
    *******
   *********
    *******
     *****
      ***
       * 
 */

#include<stdio.h>

int printPyramid(int n) {

    for (int l = 1 ; l <= n; l++){
            for (int space = 1 ; space <= n-l; space++){
                printf(" ");
            }
            for (int star = 1 ; star<=2*l-1; star ++){
                printf("*");
            }
            
            printf("\n");
    }
}

int printInvPyramid(int n) {

    for(int z = 1; z<= n; z++){
            for (int s = 1; s <= z; s ++){
                printf(" ");
            }
            for(int r= 1 ; r<=2*(n-z)+1; r ++){
                printf("*");

            }
            printf("\n");
        }

}

int main (){
        int n ; 
        printf ("Enter a number : ");
        scanf("%d",&n);
        printPyramid(n);
        printInvPyramid(n-1);
        return 0 ; 
    }
// modularization 
