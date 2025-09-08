#include <stdio.h>

int pair(int a) {
    int p;
    printf("Entrer un nombre : ");
    scanf("%d" , &a);
    if (a % 2 == 0) {
        p = 1;
    } else {
        p = 0;
    }
    if (p == 1) {
        printf("%d est pair." , a);
    } else {
        printf("%d est impair." , a);
    }
    return 1;
}


int main() {
    int num;
    pair(num);
    return 0;
}