/*7.	Sum of Digits
	•	Write a program to find the sum of the digits of a given number.*/
#include <stdio.h>
int main (){
    int a,r,sum=0;
    printf("Enter a number :");
    scanf("%d",&a);
    while(a>0){
        r=a%10;
            sum = sum +r;
            a=a/10;
            }
    printf("%d",sum);
    return 0;
}
