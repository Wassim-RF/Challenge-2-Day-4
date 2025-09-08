#include <stdio.h>

int sum(int a , int b) {
    printf("Entrer le 1er nombre : ");
    scanf("%d" , &a);
    printf("Entrer le 2eme nombre : ");
    scanf("%d" , &b);

    printf("%d + %d = %d" , a , b , a + b);
    return 1;
}

int main() {
    int num1 , num2;
    sum(num1 , num2);
    return 0;
}