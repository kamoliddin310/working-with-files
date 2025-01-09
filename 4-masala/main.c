#include <stdio.h>

int main() {

    int s, i = 1, sum = 0;
    printf("N ni kiriting: ");
    scanf("%d", &s);

    FILE *f = fopen("1.txt", "w");

    f = fopen("output.txt", "w");

    while (i <= s) {
        sum += i;
        if (i == s)
            fprintf(f, "%d = %d", i, sum);
         else 
            fprintf(f, "%d + ", i);
        i++;
        
    }
    fclose(f);
    return 0;
}
