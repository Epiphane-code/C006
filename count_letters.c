#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    int count = 0;
    int voyelles = 0;
    int consonnes = 0;
    while (str[count] != '\0') {
        char c = str[count];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        count++;
    }
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
