/*
2. *Inverted Right-Angled Triangle of Stars*
   
   *****
   ****
   ***
   **
   *
*/

#include <stdio.h>
int main(){
    int nLines ;
    printf("Enter a number:");
    scanf("%d", &nLines );


    for (int lineNum = nLines ; lineNum >= 1 ; lineNum--) {

        for (int count = lineNum; count >= 1 ; count--) {
            printf("*");
        }
        printf("\n");
    }


    for (int lineNum = 1 ; lineNum <= nLines; lineNum++) {

        /*
        1 - 5+1 -1 
        2 - 5+1 -2 
        ....

        lineNum -  (nLines+1 - lineNum)
        
         */
        for (int count = nLines-lineNum+1; count >= 1; count--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}