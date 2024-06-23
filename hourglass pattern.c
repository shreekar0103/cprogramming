/*15. *Hourglass Pattern*
    
    *********
     *******
      *****
       ***
        *
       ***
      *****
     *******
    *********
    */

  #include <stdio.h>
   int main (){
    int n ; 
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i= 1 ; i<=n; i++){
        for(int space= 1; space<= i-1 ; space ++){
            printf(" ");
        }
        for (int star = 1; star<= 2*(n-i)+1; star ++){
            printf("*");
        }
        printf("\n");
    }
    for (int l = 1 ; l <=n ; l++){
        
        if (l==1) {
            continue;
        }
        for (int space = n-l ; space>=1 ; space-- ){
            printf (" ");
        }
        for (int star = 1 ; star<=2*l-1 ; star ++){
           
                printf("*");
        }

            printf("\n");
    }

    return 0;
}
    
