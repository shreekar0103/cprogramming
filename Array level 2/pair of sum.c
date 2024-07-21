/*3.	Find all Pairs with a Given Sum
	•	Problem: Find all pairs of elements in an array whose sum is equal to a given number.
	•	Example: For array [1, 2, 3, 4, 5, 6, 7] and sum 9, the pairs are (2, 7) and (3, 6) and (4, 5).*/
#include <stdio.h>
int main (){
     int n,k=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers to store in array : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter k value ");
    scanf("%d",&k);
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==k){
                printf("%d,%d \n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}