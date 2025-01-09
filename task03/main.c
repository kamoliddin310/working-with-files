#include<stdio.h>

int main() {
    FILE *input = fopen("1.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int line_to_remove, current_line = 1;
    char buffer[256];

    printf("O'chiriladigan qator raqamini kiriting: ");
    scanf("%d", &line_to_remove);

    while (fgets(buffer, sizeof(buffer), input)) {
        if (current_line++ != line_to_remove) fputs(buffer, output);
    }

    fclose(input);
    fclose(output);
    return 0;
}