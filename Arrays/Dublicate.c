// •	Write a program to remove duplicate elements from an array.
#include <stdio.h>
int main(){
    int n;
    int i = 0, j=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers : ");
    for (int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while(j<n){
        arr[i]=arr[j];
        while(j<n && arr[i]==arr[j]){
            j++ ;
        }
        i++ ;
    }
    for (int z=0;z<i;z++){
        printf("%d ",arr[z]);
    }
return 0;
}