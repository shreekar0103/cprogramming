/*8. *Pascal's Triangle*
   
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1*/
   
   #include <stdio.h>
   int main (){
    int n ; 
    printf("enter a number :");
    scanf("%d", &n);
    for (int i =0; i<=n; i++){
        for(int space = 1 ; space <= n-i; space ++){
            printf(" ");

        }
    }


    return 0 ;
   }