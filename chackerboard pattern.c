/* 10. *Checkerboard Pattern*
    
    * * * * *
     * * * * *
    * * * * *
     * * * * *
    * * * * * */ 
   #include <stdio.h>
   int main (){
    int n ; 
    printf("Enter a number :");
    scanf("%d", &n);
    for (int x= 1 ; x<= n; x++){
        for(int y =1 ; y<= n; y++){
            if(x%2!=0)
            {printf("* ");}
            else {printf(" *");}
        }
        printf("\n");
    }


    return 0;
   }
    