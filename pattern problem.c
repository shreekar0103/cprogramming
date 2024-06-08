/*
1. *Right-Angled Triangle of Stars*
   
   *
   **
   ***
   ****
   *****
   
*/

#include <stdio.h>
int main(){
    int nLines ;
    printf("Enter a number:");
    scanf("%d", &nLines );


    for (int lineNum = 1 ; lineNum <= nLines; lineNum++) {

        for (int count = 1; count<=lineNum; count++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}