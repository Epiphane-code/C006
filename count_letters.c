#include <stdio.h>
int main() {
    char str[100];                                   // declaration d'un tableau de 100 caracteres
    int i, voyelles = 0, consonnes = 0;         // declaration des variables pour le comptage
    char c;
    scanf("%99[^\n]", str);                            // lecture de la chaine de caracteres
    for (i = 0; str[i] != '\0'; i++) {                // boucle pour parcourir la chaine
        c = str[i];
        if (c >= 'a' && c <= 'z') {                   // si c est une lettre minuscule
            c -= 'a';                                 // conversion en index de 0 a 25
            if (c == 0 || c == 4 || c == 8 || c == 14 || c == 20) {
                voyelles++;                            // incrementer le compteur de voyelles
            } else {
                consonnes++;                           // sinon, incrementer le compteur de consonnes
            }
        } else if (c >= 'A' && c <= 'Z') {            // si c est une lettre majuscule
            c -= 'A';                                 // conversion en index de 0 a 25
            if (c == 0 || c == 4 || c == 8 || c == 14 || c == 20) {
                voyelles++;                            // incrementer le compteur de voyelles
            } else {
                consonnes++;                           // sinon, incrementer le compteur de consonnes
            }
        }
    }
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
