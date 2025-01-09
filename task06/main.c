#include <stdio.h>

int main(){
    FILE *f = fopen("1.txt", "r");
    FILE *in = fopen("2.txt", "r");

    if(f == NULL || in == NULL){
        printf("fileni ochishda muommo bor:");
        return 1;
    }
    FILE *o = fopen("output.txt", "w");

    char c[100];
    int i = 0;
    int u = 0;

    while (!feof(f)){
        fscanf(f, "%s", c[i]);
        fscanf(f, "%s", in[u]);
        i++;
        u++;
    }

    fclose(f);
    fclose(in);

    int length = sizeof(c) / sizeof(c[0]);
    int leng = sizeof(in) / sizeof(in[0]);

    for(int i = 0; i < length; i++){
        fprintf(o, "%s", c[i]);
    }

    for(int i = 0; i < leng; i++){
        fprintf(o, "%s", in[i]);
    }

    return 0;
    
}