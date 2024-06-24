/*4.	Prime Number Check
	•	Write a program to check if a given number is prime.*/
    #include <stdio.h>
    int main (){
        int n ;
        int number = 0;
        printf("Enter a number : ");
        scanf("%d",&n);
        for (int i = 1 ; i<= n; i++){
            if (n%i==0){
                number++;
            }
        }
        if(number==2){
            printf("IT IS A PRIME NUMBER!!! ");
        }
        else {printf("IT NOT A PRIME NUMBER ");}
        return 0;    
    }