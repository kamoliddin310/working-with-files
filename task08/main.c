#include <stdio.h>

int main() {
    FILE *i = fopen("Input.txt", "r");
    FILE *o = fopen("output.txt", "w");

    if (i == NULL || o == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }
    int ascii_code;
    while (fscanf(i, "%d", &ascii_code) == 1) {
        fprintf(o, "%c", (char)ascii_code);
    }
    fclose(i);
    fclose(o);
    return 0;
}