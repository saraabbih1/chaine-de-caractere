#include <stdio.h>
#include <string.h>

int main() {
    char chaine[]="youcode";
    char cara;
    int i = 0; 
    printf("Entrez le cara à rechercher : ");
    scanf(" %c", &cara);  
    char *p = strchr(chaine, cara);
    while (p != NULL) {
     i++;
     p = strchr(p + 1, cara);  
    }
    printf("'%c' aprtr %d fois dans \"%s\".\n", cara, i, chaine);
    return 0;
}
