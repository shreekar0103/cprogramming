/*8.	Reverse a Number
	•	Write a program to reverse the digits of a given number.
*/
#include <stdio.h>
int main (){
    int n ; 
    int a = 0,b=1, c ;
    printf("Enter a number : ");
    scanf("%d", &n );
    if(n>=1){
        printf("0 ");
    }
    if (n>=2){
        printf("1 ");
    }

    for (int i = 3 ; i<=n;i++){
        c= a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;

}