// •	Declare an array of integers with size 10.
/* #include <stdio.h>
int main () {
    int arr[10];
    printf("%d", arr);
    return 0;
} */

//•	Initialize an array with the first 5 prime numbers.
#include <stdio.h>

// write a function which takes array as parameter and returns array filled with prime numbers

// return_type function_name ( parameters ) {  code  }

// arr [][][][][]
// arr [0][1][2][3][4]
// address - pointer


// declare and array of size 5
int isPrime(int p){

    int is_prime = 1;
    for(int i = 2; i < 100 ; i++){
        if (i != p && p%i == 0 ) {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int* fillPrimes(int* arr, int n) {

    printf("%d\n", &n); // copy

    // n - pass by value 
    // arr - pass by reference/address
    int p = 2;

    for(int i = 0; i < n ; i++ ){

        while( isPrime(p) == 0){
            p++;
        }
        arr[i] = p; 
        p++;
    }
}

int main () {
    int arr[5] = {-1,2,33,5,27};

    for(int i = 0 ; i<5 ; i++){
        printf("%d \n", *(arr+i) );
    }

    int n = 5; 

    printf("%d\n", &n);
    fillPrimes(arr, n);

    for(int i = 0 ; i<5 ; i++){
        printf("%d \n", *(arr+i) );
    }


    
    return 0;
}