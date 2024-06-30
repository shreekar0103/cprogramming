/*8.	Reverse a Number
	•	Write a program to reverse the digits of a given number.*/
#include<stdio.h>
int main(){
    int n,r;
    int f = 0;
    printf("Enter a number :");
    scanf("%d",&n);
    if ( n == 0 ){
        printf("0");
        return 0;
    }
    while(n>0){
        r = n%10;
        if(f==0){
            if (r!=0){
                f=1;
            }
        }
        if(f==1){
            printf("%d",r);
        }
        n=n/10;

        /*
        
        z = z*10 + r  -- store reverse number
        */
    }   
    return 0;
}