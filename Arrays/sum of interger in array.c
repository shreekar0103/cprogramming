//	•	Modify the program to find and print the sum of all elements in the array.
#include <stdio.h>
int main (){
    int sum = 0;
    int n ;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers to add :");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i= 0 ; i<n; i++){
        sum = sum +arr[i];        
    }
    printf("%d \n", sum );  
    return 0;
}