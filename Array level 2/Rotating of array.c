/*1.	Rotate an Array
	•	Problem: Rotate an array of size n by k positions to the right.
	•	Example: For array [1, 2, 3, 4, 5, 6, 7] and k = 3, the rotated array is [5, 6, 7, 1, 2, 3, 4]. */
#include <stdio.h>
int main (){
     int n,k,j = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n], brr[n]; 
    printf("Enter Numbers to store in array : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter k value ");
    scanf("%d",&k);
    for(int i=n-k;i<=n-1;i++){
        brr[j]=arr[i];
        j++ ;
    }
    for(int i=0;i<=n-k-1;i++){
        brr[j]=arr[i];
        j++ ;
    }
    for(int i=0;i<n;i++)
    printf("%d ",brr[i]);
    return 0;
}