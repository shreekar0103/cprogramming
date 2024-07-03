// •	Write a program to sort an array of integers in ascending order.
#include <stdio.h>
int main(){
    int n, swap, i;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers : ");
    for ( i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for ( i=0; i< n ; i++){
        for(int j=i+1; j<n;j++){
            if (arr[i]>arr[j]){
                swap = arr[i];
                arr[i]=arr[j];
                arr[j]=swap ; 
            } 
    }
    printf("%d ",arr[i]);
}

return  0;
}