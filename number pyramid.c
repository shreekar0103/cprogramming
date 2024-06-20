#include <stdio.h>

/*

7. *Number Pyramid*
   
       1
      1 2
     1 2 3
    1 2 3 4
   1 2 3 4 5
*/
    int main (){
        int n ; 
        printf ("Enter a number : ");
        scanf("%d",&n);

        for (int l = 1 ; l<=n; l++){
            for (int space = 1 ; space<= n-l; space ++){
                printf (" ");

            }
            for (int digit = 1 ; digit <= l ; digit ++){
                    printf("%d ", digit );

            }
                printf("\n");
        }
                


        return 0 ; 
    }
