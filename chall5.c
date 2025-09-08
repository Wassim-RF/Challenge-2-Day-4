#include <stdio.h>

long long int factorial(int num) {
    int i ;
    int fact = 1 ;
    printf("Enter a number : ");
    scanf("%d" , &num);
    for (i = 1 ; i <= num - 1 ; i++) {
        fact *= i ;
    }
    long long int factorielle = num * fact;
    printf("The factorial of your number is %lld\n " , factorial);
    return factorielle;
}

int main() {
    int num;
    factorial(num);
    return 0;
}