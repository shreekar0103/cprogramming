/*3.	Factorial Calculation
	•	Write a program to calculate the factorial of a given number using a loop.*/
    #include <stdio.h>
    int main (){
        int n, z=1 ;
        printf("Enter a number :");
        scanf("%d", &n);
        
        for (int i= 1; i<=n;i++ ){
            z=z*i;
        }
        printf("factorial is %d", z);
        return 0;
    }