//	•	Write a program to calculate and print the average of the elements in an array.

#include <stdio.h>
int main (){
    int sum = 0;
    int n, X;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers to add :");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i= 0 ; i<n; i++){
        sum = sum +arr[i];        
    }
    X= sum/2;
    printf("Average is = %d \n", X );  
    return 0;
}