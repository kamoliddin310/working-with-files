#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *o = fopen("output.txt", "w");
    if (in == NULL || o == NULL) {
        printf("Fayllarni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    int numbers[10];
    for (int i = 0; i < 10; i++) {
        fscanf(in, "%d", &numbers[i]);
    }
    
    fprintf(o, "%d %d\n", numbers[0], numbers[9]);

    fclose(in);
    fclose(o);

    return 0;
}
