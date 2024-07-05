//6.	Reversing an Array
//	•	Write a program to reverse the elements of an array.
#include <stdio.h>
void reverseArray(int *arr, int n ){
    int swap;
    for(int i = 0; i<n/2;i++){
        swap = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=swap;
    }
}

/*
function - set of instructions execute
parameters - inputs for instructions 
return_type - output

int getSum(int* arr, int n) {}

int return_value;
return_value = getSum(arr, n)
*/
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
    //5 4 3 2 1   we have just change the half values for odd so we are using i<n/2 
    //1 2 3 4
    //4 3 2 1

    for (int i=0;i<n;i++){
        brr[i]= arr[n-i-1];
        printf("%d ", brr[i]);
    }
    printf("\nReverse Array Function with extra array\n");
    reverseArray(arr,n);

    // print array

    for(int i = 0 ; i < n ; i++){ 
        printf("%d ", arr[i]);
    }  
    return 0;
}