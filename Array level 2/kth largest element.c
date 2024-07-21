/*2.	Find the Kth Largest Element
	•	Problem: Find the k-th largest element in an unsorted array.*/
#include <stdio.h>
int main (){
     int n,k=0;
     int swap=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers to store in array : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i< n ; i++){
        for(int j=i+1; j<n;j++){
            if (arr[i]>arr[j]){
                swap = arr[i];
                arr[i]=arr[j];
                arr[j]=swap ; 
            } 
        }
    }
    printf("Enter k value ");
    scanf("%d",&k);
    k=arr[n-k];
    printf("%d",k);
    return 0;
}