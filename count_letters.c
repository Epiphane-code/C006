#include <stdio.h>
//int main() {
    char str[100];                                   // declaration d'un tableau de 100 caracteres
    fgets(str, sizeof(str), stdin);                  // lire la ligne entiere
    int count = 0;                                   //compteur
    int voyelles = 0;                                // nombre des voyelles
    int consonnes = 0;                               // nombre des consonnes
    while (str[count] != '\0') {                     // si on n'est pas à la fin de la ligne
        char c = str[count];                         // on recupère la valeur
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { // si c'est un caractère de l'alphabets
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || // si voyelle minuscle
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') { // si voyelle majuscule
                voyelles++;                  //voyelle +1
            } else {                         //sinon
                consonnes++; consonne +1
            }
        }
        count++;                            //caractere suivant
    }
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
