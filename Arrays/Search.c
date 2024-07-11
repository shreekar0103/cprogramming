//Write a function to search for an element in an array. The function should return the index of 
//the element if found, otherwise it should return -1.
#include <stdio.h>
int main (){
    int n,s;
    int True=0 ;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Numbers to store in array : ");
    for (int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search : ");
    scanf("%d",&s);
    for (int i=0;i<n;i++){
        if (arr[i]==s){
            True = 1;
            break ;
        }
    }
    if(True==0){
        printf("Element not fount: -1 ");
    }
    else{
        printf("Element found : \n");
        for (int i=0;i<n;i++){
            if (arr[i]==s ){
                printf("element is present at the location %d \n",i);
                break ;
            }
        }
    }
    return 0 ;
}