/*13. *Hollow Pyramid*
    
       *
      * *
     *   *
    *     *
   *********
   */
  #include <stdio.h>
   int main (){
    int n ; 
    int odd =0;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i = 1 ; i<= n-1; i ++){
        for (int space = 1; space <= n-i; space ++){
            printf(" ");
        }
        printf("*");
        
        for(int z= 1; z<= odd; z++){
            printf(" ");    
        }
            if(i != 1 ){
                printf("*");
            }
            odd = odd + (i==1 ? 1 : 2);           
            printf("\n");           
    }
    for(int s = 1; s<=2*n-1 ; s++){
            printf("*");
        }
    return 0;
   }