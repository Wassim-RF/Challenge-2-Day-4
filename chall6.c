#include <stdio.h>

long long int febochine(int num) {
    int s , i ;
    int a = 0; 
    int b = 1;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &num);
    for (i = 0 ; i < num ; i++) {
        s = a + b;
        a = b;
        b = s;
        printf("%d  " , s);
    }
    return 1;
}

int main() {
    int num;
    febochine(num);
    return 0;
}