#include <stdio.h>
int main() {
    char str[100]; //declaration du tableau
    scanf("%s", str);   // lire une chaîne
    int len = 0;           //pour compter les case avant \0
    while (str[len] != '\0') {  // pas à la fin du tableau
        len++;                 // compte + 1
    }
    printf("Chaîne inversée : ");  
    for (int i = len - 1; i >= 0; i--) {  
        // afficher inersement
        printf("%c", str[i]);
    }
    return 0;
}