/*
3. *Pyramid of Stars*
   
       *
      ***
     *****
    *******
   *********
*/
#include <stdio.h>

int main () {    
    int n ; 
    printf("enter a number : ");
    scanf("%d",&n);
    for (int l = 1 ; l <=n ; l ++){
        /*
        for (int space = 1 ; space <=n-l ; space++)
        1 2 3 4 .. 

        4 3 2 1 .. 
        */
        for (int space = n-l ; space>=1 ; space-- ){
            printf (" ");
        }
        for (int star = 1 ; star<=2*l-1 ; star ++){
            printf ("*");

        }

            printf("\n");
    }

    return 0;
}

/*

1 - 1
2 - 2 + 1
3 - 3 + 2
4 - 4 + 3
l - l + l-1
  = 2*l -1
*/