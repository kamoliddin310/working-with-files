#include <stdio.h>

int main(){

    FILE *f = fopen("data.txt", "r");

    int n;
    fscanf(f, "%d", &n);
    printf("%d\n", n);

    fscanf(f, "%d", &n);
    printf("%d\n", n);

    fseek(f, 9, SEEK_CUR);

    fscanf(f, "%d", &n);
    printf("%d\n", n);
    
    fclose(f);

    return 0;
}
