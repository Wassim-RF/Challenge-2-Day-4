#include <stdio.h>
#include <string.h>

void inverser_chaine(char arr[]) {
    int debut = 0;
    int fin = strlen(arr) - 1;
    char t;
    while (debut < fin) {
        t = arr[debut];
        arr[debut] = arr[fin];
        arr[fin] = t;
        debut++;
        fin--;
    }
}

int main() {
    char mot[32];
    printf("Entrer un mot : ");
    scanf("%s" , mot);
    inverser_chaine(mot);
    printf("Apres inversion : %s.\n", mot);
    return 0;
}
