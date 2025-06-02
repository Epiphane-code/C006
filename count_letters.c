#include <stdio.h>
int main() {
    int n; 
    int voyelle = 0;
    int consonne = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n'){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' )){
            if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y' ){
                voyelle++;
            }
            else consonne++;

        }
        char nv;
        scanf("%c", &nv);
        c = nv;

    }
    
    printf("Voyelles : %d\n", voyelle);
    printf("Consonnes : %d\n", consonne);

    return 0;
}
