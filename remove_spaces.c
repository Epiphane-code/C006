#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] != ' '){
            printf("%c", str[len]);
        }
        len++;
    }
    return 0;
}