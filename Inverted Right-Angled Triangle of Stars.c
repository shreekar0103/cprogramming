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

    return 0;
}