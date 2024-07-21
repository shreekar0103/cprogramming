/*1.	Rotate an Array
	•	Problem: Rotate an array of size n by k positions to the right.
	•	Example: For array [1, 2, 3, 4, 5, 6, 7] and k = 3, the rotated array is [5, 6, 7, 1, 2, 3, 4]. */
#include <stdio.h>
int main (){
    int n = 5;
    int brr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&brr[i]);
    for(int i=0;i<n;i++)
    printf("%d ",brr[i]);
    return 0;
}