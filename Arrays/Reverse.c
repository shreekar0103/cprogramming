//6.	Reversing an Array
//	•	Write a program to reverse the elements of an array.
#include <stdio.h>
int main (){
    int n; 
    printf ("Enter size of the array ");
    scanf("%d", &n);
    int arr[n];
    int brr [n];
    printf("Enter elements to print :");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++){
        brr[i]= arr[n-i-1];
        printf("%d ", brr[i]);
    }
     
    
    return 0;
}