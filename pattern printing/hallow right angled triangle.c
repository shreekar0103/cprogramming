/*
12. *Hollow Right-Angled Triangle*
    
    *
    **
    * *
    *  *
    ***** */
   #include <stdio.h>
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i= 1 ; i<=n; i++){
        for (int space = 1; space<=n ; space++ ){
            if (i==n || space==1 || i==space){
                printf("*");
            } else {printf(" ");}
        }
            printf("\n");
        }


    return 0;
}