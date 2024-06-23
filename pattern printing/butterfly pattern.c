/*14. *Butterfly Pattern*
    
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    */
#include <stdio.h>

void printPyramid(int n){
    for (int l = 1 ; l <=n ; l++){
        /*
        for (int space = 1 ; space <=n-l ; space++)
        1 2 3 4 .. 

        4 3 2 1 .. 
        */
        for (int space = n-l ; space>=1 ; space-- ){
            printf ("*");
        }
        for (int star = 1 ; star<=2*l-1 ; star ++){
            printf (" ");

        }
        for (int space = n-l ; space>=1 ; space-- ){
            printf ("*");
        }
            printf("\n");
    }
}
void printinvPyramid(int n){
     for (int l = 1 ; l <= n ; l++){
        /*
        for (int space = 1 ; space <=n-l ; space++)
        1 2 3 4 .. 

        4 3 2 1 .. 
        */
        for (int space = 1 ; space<=l-1 ; space++ ){
            printf ("*");
        }
        //printf("startcount %d\n", 2*(n-l)+1);
        for (int star = 1; star <= 2*(n-l)+1; star ++){
            printf(" ");
        }
        for (int space = 1 ; space<=l-1 ; space++ ){
            printf ("*");
        }
        printf("\n");
    }

}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        for(int j=1 ; j<=i;j++){
            printf("*");
        }
        for (int space = 2*i ; space< 2*n; space++ ){
            printf (" ");
        }
        for(int j=1 ; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=n; i>=1 ; i--){
        if (i==n){ continue; }
        for(int j=1 ; j<=i;j++){
            printf("*"); }
        for (int j = 0; j<2*(n-i); j++){
            printf(" ");
        }
        for(int j=1 ; j<=i;j++){
            printf("*"); }
        printf("\n");
    }
    printf("\n");


    printf("METHOD 2\n");
    printinvPyramid(n);
    for(int i = 0 ; i < 2*n-1 ; i++) printf("*"); 
    printf("\n");
    printPyramid(n);


    return 0;
}