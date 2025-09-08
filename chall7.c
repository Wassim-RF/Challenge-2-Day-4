#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]) {
    int debut = 0;
    int fin = strlen(str) - 1;
    char t;
    while (debut < fin) {
        t = str[debut];
        str[debut] = str[fin];
        str[fin] = t;
        debut++;
        fin--;
    }
}

int main() {
    char mot[32];
    printf("Entrer un mot : ");
    scanf("%s" , mot);
    inverser_chaine(mot);
    printf("Apres inversion : %s .\n", mot);
    return 0;
}
