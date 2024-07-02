//•	Write a program to find the smallest element in an array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers to find smallest num : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int small_num = arr[0]; 
    for(int i=1 ; i<n; i++){
        if (arr[i]<small_num){
            small_num= arr[i];
        }
    }
    printf("smallest number is :%d \n", small_num);

    return 0;
}