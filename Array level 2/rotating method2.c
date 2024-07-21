/*1.	Rotate an Array
	•	Problem: Rotate an array of size n by k positions to the right.
	•	Example: For array [1, 2, 3, 4, 5, 6, 7] and k = 3, the rotated array is [5, 6, 7, 1, 2, 3, 4]. */
#include <stdio.h>
void rotatingarray(int *arr,  int n, int k){
    int temp=0;
     while(k>0){
        temp = arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        k-- ;
    }
}
int main (){
     int n,k;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n] ;
    printf("Enter Numbers to store in array : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter k value ");
    scanf("%d",&k);
    rotatingarray(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]); }
    return 0 ;
}