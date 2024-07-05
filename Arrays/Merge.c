//•	Write a program to merge two arrays into a single array.
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter size of array 1 : ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter Numbers for arr: ");
    for (int i = 0;i<n1;i++){
        scanf("%d", &arr[i]);
    }
     printf("Enter size of array 2 : ");
    scanf("%d", &n2);
    int brr[n2];
    printf("Enter Numbers for brr: ");
    for (int i = 0;i<n2;i++){
        scanf("%d", &brr[i]);
    }
    int n = n1+n2 ;
    int crr[n];
    int j=0;
    for(int i=0;i<n1;i++){
        crr[j]=arr[i];
        j++ ;
    }
    for(int i=0;i<n2;i++){
        crr[j]=brr[i];
        j++ ;
    }
    for(int i=0;i<n1+n2;i++){
        printf("%d ",crr[i]);
    }
return 0;
}