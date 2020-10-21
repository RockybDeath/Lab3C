#include <stdio.h>

const int arr1[] = {1,2,3};
const int arr2[] = {4,5,6};
int scalar(const int arr1[], const int arr2[], size_t count){
    size_t i;
    int scalar = 0;
    for (i = 0; i < count; i++){
        scalar+=arr1[i]*arr2[i];
    }
    return scalar;
}
int is_prime(unsigned long n){
    unsigned long i;
    if(n > 1){
        for(i = 2; i*i <= n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
    else return 0;
}
int main(void){
    unsigned long number = 0; 
    printf("The scalar is: %d\n", scalar(arr1, arr2, sizeof(arr1)/sizeof(int)));
    scanf("%lu",&number);
    printf("The entered number is primary: %s\n", is_prime(number) ? "true" : "false");
    return 0;
}
