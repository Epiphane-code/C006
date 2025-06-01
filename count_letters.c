#include <stdio.h>
int main() {
    char str[100];                                   // declaration d'un tableau de 100 caracteres
    int i, voyelles = 0, consonnes = 0;         // declaration des variables pour le comptage
    char c = ' ';                                 // initialisation de la variable c
    while (c != '\n'){                        // lecture d'un caractere
        if (c >= 'a' && c <= 'z') {              // si le caractere est une lettre minuscule
            str[i++] = c;                         // on l'ajoute au tableau
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
                voyelles++;                        // on incremente le compteur de voyelles
            } else {
                consonnes++;                       // sinon, on incremente le compteur de consonnes
            }
        }
        scanf("%c", &c);                          // on lit le caractere suivant
    }
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
