#include <stdio.h>

int compareson(int a , int b) {
    printf("Entrer le 1er nombre : ");
    scanf("%d" , &a);
    printf("Entrer le 2eme nombre : ");
    scanf("%d" , &b);
    if (a > b) {
        printf("%d > %d" , a , b);
    }else if (a < b) {
        printf("%d < %d" , a , b);
    } else {
        printf("%d = %d" , a , b);
    }
    return 1;
}

int main() {
    int num1 , num2;
    compareson(num1 , num2);
    return 0;
}