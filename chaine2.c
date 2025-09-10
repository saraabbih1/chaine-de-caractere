#include <stdio.h>

int main() {
    char chaine[50];
    int i = 0, longueur = 0;

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);
    while (chaine[i] != '\0') {
        longueur++;
        i++;
    }
    printf("La longueur de la chaine est : %d\n", longueur);

    return 0;
}