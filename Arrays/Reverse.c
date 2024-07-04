//6.	Reversing an Array
//	•	Write a program to reverse the elements of an array.
#include <stdio.h>
int main (){
    int n,j,i ; 
    printf ("Enter size of the array ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements to print :");
    for ( i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (j=0;j<n;j++){
        arr[j]= arr[n-i];
        printf("%d", arr[j]);
    }
    
    return 0;
}