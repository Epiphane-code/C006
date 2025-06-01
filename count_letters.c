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
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        count++;
    }
    printf("Voyelles : %d\nConsonnes : %d", voyelles, consonnes);

    return 0;
}
