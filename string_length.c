#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    int count = -1;
    while (str[len] != '\0') {
        if (str[len] != ' ') {
            count++;
        }
        len++;
    }
    printf("Longueur de la chaîne : %d\n", count);
    return 0;
}