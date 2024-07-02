//•	Write a program to find the largest element in an array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers to find largest number : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int large_num = arr[0]; 
    for(int i=1 ; i<n; i++){
        if (arr[i]>large_num){
            large_num= arr[i];
        }
    }
    printf("Largest number is : %d \n", large_num);

    return 0;
}