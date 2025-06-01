#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    printf("Chaîne inversée : ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}