#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];

    printf("Entrez une chaine de caracteres : ");
    fgets(ch, sizeof(ch), stdin);
    size_t len = strlen(ch);
    if (len > 0 && ch[len - 1] == '\n') {
        ch[len - 1] = '\0';
    }

    printf("Vous avez saisi : %s\n", ch);

    return 0;
}