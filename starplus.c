// enter odd number 

#include <stdio.h>

int main()
{
    int n; 
    printf ("Enter  a number :");
    scanf("%d",&n);

    for(int i = 1 ; i<= n; i ++){
        for(int j= 1 ; j<= n; j++){
            int a = n/2+ 1 ;
            // we have use n/2+1 becz whenever we input any odd no it will print star
            if(j==a || i == a  ) printf("*");
            else printf (" ");

        }
        printf("\n");



        
    }
    
    

    return 0;
}